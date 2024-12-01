/*Mokobia Joan Chidiebere,  st135508@student.spbu.ru   Project 1*/
#include "weapon.h"

std::string Weapon :: getName() const
{
    return _name;
}

void  Weapon :: setName( const std::string& newName)
{
    _name = newName;
}

int Weapon :: getSize() const
{
    return _size;
}

void Weapon :: setSize( int newSize)
{
    _size = newSize;
}
 