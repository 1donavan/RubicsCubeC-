#pragma once
#include <vector>
#include "Vei2.h"
#include "RubicsFace.h"
#include "Colors.h"
#include "SingleCube.h"

// TO DO:

// 1.Incorperate the new singlecube interface into the desgn
// 2. Figure out how to go from cubes to graphical interface

class RubicsCube {
public:
	RubicsCube();
	RubicsCube(const std::vector<Color>& cubeColor);
	RubicsCube(const std::vector<Color>& cubeColor, int dimension);
	void RandomizeColors();
	const RubicsFace& GetFace(int faceSelect);
	

private:
	void SetOrigins();
	SingleCube nCubes[26];
	Vei2 centerOfScreen = { 400, 300 };
	std::vector<Color> cubeColors;
	// Indexes are as follows: top front bottom left right back
	RubicsFace rubicsSides[6];
	int dimension = 3;
	int squareSize = 20;
	int gapBetweenSides = 40;
	Vei2 origins[6];

};