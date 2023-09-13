#ifndef CONSUMER_CPP
#define CONSUMER_CPP

#include "../include/Consumer.hpp"
#include <iostream>

Consumer::Consumer(RingBuffer& buffer) : buffer_(buffer) {}

void Consumer::processEvents() {
    OrderEvent order;
    while (buffer_.pop(order)) {
        std::cout << "Processed order for " << order.getSymbol() << "\n";
    }
}


#endif // CONSUMER_CPP