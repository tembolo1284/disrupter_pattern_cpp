#include "include/RingBuffer.hpp"
#include "include/Producer.hpp"
#include "include/Consumer.hpp"
#include <thread>
#include <iostream>

int main() {
    RingBuffer buffer(10);
    Producer producer(buffer);
    Consumer consumer(buffer);

    // Simulate producing order events
    
    std::thread producerThread([&]() {
        for (int i = 0; i < 5; ++i) {
            OrderEvent order("GOOG", 150.0 + i, 100, OrderType::BUY);
            producer.produce(order);
        }
    });
    
    
    // Simulate consuming order events
    std::thread consumerThread([&]() {
        consumer.processEvents();
    });
    
    producerThread.join();
    consumerThread.join();
    
    return 0;
}
