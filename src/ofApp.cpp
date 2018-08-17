#include "ofApp.h"

void ofApp::setup(){
    armSegmentLength = 200;
    rotationHandleLength = 30;
    halfArmSegmentLength = armSegmentLength * 0.5;

    vector<float> pos1;
    pos1.push_back(107.556142);
    pos1.push_back(18.287954);
    pos1.push_back(-31.694707);
    pos1.push_back(-80.173142);
    pos1.push_back(54.40202);
    pos1.push_back(47.5225);

    vector<float> pos2;
    pos2.push_back(110.502873);
    pos2.push_back(16.85499);
    pos2.push_back(-20.773317);
    pos2.push_back(-87.495543);
    pos2.push_back(57.44562);
    pos2.push_back(56.339155);

    vector<float> pos3;
    pos3.push_back(113.372196);
    pos3.push_back(16.271157);
    pos3.push_back(-11.389181);
    pos3.push_back(-92.732377);
    pos3.push_back(60.845318);
    pos3.push_back(63.778976);

    movements.push_back(pos1);
    movements.push_back(pos2);
    movements.push_back(pos3);
}

void ofApp::update(){

}

void ofApp::draw(){
    ofBackground(ofColor::black);
    ofPushMatrix();
    setCoordinateSystem();
    drawArmSegment();
    ofRotateY(movements.at(0).at(0));
    ofRotateZ(movements.at(0).at(1));
    drawArmSegment();
    ofRotateY(movements.at(0).at(2));
    ofRotateZ(movements.at(0).at(3));
    drawArmSegment();
    ofRotateY(movements.at(0).at(4));
    ofRotateZ(movements.at(0).at(5));
    drawArmSegment();
    ofPopMatrix();
}

void ofApp::drawArmSegment(){
    ofSetColor(ofColor::wheat);
    ofSetLineWidth(3);
    ofDrawLine(0, 0, 0, armSegmentLength);
    ofSetColor(ofColor::green);
    ofSetLineWidth(1);
    ofDrawLine(0, halfArmSegmentLength, rotationHandleLength, halfArmSegmentLength);
    ofTranslate(0, armSegmentLength);
}

void ofApp::setCoordinateSystem(){
    ofTranslate(ofGetWidth() * 0.5, ofGetHeight());
    ofRotateZ(180);
    ofRotateY(180);
}
