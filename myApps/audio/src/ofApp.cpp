#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    for (int i = 0; i < 100; i++){
        myArray[i] = 1 * 2;
    }
    
    cout << myArray[40] << endl;
    
    frequency = 0.25;
    amplitude = 1;
    
    

    
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
    
    phase = ofGetElapsedTimef()*TWO_PI * frequency;
    phase = fmod(phase, TWO_PI);
    
    
    float y = ofMap(sin(phase), -1, 1, 0, ofGetHeight()) * amplitude;
    float x = ofMap(phase, 0, TWO_PI, 0, ofGetHeight());
    
    ofDrawCircle(x, y, 5);
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------


void ofApp::auidoOut(float* buffer, int bufferSize, int nChannels){
    
    
    for(int i = 0; i < bufferSize; i++){
        float currentSample = 0;
        
        phase = ofGetElapsedTimef()*TWO_PI * frequency;
        currentSample = sin(phase) * amplitude;
        
        
        
        buffer[i*nChannels + 0] = currentSample; //left channel
        buffer[i*nChannels + 1] = currentSample; //right channel
        
    }
    
}

//--------------------------------------------------------------------------
void ofApp::exit(){
    
    
}

//----------------------------------------------------------------

