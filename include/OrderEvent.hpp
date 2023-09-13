#ifndef ORDEREVENT_HPP
#define ORDEREVENT_HPP

#include <string>

enum class OrderType {
    BUY,
    SELL
};

class OrderEvent {
private:
    std::string symbol_;
    double price_;
    int volume_;
    OrderType type_;

public:
    OrderEvent();
    OrderEvent(const std::string& symbol, double price, int volume, OrderType type);

    // Getters and setters
    std::string getSymbol() const;
    double getPrice() const;
    int getVolume() const;
    OrderType getOrderType() const;

    void setSymbol(const std::string& symbol);
    void setPrice(double price);
    void setVolume(int volume);
    void setOrderType(OrderType type);

};

#endif // ORDEREVENT.HPP