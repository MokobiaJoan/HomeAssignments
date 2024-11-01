/*Mokobia Joan Chidiebere, st135508@student.spbu.ru, 24.B83-mm*/
#include "Transformers.h"
#ifndef AUTOBOT_H
#define AUTOBOT_H
#include <iostream>
#include <string>
class Autobot : public Basetransformer{
    private:
    std::string moralAlignment;
    std::string groundVehicle;
    
    public:
    //+1 when an object is created
    static int  autobotCounter;
    //constructor
    Autobot(){
        autobotCounter++;
    }
    std::string getMoralAlignemt() const;
    void setMoralAlignmet(std::string newMoralAlignment);

    std::string getGroundVehicle() const;
    void setGroundVehicle(std::string newGroundVehicle);
    
 };
#endif