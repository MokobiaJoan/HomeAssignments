/*Mokobia Joan Chidiebere, st135508@student.spbu.ru, 24.B83-mm*/
#include "Transformers.h"
#ifndef DINOBOT_H
#define DINOBOT_H
#include <iostream>
#include <string>


class Dinobot : public BaseTransformer
{
    private:
    std::string _dinosaurForm;
    std::string _dangerous;

    public:
    //+1 when an object is created
    static  int  dinobotCounter;

    //constructor
    Dinobot();

    //constructor with parameter

    bool operator <(const Dinobot& other) const;
    bool operator >(const Dinobot& other) const;


    Dinobot(std::string dinosaur, std::string dangerous);
    std::string getDinosaurForm() const;
    void setDinosaurForm(std::string newDinosaurForm);
    std::string getDangerous() const;
    void setDangerous(std::string newDangerous);
    void aboutRobot()  override;

};

std::ostream& operator<<(std::ostream& os, const Dinobot& dino);
    
 #endif

 