#ifndef RINGBUFFER_HPP
#define RINGBUFFER_HPP

#include "OrderEvent.hpp"
#include <vector>
#include <mutex>

class RingBuffer {
private:
    std::vector<OrderEvent> buffer_;
    size_t capacity_;
    size_t head_;
    size_t tail_;
    std::mutex mutex_;

public:
    explicit RingBuffer(size_t capacity);

    bool push(const OrderEvent& order);
    bool pop(OrderEvent& order);

};


#endif // RINGBUFFER.HPP