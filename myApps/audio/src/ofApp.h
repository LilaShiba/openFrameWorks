#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void exit();
    
        void auidoOut(float* buffer, int bufferSize, int nChannels);
        void mouseMoved(int x, int y );
    
    
        float myArray[100];
    
        float frequency;
        float phase;
        float phaseInc;
        float amplitude;
				
};
