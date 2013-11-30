/*
 * Viewer.h
 *
 *  Created on: Oct 22, 2013
 *      Author: Jim Stanev
 */

#ifndef VIEWER_H_
#define VIEWER_H_

#include <vector>

#include "Renderable.h"
#include "Vector3D.h"
#include "Camera.h"

using namespace std;

#define WINDOW_NAME "Viewer"
#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480
#define WINDOW_X_POS 100
#define WINDOW_Y_POS 100

#define CAMERA_MOVE_SPEED 10
#define CAMERA_ROTATE_SPEED 0.01
#define CAM_POS_X 10
#define CAM_POS_Y 10
#define CAM_POS_Z 20
#define CAM_VIEW_X 0
#define CAM_VIEW_Y 0
#define CAM_VIEW_Z 0
#define CAM_UP_X 0
#define CAM_UP_Y 1
#define CAM_UP_Z 0


class Viewer {
public:
	static Viewer *instance;

	Viewer(int argc, char** argv);
	virtual ~Viewer();

	void addToDraw(Renderable *r);
	void start();
private:
	vector<Renderable *> drawable;
	
	Camera camera;

	int sX, sY, eX, eY;
	bool mousePros;

	void init();

	void render();
	void reshape (int w, int h);
	
	void keyboard (unsigned char key, int x, int y);
	void mouseButton(int button, int state, int x, int y);
	void mouseMove(int x, int y);

	static void setDisplayFunction();
	static void setReshapeFunction(int w, int h);

	static void setKeybordFunction(unsigned char key, int x, int y);
	static void setMouseFunction(int button, int state, int x, int y);
	static void setMouseMoveFunction(int x, int y);
};

#endif /* VIEWER_H_ */
