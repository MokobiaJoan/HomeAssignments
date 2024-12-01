/*Mokobia Joan Chidiebere,  st135508@student.spbu.ru   Project 1*/

#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>


class Weapon
{
    private:
    std::string _name;
    int _size;

    public:
    std::string getName() const;

    void setName( const std::string& newName);
    int getSize() const;
    void setSize( int newSize);

};
#endif