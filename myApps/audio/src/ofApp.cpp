#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
 
    frequency = 440;
    amplitude = 0.1;
    phase = 0;
    phaseInc  = (TWO_PI * frequency) /(float)48000;
    



    ofSoundStreamSetup(2, 0, 48000, 512, 4);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){


}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    frequency = ofMap(x, 0, ofGetWidth(), 40, 2000);
    phaseInc = (TWO_PI*frequency)/(float)48000;

}

//--------------------------------------------------------------


void ofApp::auidoOut(float* buffer, int bufferSize, int nChannels){
    
    
    for(int i = 0; i < bufferSize; i++){
        float currentSample = 0;
        
        //phase = ofGetElapsedTimef()*TWO_PI * frequency;
        
        currentSample = sin(phase) * amplitude;
        phase += phaseInc;
        
        
        buffer[i * nChannels + 0] = currentSample; //left channel
        buffer[i * nChannels + 1] = currentSample; //right channel
        
    }
    
}

//--------------------------------------------------------------------------
void ofApp::exit(){
    
    
}

//----------------------------------------------------------------

