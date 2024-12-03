/*Mokobia Joan Chidiebere, st135508@student.spbu.ru, 24.B83-mm*/
#include "Transformers.h"
#ifndef PREDACON_H
#define PREDACON_H
#include <iostream>
#include <string>
class Predacon: public BaseTransformer{
    private:
    std::string _beastForm;
    std::string _peaceful;
    
    
    public:
    //constructors
    Predacon();
    Predacon(std::string beast, std::string peace);
    std::string getBeastForm() const;
    void setDinosaurForm(std::string newBeastForm);

    std::string getPeaceful() const;
    void setPeaceful(std::string newPeaceful);
    void aboutRobot()  override;
    
 };

 #endif