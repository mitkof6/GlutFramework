
//-lGL -lglut -GLU

#include "Viewer.h"
#include "Renderable.h"
#include "Grid.h"
#include "TeaPot.h"

int main(int argc, char** argv){
	Viewer viewer(argc, argv);

	Renderable *grid = new Grid(0.9, 0.5, 0.6, 20, -5);
	viewer.addToDraw(grid);

	Renderable *teaPot = new TeaPot(0.5, 0.5, 0.7, 7);
	viewer.addToDraw(teaPot);

	viewer.start();

	return 0;
}

