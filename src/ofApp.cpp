#include "ofApp.h"

float loc_x, loc_y;
int red, green, blue;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
    ofSetCircleResolution(64);
    
    loc_x = ofGetWidth() / 2;
    loc_y = ofGetHeight() / 2;
    
    red = 31;
    green = 63;
    blue = 255;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // case1
    /*
    ofSetColor(31, 63, 255);
    ofDrawCircle(mouseX, mouseY, 40);
    */

    // case2
    ofSetColor(red, green, blue);
    ofDrawCircle(loc_x, loc_y, 40);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    red = 127;
    green = 127;
    blue = 127;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    loc_x = x;
    loc_y = y;
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    loc_x = x;
    loc_y = y;
    
    red = 255;
    green = 63;
    blue = 31;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    red = 31;
    green = 63;
    blue = 255;
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
