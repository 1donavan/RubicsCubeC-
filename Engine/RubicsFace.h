#pragma once
#include <vector>
#include "Vei2.h"
#include "Colors.h"


class RubicsFace {
public:
	RubicsFace() = default;
	// A constructor to set all values
	RubicsFace(Vei2 origin, std::vector<Color> faceColors);
	// Vector to hold colors for the face
	std::vector<Color> faceColors = { Colors::White };
	Vei2 GetOrigin();
	int GetFaceDimension();
	int GetDrawDimension();
private:
	int faceDimension = 3;
	int drawDimension = 30;
	Vei2 origin{ 240  - ((faceDimension * drawDimension) / 2), 100 };

};