#include <AEEngine.h>
#include "Rasterizer.h"
#include "AttributeInterpolator.h"

namespace Rasterizer
{



	void FillTriangleNaive(const AEVec2& v0, const AEVec2& v1, const AEVec2& v2, const Color& c)
	{
	}

	void FillTriangleTopLeft(const AEVec2& v0, const AEVec2& v1, const AEVec2& v2, const Color& c)
	{
	}

	/// -----------------------------------------------------------------------
	///	DRAW TRIANGLE ALGORITHM IMPLEMENTATIONS
	/// 
	/// 
	/// enum	EDrawLineMethod
	///	\brief	Specifies which method should be used when drawing a line. 
	EDrawTriangleMethod currentDrawTriangle = eDT_BILINEAR;

	void DrawTriangle(const Vertex& v0, const Vertex& v1, const Vertex& v2)
	{

	}

	void DrawTriangleBiLinear(const Vertex& v0, const Vertex& v1, const Vertex& v2)
	{

	}

	void DrawTrianglePlaneNormal(const Vertex& v0, const Vertex& v1, const Vertex& v2)
	{

	}


	void DrawTriangleBarycentric(const Vertex& v0, const Vertex& v1, const Vertex& v2)
	{

	}

	
	void DrawTriangleShaded(const float* vertices, const unsigned int& vertexSize, ShaderFunc shader)
	{		

	}

	EDrawTriangleMethod GetDrawTriangleMethod() {
		return currentDrawTriangle;
	}

	void SetDrawTriangleMethod(EDrawTriangleMethod triangleMethod) {
		currentDrawTriangle = triangleMethod;
	}

}