#include "RubicsCube.h"

RubicsCube::RubicsCube()
{
	*this = RubicsCube(std::vector<Color> {Colors::White, Colors::White, Colors::White});
}

RubicsCube::RubicsCube(const std::vector<Color>& cubeColor)
{
	*this = RubicsCube(cubeColor, 3);
}

RubicsCube::RubicsCube(const std::vector<Color>& cubeColor, int dimension)
	:
	cubeColors(cubeColor),
	dimension(dimension)
{
	SetOrigins();
	for (int i = 0; i < 6; i++) {
		// Final Rubics Layout
		rubicsSides[i].SetOrigin(origins[i]);
		rubicsSides[i].faceColors.clear();
		for (int j = 0; j < 9; j++) {
			if (cubeColor.size() > j + (i * 9)) {
				rubicsSides[i].faceColors.emplace_back(cubeColor[j + (i * 9)]);
			} else {
				rubicsSides[i].faceColors.emplace_back(Colors::Black);
			}
		}
	}

}

void RubicsCube::RandomizeColors()
{
}

const RubicsFace & RubicsCube::GetFace(int faceSelect)
{
	return rubicsSides[faceSelect];
}

void RubicsCube::SetOrigins()
{
	int blockSize = squareSize * dimension;
	for (int i = 0; i < 3; i++) {
		origins[i] = centerOfScreen - Vei2{ blockSize + gapBetweenSides, (blockSize / 3 * 2) + gapBetweenSides * (i - 1) + (i * blockSize) };
	}

	for (int i = 3; i < 7; i++) {
		int j = i;
		if (i > 4) {
			j = i - 1;
		}

		if (i != 4) {
			origins[j] = centerOfScreen - Vei2{ (blockSize + gapBetweenSides) * -(i - 5) , blockSize + gapBetweenSides}; 
		}
	}
}



