#ifndef PRODUCER_HPP
#define PRODUCER_HPP

#include "RingBuffer.hpp"

class Producer {
private:
    RingBuffer& buffer_;

public:
    explicit Producer(RingBuffer& buffer);

    void produce(const OrderEvent& order);

};


#endif //PRODUCER.HPP