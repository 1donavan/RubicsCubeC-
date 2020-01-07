#pragma once
#include <vector>
#include "Vei2.h"
#include "Colors.h"


class RubicsFace {
public:
	RubicsFace() = default;
	// A constructor to set all values
	RubicsFace(Vei2 origin, std::vector<Color> faceColors);
	RubicsFace(Vei2 origin, std::vector<Color> faceColors, int faceDimension);
	// Vector to hold colors for the face
	std::vector<Color> faceColors = { Colors::White };
	Vei2 GetOrigin();
	void SetOrigin(Vei2 newOrigin);
	int GetFaceDimension();
	int GetDrawDimension();
	int GetCellPadding();

private:
	int faceDimension = 3;
	int drawDimension = 30;
	Vei2 origin{ 240  - ((faceDimension * drawDimension) / 2), 100 };
	int cellPadding = 2;
};