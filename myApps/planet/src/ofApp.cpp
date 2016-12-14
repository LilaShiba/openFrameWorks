#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(120);
    planet01.setup();
    planet02.setup();
    
    
    planetGroups.add(planet01.planetGroup);
    planetGroups.add(planet02.planetGroup);

    
    gui.setup(planetGroups);
    

}

//--------------------------------------------------------------
void ofApp::update(){
    planet01.update();
    planet02.update();
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    planet01.draw();
    
    ofTranslate(planet01. posX, planet01.posY);
    planet02.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
