#pragma once

#include "ofMain.h"
#include "ofxNDISender.h"
#include "ofxNDISendStream.h"

class ofApp : public ofBaseApp{
	
public:
	void setup();
	void update();
	void draw();
	
	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	void audioIn(ofSoundBuffer &buffer);
	void clearBuffer();
private:
	ofxNDISender sender_;
	ofxNDISendAudio audio_;
	ofSoundStream sound_;
	ofSoundBuffer buffer_;
	float minimum_buffer_duration_=1;
};
