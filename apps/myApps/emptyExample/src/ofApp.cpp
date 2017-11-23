#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("Examples");
    ofSetWindowShape(2000, 800);
    ofSetFrameRate(40);
    ofBackground(ofColor::white);
    count = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(ofColor::white);
    ofPushMatrix();
    ofTranslate(0,ofGetHeight()/2);
    switch (count) {
        case 0:
            stripePattern1();
            break;
        case 1:
            stripePattern2();
            break;
        default:
            break;
    }
    ofPopMatrix();
}

void ofApp::stripePattern1() {
    ofSetColor( ofColor::black );
    ofSetLineWidth(2);
    for(int i=0; i<80;i++) {
        ofPushMatrix();
        ofTranslate(i*25,0);
        ofRotate(i*(ofGetFrameNum()%360));
        ofDrawLine(0, -300, 0, 300);
        ofPopMatrix();
    }
}

void ofApp::stripePattern2() {
    ofSetColor(ofColor::black);
    ofSetLineWidth(3.0);
    ofNoFill();
    for (int i=0; i<100; i++) {
        ofPushMatrix();
        ofTranslate(i*20, 0);
        ofRotate(i*5);
        ofScale(6,6);
        ofTriangle(0, 0, -50, 100, 50, 100);
        ofPopMatrix();
    }
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    count =   (++count)%2;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
