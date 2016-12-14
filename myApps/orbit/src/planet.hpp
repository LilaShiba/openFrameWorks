//
//  planet.hpp
//  orbit
//
//  Created by James, Kyle on 12/12/16.
//
//

#ifndef planet_hpp
#define planet_hpp

#include <ofMain.h>

class Planet{
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
    
    float roatation = 0.0;
};

#endif /* planet_hpp */
