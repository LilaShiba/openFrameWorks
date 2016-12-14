//
//  planetclass.hpp
//  planet
//
//  Created by James, Kyle on 12/12/16.
//
//

#ifndef planetclass_hpp
#define planetclass_hpp

#include "ofMain.h"

class PlanetClass{
public:
    void setup();
    void update();
    void draw();
    
    ofParameterGroup planetGroup;
    ofParameter<float> rotateSpeed;
    ofParameter<float> posX;
    ofParameter<float> posY;
    ofParameter<int> red;
    ofParameter<int> green;
    ofParameter<int> blue;
    
    float rotation = 0.0;
};

#endif /* planetclass_hpp */
