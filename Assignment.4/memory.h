/*Mokobia Joan Chidiebere, st135508@student.spbu.ru, 24.B83-mm*/

#ifndef MEMORY_H
#define MEMORY_H
#include <string>
#include <iostream>

class Memory
{
    public:
    double _capacity;
    std::string _speed;

    void setCapacity(double newCapacity);
    double getCapacity();

    void setSpeed(std::string& newSpeed);
    std::string getSpeed();

};
#endif