/*Mokobia Joan Chidiebere,  st135508@student.spbu.ru   Project 1*/
#include <gtest/gtest.h>
#include "Transformers.h"
#include "autobot.h"
#include "dinobot.h"
#include "predacon.h"  
#include <iostream>

   
// base class test
TEST(TransformerTest, transformers){
   BaseTransformer myRobo2;
   myRobo2.setName("Titanus");
   myRobo2.setHeight(150);
   EXPECT_EQ(myRobo2.getHeight(),150);
   EXPECT_EQ(myRobo2.getName(),"Titanus");
}
//autobots
 //we initialized the value of the autobots counter 
  int Autobot::autobotCounter=0;
TEST(AutobotTest, autobotsCount){

    Autobot autobot;
    Autobot autobot1;
    Autobot autobotQ;
    EXPECT_EQ(Autobot:: autobotCounter,3);
}
//dinobot
//we initialized the value of the counter 
int Dinobot::dinobotCounter=0;
TEST(DinobotTest, dinobotsCount){
    Dinobot dinbot;
    EXPECT_EQ(Dinobot:: dinobotCounter,1);
}
//predacons
TEST(PredaconTest, predaconGetName){
     Predacon predacon;
    predacon.setName("Chidima");
    EXPECT_EQ(predacon.getName(),"Chidima");
}


int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
