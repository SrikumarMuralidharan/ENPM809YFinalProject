//
// Created by srikumar on 4/23/20.
//

#pragma once
#include <iostream>
#include <string>
#include <memory>
#include "../LandBasedRobot/landbasedrobot.h"

namespace rwa3{
    class LandBasedWheeled: public LandBasedRobot{
    public:
        void GoUp(int x, int y) override;        //--Move robot up in maze
        void GoDown(int x, int y) override;      //--Move robot down in maze
        void TurnLeft(int x, int y) override;    //--Move robot left in maze
        void TurnRight(int x, int y) override;   //--Move robot right in maze
        void PickUp(std::string) override;       //--Arm picks up the object
        void Release(std::string) override;      //--Arm releases the object
        LandBasedWheeled(std::string name="None", int x='0', int y='0', double speed='0', int a='2'): LandBasedRobot(name,x,y,speed), wheel_number{a}{
//            std::cout<<"rwa3::LandBasedWheeled constructor called"<<std::endl;
        }
        virtual ~LandBasedWheeled(){
//            std::cout<<"rwa3::LandBasedWheeled destructor called"<<std::endl;
        }
    protected:
        int wheel_number;                             //--Number of wheels mounted on the robot
        std::shared_ptr<std::string> wheel_type;      //--Type of wheel on robot
    };      //--class end
}          //--namespace end