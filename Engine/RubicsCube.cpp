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
	cubeColors(cubeColor)
{
	for (int i = 0; i < 6; i++) {
		// Final Rubics Layout
		rubicsSides[i].SetOrigin(origins[i]);
		// Six side by side layout
		//rubicsSides[i].SetOrigin(Vei2{ (i % 3) * 100, (i / 3) * 100 });
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


