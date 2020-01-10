#pragma once
#include "Colors.h"

class SingleCube {
public:
	SingleCube(Color sideColors[3]);
	void SetCubeColors(Color sideColors[3]);


private:

	// Colors will go left, right, top/bottom
	// if only top or bottom and one color the other color will be left
	Color sideColor[3] = { Colors::Black, Colors::Black, Colors::Black };

};