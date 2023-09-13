#ifndef CONSUMER_HPP
#define CONSUMER_HPP

#include "RingBuffer.hpp"

class Consumer {
private:
    RingBuffer& buffer_;

public:
    explicit Consumer(RingBuffer& buffer);

    void processEvents();

};


#endif // CONSUMER.HPP