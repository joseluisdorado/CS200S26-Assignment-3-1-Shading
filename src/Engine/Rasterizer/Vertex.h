#pragma once

namespace Rasterizer
{
	struct Vertex
	{
		AEVec2 mPosition;
		Color  mColor;

		Vertex(const AEVec2 &position,const Color &color) {
			mPosition = position;
			mColor = color;
		}
	};
}