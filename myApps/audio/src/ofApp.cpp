#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofSoundStreamSetup(2, 0,48000, 512, 4);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

//    float frequency;
//    float phase;
//    float amplitude;
    
    phase = ofGetElapsedTimef()*TWO_PI;
    
    float y = ofMap(sin(phase), -1, 1, 0, ofGetHeight());
    float x = ofMap(phase, 0, TWO_PI, 0, ofGetHeight());
    
    ofDrawCircle(x, y, s);
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------


void ofApp::auidoOut(float* buffer, int bufferSize, int nChannels){
    
    
    for(int i = 0; i < bufferSize; i++){
        float currentSample = 0;
        
        buffer[i*nChannels + 0] = currentSample; //left channel
        buffer[i*nChannels + 1] = currentSample; //right channel
        
    }
    
}

//--------------------------------------------------------------------------
void ofApp::exit(){
    
    
}

//----------------------------------------------------------------

