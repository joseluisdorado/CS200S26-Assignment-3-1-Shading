#pragma once

namespace Rasterizer
{
	// TODO
	/// -----------------------------------------------------------------------
	/// \fn		FillTriangleNaive
	/// \brief	Rasterizes a CCW triangle defined by p1, p2, p3 using the naive 
	///			algorithm described in class. Each pixel in the triangle share
	///			the same color.
	/// \param	p1	First triangle vertex position.
	///	\param	p2	Second triangle vertex position.
	///	\param	p3	Third triangle vertex position.
	//	\param	c	Color to fill the triangle with.
	void FillTriangleNaive(const AEVec2& v0, const AEVec2& v1, const AEVec2& v2, const Color& c);

	/// -----------------------------------------------------------------------
	/// \fn		FillTriangleTopLeft
	/// \brief	Rasterizes a CCW triangle defined by p1, p2, p3, using the top
	///			left method described in class. Each pixel in the triangle share
	///			the same color. 
	/// \param	p1	First triangle vertex position.
	///	\param	p2	Second triangle vertex position.
	///	\param	p3	Third triangle vertex position.
	//	\param	c	Color to fill the triangle with.	
	void FillTriangleTopLeft(const AEVec2& v0, const AEVec2& v1, const AEVec2& v2, const Color& c);

	// PROVIDED
	/// -----------------------------------------------------------------------
	/// \enum	EDrawTriangleMethod
	/// \brief	Enumeration of all the internal algorithms used for rasterizing 
	///			with interpolation of color.
	enum EDrawTriangleMethod { eDT_BILINEAR, eDT_PLANE_NORMAL, eDT_BARYCENTRIC, eDT_SHADED };

	// TODO
	/// -----------------------------------------------------------------------
	/// \fn		GetDrawTriangleMethod
	/// \brief	Getter for the current method used when DrawTriangle is called. 
	EDrawTriangleMethod GetDrawTriangleMethod();

	// TODO
	/// -----------------------------------------------------------------------
	/// \fn		SetDrawTriangleMethod
	/// \brief	Setter for the current method used when DrawTriangle is called. 
	void SetDrawTriangleMethod(EDrawTriangleMethod dtm);


	// TODO
	/// -----------------------------------------------------------------------
	/// \fn		DrawTriangle
	/// \brief	Rasterizes a CCW triangle defined by v0, v1, v2. It delegates
	///			the call to one of the methods implemented internally. See
	///			enum EDrawTriangleMethod above. 
	/// \param	v0	First triangle vertex (position/color).
	///	\param	v1	Second triangle vertex (position/color).
	///	\param	v2	Third triangle vertex (position/color).
	void DrawTriangle(const Vertex& v0, const Vertex& v1, const Vertex& v2);

	/// ------------------------------------------------------------------------
	/// \fn		DrawTriangleBiLinear
	/// \brief	Rasterizes a CCW triangle defined by v0, v1, v2, using the top
	///			left method and the bi-linear interpolation method for color 
	/// \param	v0	First triangle vertex (position/color).
	///	\param	v1	Second triangle vertex (position/color).
	///	\param	v2	Third triangle vertex (position/color).

	void DrawTriangleBiLinear(const Vertex& v0, const Vertex& v1, const Vertex& v2);

	/// ------------------------------------------------------------------------
	/// \fn		DrawTrianglePlaneNormal
	/// \brief	Rasterizes a CCW triangle defined by v0, v1, v2, using the top
	///			left method and the color interpolation method using the normal
	///			plane equation (you cannot use the bi-linear method).
	/// \param	v0	First triangle vertex (position/color).
	///	\param	v1	Second triangle vertex (position/color).
	///	\param	v2	Third triangle vertex (position/color).
	void DrawTrianglePlaneNormal(const Vertex& v0, const Vertex& v1, const Vertex& v2);

	/// ------------------------------------------------------------------------
	/// \fn		DrawTriangleBarycentric
	/// \brief	Same method as the function above but computes the 
	///			This method computes the barycentric coordinates INCREMENTALLY.
	///			
	/// \param	v0	First triangle vertex (position/color).
	///	\param	v1	Second triangle vertex (position/color).
	///	\param	v2	Third triangle vertex (position/color).
	void DrawTriangleBarycentric(const Vertex& v0, const Vertex& v1, const Vertex& v2);

	/// -----------------------------------------------------------------------
	/// \fn		DrawTriangleShaded
	/// \brief	Draws a triangle using the AttributeInterpolator class defined
	///			above. The traversal method should be Topleft and the 
	///			interpolation method should be the plane normal method. 
	///			(note: this is implemented via the AttributeInterpolator class)
	///			Additionally, this function determines the fragment color to 
	///			write to the frame buffer using the shader function provided
	///			and then blends it with the current color in the frame buffer.
	///			(Note: You should use FrameBuffer::GetPixel(x,y) to retrieve 
	///			the pixel color in the frame buffer at pixel position (x, y)
	/// \param	vertices	-> 3 vertices provided into float array.
	/// \param	vertexSize	-> number of float elements in the vertex (includes x,y)
	/// \param	shaderFunction		-> shader function to call.
		void DrawTriangleShaded(const float* vertices, const unsigned int& vertexSize, ShaderFunc shader);
}