//
// Created by srikumar on 4/23/20.
//

#pragma once
#include <iostream>
#include <string>

namespace rwa3 {
    class LandBasedRobot {
    public:
        //--methods
        virtual void GoUp(int x, int y)=0;        //--Move robot up in maze
        virtual void GoDown(int x, int y)=0;      //--Move robot down in maze
        virtual void TurnLeft(int x, int y)=0;    //--Move robot left in maze
        virtual void TurnRight(int x, int y)=0;   //--Move robot right in maze
        virtual void PickUp(std::string)=0;       //--Arm picks up the object
        virtual void Release(std::string)=0;      //--Arm releases the object
        virtual int get_x() const {             //--Accessor for X coordinate
            return x_;
        }
        virtual int get_y() const {             //--Accessor for Y coordinate
            return y_;
        }
        virtual std::string get_name() const{   //--Accessor for robot name
            return name_;
        }
        //--Constructor definition
        LandBasedRobot(std::string name="None", int x='0', int y='0', double speed='0'): name_{name}, x_{x}, y_{y}, speed_{speed} {
//            std::cout<<"Calling LandBasedRobot::constructor"<<std::endl;
        }
        //--Destructor definition
        virtual ~LandBasedRobot()
        {
//            std::cout<<"Calling LandBasedRobot::destructor"<<std::endl;
        }

    protected:
        //--attributes
        std::string name_;              //--Name of the robot
        double speed_;                  //--Driving speed of the robot
        double width_;                  //--Width of base of the robot
        double length_;                 //--Length of base of the robot
        double height_;                 //--Height of base of the robot
        double capacity_;               //--Payload capacity
        int x_;                         //--X coordinate of robot in maze
        int y_;                         //--Y coordinate of robot in maze
    }; //--class end
}//--namespace end