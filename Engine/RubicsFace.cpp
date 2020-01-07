#include "RubicsFace.h"

RubicsFace::RubicsFace(Vei2 origin, std::vector<Color> faceColors)
{
	RubicsFace(origin, faceColors, 3);
}

RubicsFace::RubicsFace(Vei2 origin, std::vector<Color> faceColors, int faceDimension)
	:
	origin(origin),
	faceColors(faceColors),
	faceDimension(faceDimension)
{
}

Vei2 RubicsFace::GetOrigin()
{
	return origin;
}

void RubicsFace::SetOrigin(Vei2 newOrigin)
{
	origin = newOrigin;
}

int RubicsFace::GetFaceDimension()
{
	return faceDimension;
}

int RubicsFace::GetDrawDimension()
{
	return drawDimension;
}

int RubicsFace::GetCellPadding()
{
	return cellPadding;
}
