/*Mokobia Joan Chidiebere, st135508@student.spbu.ru, 24.B83-mm*/
#include <gtest/gtest.h>
#include "Transformers.h"
#include "autobot.h"
#include "dinobot.h"
#include "predacon.h"  
#include <iostream>

   
// base class test
TEST(TransformerTest, transformers){
   Basetransformer myRobo2;
   myRobo2.setName("Uranium");
   myRobo2.setHeight(150);
   EXPECT_EQ(myRobo2.getHeight(),150);
   EXPECT_EQ(myRobo2.getName(),"Uranium");
}
//autobots
 //we initialized the value of the autobots counter 
   int Autobot:: autobotCounter = 0;
TEST(AutobotTest, autobotsCount){
    Autobot autobot;
    Autobot autobot1;
    Autobot autobotQ;
    Autobot autobotR;
    EXPECT_EQ(Autobot:: autobotCounter,4);
}
//dinobot
//we initialized the value of the counter 
 int Dinobot:: dinobotCounter = 0;

TEST(DinobotTest, dinobotsCount){
    Dinobot dinbot;
    Dinobot dinbotB;
    Dinobot dinbotC;
    EXPECT_EQ(Dinobot:: dinobotCounter,3);
}
//predacons
TEST(PredaconTest, predaconGetName){
     Predacon predacon;
    predacon.setName("Lithium");
    EXPECT_EQ(predacon.getName(),"Lithium");
}


int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
