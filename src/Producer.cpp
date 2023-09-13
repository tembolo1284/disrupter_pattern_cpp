#ifndef PRODUCER_CPP
#define PRODUCER_CPP

#include "../include/Producer.hpp"
#include <iostream>

Producer::Producer(RingBuffer& buffer) : buffer_(buffer) {}

void Producer::produce(const OrderEvent& order) {
    std::cout << "Producing an order..." << "\n";
    buffer_.push(order);
}


#endif //PRODUCER.CPP