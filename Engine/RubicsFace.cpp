#include "RubicsFace.h"

RubicsFace::RubicsFace(Vei2 origin, std::vector<Color> faceColors)
	:
	origin(origin),
	faceColors(faceColors)
{
}

Vei2 RubicsFace::GetOrigin()
{
	return origin;
}

int RubicsFace::GetFaceDimension()
{
	return faceDimension;
}

int RubicsFace::GetDrawDimension()
{
	return drawDimension;
}
