#ifndef BUFFERC_H
#define BUFFERC_H

#include "Monitor.h"

class BufferC : public Monitor
{
public:
    BufferC(Monitor& b)
    :bufferB(b)
    {}

    void push(int input);
    int pop();
    void BufferBEvenOrFull();


private:
    inline bool bFullnessOrParity();
    Condition evenOrFullB;
    Monitor& bufferB;
};

#endif
