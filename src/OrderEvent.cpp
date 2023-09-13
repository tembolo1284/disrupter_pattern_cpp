#ifndef ORDEREVENT_CPP
#define ORDEREVENT_CPP

#include "../include/OrderEvent.hpp"

OrderEvent::OrderEvent() : price_(0.0), volume_(0), type_(OrderType::BUY) {}

OrderEvent::OrderEvent(const std::string& symbol, double price, int volume, OrderType type)
    : symbol_(symbol), price_(price), volume_(volume), type_(type) {}

std::string OrderEvent::getSymbol() const {
    return symbol_;
}

double OrderEvent::getPrice() const {
    return price_;
}

int OrderEvent::getVolume() const {
    return volume_;
}

OrderType OrderEvent::getOrderType() const {
    return type_;
}

void OrderEvent::setSymbol(const std::string& symbol) {
    symbol_ = symbol;
}

void OrderEvent::setPrice(double price) {
    price_ = price;
}

void OrderEvent::setVolume(int volume) {
    volume_ = volume;
}

void OrderEvent::setOrderType(OrderType type) {
    type_ = type;
}

#endif // ORDEREVENT_CPP
