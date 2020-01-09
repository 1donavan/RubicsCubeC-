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
	void SetOrigins();
	Vei2 centerOfScreen = { 400, 300 };
	std::vector<Color> cubeColors;
	RubicsFace rubicsSides[6];
	int dimension = 3;
	int squareSize = 20;
	int gapBetweenSides = 40;
	Vei2 origins[6];

};