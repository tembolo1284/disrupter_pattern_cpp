# Disruptor Pattern Example

This project demonstrates a simple implementation of the Disruptor pattern using C++.

## Structure

The project is divided into a few main components:

1. `OrderEvent`: Represents a trading order event with attributes like stock symbol, price, volume, and buy/sell indication.
2. `RingBuffer`: A circular buffer that stores order events, implementing the core of the Disruptor pattern.
3. `Consumer`: Processes order events from the ring buffer.
4. `Producer`: Pushes order events into the ring buffer.

## Building the Project

To build the project:

1. Run cmake to configure the project:  
   `cmake -B build`
2. Compile the project:  
   `cmake --build build`

## Running the Project

After building, you can run the project with:  
`./DisruptorPattern`
