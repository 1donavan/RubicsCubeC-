#include "SingleCube.h"

SingleCube::SingleCube(Color sideColors[3])
{
	SetCubeColors(sideColors);
}

void SingleCube::SetCubeColors(Color sideColors[3])
{
	for (int i = 0; i < 3; i++) {
		sideColor[i] = sideColors[i];
	}
}
