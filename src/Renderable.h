#pragma once

class Renderable{
public:
	Renderable(float r, float g, float b){
		red = r;
		green = g;
		blue = b;
	}
	~Renderable(void){};

	virtual void draw() =0;
protected:
	float red;
	float green;
	float blue;
};

