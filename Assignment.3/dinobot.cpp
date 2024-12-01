/*Mokobia Joan Chidiebere,  st135508@student.spbu.ru   Project 1*/

#include "dinobot.h"
#include <string>
Dinobot :: Dinobot(){
    dinobotCounter++;
}
Dinobot :: Dinobot(std::string dinosaur, std::string dangerous){
    _dinosaurForm = dinosaur;
    _dangerous = dangerous;
}

 
    std::string Dinobot :: getDinosaurForm() const{
        return _dinosaurForm;
    }
    //void  setDinosaurForm(std::string newDinosaurForm);

    std::string Dinobot :: getDangerous() const{
        return _dangerous;
    }
     void Dinobot :: aboutRobot() {
    std::cout<<"dinosaur "<<_dinosaurForm<<"\n";
    std::cout<<"dangerous : "<<_dangerous<<"\n";
}
    
    