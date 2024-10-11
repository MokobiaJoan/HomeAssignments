/*Mokobia Joan Chidiebere,  st135508@student.spbu.ru   Project 1*/


// int main(){
// string input;   
//    cout << "Hello World \n";

//    while (true)
//    {
//     cout << " Enter User or (type 'exit' to quit) \n";
//     getline(cin, input);

//     cout << "Hello, " + input <<"\n";

//     if (input == "exit"){
//         break;
//     }
//    }
   
//    return 0; 
// }

#include "hello.h"

int main(){
    std::string name;

    while (true)
    {

    hi();    

    std::cout << "Enter User or (type 'exit' to quit): ";   
    std::cin>> name;   
    
     if (name == "exit")
     {
        break;
     }
     greet(name);
    }
    return 0;
}