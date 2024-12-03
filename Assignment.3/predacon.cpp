/*Mokobia Joan Chidiebere, st135508@student.spbu.ru, 24.B83-mm*/
#include "predacon.h"

Predacon :: Predacon(){}
Predacon :: Predacon(std::string beast, std::string peace){
    _beastForm = beast;
    _peaceful= peace;
}
std::string Predacon:: getBeastForm() const{
        return _beastForm;
    }
    void setDinosaurForm(std::string newBeastForm);

    std::string Predacon::getPeaceful() const{
        return _peaceful;
    }
    void setPeaceful(std::string newPeaceful);

    void Predacon :: aboutRobot() {
    std::cout<<"BeastForm : "<<_beastForm<<"\n";
    std::cout<<"Peace : "<<_peaceful<<"\n";
}
    