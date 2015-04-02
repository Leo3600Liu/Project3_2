#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(500,500);
    ofSetBackgroundAuto(false);
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    if(ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {
        //ofRect(ofGetMouseX(), ofGetMouseY(), 30, 30);
        for(int i=0; i<50; i++){
            paint.setHue(ofRandom(100,125));
            paint.setSaturation(ofRandom(200,255));
            ofSetColor(paint);
            ofVec2f offset = ofVec2f(ofRandom(-20,20),ofRandom(-20,20));
            ofVec2f mouse = ofVec2f(ofGetMouseX(), ofGetMouseY());
            float size = ofRandom(2, 10);
            ofCircle(mouse+offset, size);
        }
        
    }
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
