//
// Created by srikumar on 4/23/20.
//

#pragma once
#include <iostream>
#include <string>
#include <memory>
#include "../LandBasedRobot/landbasedrobot.h"

namespace rwa3{
  class LandBasedTracked: public LandBasedRobot{
  public:
      void GoUp(int x, int y) override;        //--Move robot up in maze
      void GoDown(int x, int y) override;      //--Move robot down in maze
      void TurnLeft(int x, int y) override;    //--Move robot left in maze
      void TurnRight(int x, int y) override;   //--Move robot right in maze
      void PickUp(std::string) override;       //--Arm picks up the object
      void Release(std::string) override;      //--Arm releases the object
      LandBasedTracked(std::string name="None", int x='0', int y='0', double speed='0'): LandBasedRobot(name,x,y,speed){
//          std::cout<<"rwa3::LandBasedTracked constructor called"<<std::endl;
      }
      virtual ~LandBasedTracked(){
//          std::cout<<"rwa3::LandBasedTracked destructor called"<<std::endl;
      }
  protected:
      std::shared_ptr<std::string> track_type;      //--Type of track on robot
  };    //--class end
}       //--namespace end