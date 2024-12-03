/*Mokobia Joan Chidiebere, st135508@student.spbu.ru, 24.B83-mm*/

#include "memory.h"

double Memory :: getCapacity()
{
    return _capacity;
}


void Memory :: setCapacity(double newCapacity)
{
    _capacity = newCapacity;
}

std::string Memory :: getSpeed()
{
    return _speed;
}

void Memory :: setSpeed(std:: string& newSpeed)
{
    _speed = newSpeed;
}
