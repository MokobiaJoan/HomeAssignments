/*Mokobia Joan Chidiebere, st135508@student.spbu.ru, 24.B83-mm*/
#include "Transformers.h"
 
 
//get method set method and validation
std::string Basetransformer::getName() const  {
    return name;
}
void Basetransformer ::setName( const std::string& newName){
    name = newName;
}
bool Basetransformer :: isValidName() const{
    return !name.empty();
}
//brand
std::string Basetransformer:: getBrand(){
    return brand;
}
void Basetransformer::setBrand(std::string newBrand){
    brand = newBrand;
}
bool Basetransformer :: isValidBrand() const{
    return !brand.empty();
}
std:: string Basetransformer::getColour(){
    return colour;
}
void Basetransformer::setColour(std::string newColour){
    colour = newColour;
}
bool Basetransformer::isValidColour() const{
    return !colour.empty();
}
//shape
std::string Basetransformer :: getShape(){
    return shape;
}
void Basetransformer::setShape(std::string newShape){
    
}
bool Basetransformer::isValidShape() const{
    return !shape.empty();
}
//height
int Basetransformer::getHeight(){
    return height;
}
void Basetransformer::setHeight(int newHeight){
         height = newHeight;
}
bool Basetransformer :: isValidHeight() const{
    return !height > 0;
}
