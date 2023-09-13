#ifndef RINGBUFFER_CPP
#define RINGBUFFER_CPP

#include "../include/RingBuffer.hpp"

RingBuffer::RingBuffer(size_t capacity)
    : capacity_(capacity), head_(0), tail_(0), buffer_(capacity) {}

bool RingBuffer::push(const OrderEvent& order) {
    std::lock_guard<std::mutex> lock(mutex_);
    size_t next = (head_ + 1) % capacity_;
    if (next != tail_) {
        buffer_[head_] = order;
        head_ = next;
        return true;
    }
    return false;
}

bool RingBuffer::pop(OrderEvent& order) {
    std::lock_guard<std::mutex> lock(mutex_);
    if (head_ != tail_) {
        order = buffer_[tail_];
        tail_ = (tail_ + 1) % capacity_;
        return true;
    }
    return false;
}


#endif // RINGBUFFER.CPP