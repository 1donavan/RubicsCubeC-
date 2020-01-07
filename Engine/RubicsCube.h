#pragma once
#include <vector>
#include "Vei2.h"
#include "RubicsFace.h"
#include "Colors.h"

class RubicsCube {
public:
	RubicsCube();
	RubicsCube(const std::vector<Color>& cubeColor);
	RubicsCube(const std::vector<Color>& cubeColor, int dimension);
	void RandomizeColors();
	const RubicsFace& GetFace(int faceSelect);



private:
	std::vector<Color> cubeColors;
	RubicsFace rubicsSides[6];
	Vei2 origins[6] = { {200,40}, {200, 140}, {200, 240}, {100,140}, {300, 140}, {400, 140} };

};