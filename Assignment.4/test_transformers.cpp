/*Mokobia Joan Chidiebere, st135508@student.spbu.ru, 24.B83-mm*/
#include <gtest/gtest.h>
#include "Transformers.h"
#include "autobot.h"
#include "dinobot.h"
#include "predacon.h"  
#include <iostream>
#include <string>
   
// base class test
TEST(TransformerTest, transformers)
{
    BaseTransformer myRobo2;
    myRobo2.setName("Titanus");
    myRobo2.setHeight(150);
    EXPECT_EQ(myRobo2.getHeight(),150);
    EXPECT_EQ(myRobo2.getName(),"Titanus");
}

//autobots
//we initialized the value of the autobots counter
int Autobot::autobotCounter=0;

TEST(AutobotTest, autobotsCount)
{
    Autobot autobot;
    Autobot autobot1;
    Autobot autobotQ;
    EXPECT_EQ(Autobot:: autobotCounter,3);
}

//dinobot
//we initialized the value of the counter

int Dinobot::dinobotCounter=0;
TEST(DinobotTest, dinobotsCount)
{
    Dinobot dinbot;
    EXPECT_EQ(Dinobot:: dinobotCounter,1);
}

//predacons
TEST(PredaconTest, predaconGetName)
{
    Predacon predacon;
    predacon.setName("Chidima");
    EXPECT_EQ(predacon.getName(),"Chidima");
}


 
//testing new comparison
 TEST(BaseTransformer, CheckComparison) {
    BaseTransformer trans1;
    trans1.setHeight(2000);
    BaseTransformer trans2;
    trans2.setHeight(5000);

    ASSERT_TRUE(trans1 < trans2);
    ASSERT_FALSE(trans1 > trans2);
}

TEST(Autobot, CheckComparison) {
    Autobot abot1;
    abot1.setMoralAlignmet("3");
    Autobot abot2;
    abot2.setMoralAlignmet("5");
    //int ab1 = stoi(abot1.getMoralAlignemt());
    //int ab2 = stoi(abot2.getMoralAlignemt());
    ASSERT_FALSE(abot1 > abot2);
    ASSERT_TRUE(abot1 < abot2);
}

 TEST(Dinobot, CheckComparison) {
    Dinobot dino1;
    dino1.setDangerous("5");
    dino1.setDinosaurForm("5");
    Dinobot dino2;
    dino2.setDangerous("3");
    dino2.setDinosaurForm("3");
    //int dn1 = stoi(dino1.getDangerous());
    //nt dn2 = stoi(dino2.getDangerous());
    ASSERT_TRUE(dino1 > dino2);
    ASSERT_FALSE(dino1 < dino2);
} 

TEST(Predacon, CheckComparison) {
    Predacon pcon1;
    pcon1.setPeaceful("3");
    Predacon pcon2;
    pcon2.setPeaceful("7");
    //int pn1 = stoi(pcon1.getBeastForm());
    //int pn2 = stoi(pcon2.getPeaceful());

    ASSERT_TRUE(pcon2 > pcon1);
    ASSERT_FALSE(pcon2 < pcon1);
} 



TEST(Autobot, OutputStream) {
    Autobot abot("120", "Truck");
    
    std::ostringstream oss; 
    oss << abot; 

    std::string expectedOutput = "120 Truck ";
    EXPECT_EQ(oss.str(), expectedOutput);
}
TEST(Predacon, OutputStreamPre) {
    Predacon pred("d", "p");
    
    std::ostringstream oss; 
    oss << pred; 

    std::string expectedOutput = "d p ";
    EXPECT_EQ(oss.str(), expectedOutput);
}
TEST(Dinobot, OutputStreamDin) {
    Dinobot dino("dino", "dang");
    
    std::ostringstream oss; 
    oss << dino; 

    std::string expectedOutput = "dino dang ";
    EXPECT_EQ(oss.str(), expectedOutput);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

 