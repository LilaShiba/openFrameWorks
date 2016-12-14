//
//  planet.cpp
//  orbit
//
//  Created by James, Kyle on 12/12/16.
//
//

#include "planet.hpp"

void Planet::setup(){
    planetGroup.add(rotateSpeed.set("speed", 1.0, 0.0, 9.0));
    planetGroup.add(posX.set("X", 0, 0, 600));
    planetGroup.add(posY.set("Y", 0, 0, 600));
    
    planetGroup.add(red.set("red", 255, 0, 255));
    planetGroup.add(green.set("green", 255, 0, 255));
    planetGroup.add(blue.set("blue", 255, 0, 255));
                    
    
}

void Planet::update(){
    
}
void Planet::draw(){
    
}
