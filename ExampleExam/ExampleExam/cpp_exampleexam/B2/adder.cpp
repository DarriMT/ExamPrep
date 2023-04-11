#include "adder.h"
#include <iostream>

Adder::Adder(int n)
{
    this->n = n;
}

int Adder::add(int value)
{
    return this->n + value;
}