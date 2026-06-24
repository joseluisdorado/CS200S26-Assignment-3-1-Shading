#pragma once
#include <vector>

using namespace std;

namespace Rasterizer
{

	class AttributeInterpolator
	{
		private:
			int mAttrCount;						// Number of attributes per vertex or size of the vertex (e.g., 6 for x, y, r, g, b, a)
			const float *mVertices;				// Stores the 3 interleaved vertices (3 * 6 attributes)
			float mArea;						// Pre-calculated triangle area
			float x0, y0, x1, y1, x2, y2;		// Cached positions for fast edge testing
			std::vector<float> mCurrentValues;  // Stores the values of all attributes after interpolation
		public:

			/// -----------------------------------------------------------------------
			/// \fn		Init
			/// \brief	Initializes the interpolator precomputing all variables using the method of barycentric coordinates
			/// \param	vertices	Array of vertices with functions.
			///	\param	atrrCount   Number of attributes per vertex or size of the vertex
			void Init(const float* vertices, const int attrCount);

			/// -----------------------------------------------------------------------
			/// \fn		Evaluate
			/// \brief	interpolate the point using baricentric coordinates
			/// \param	x	horizontal position of the vertex
			///	\param	y   vertical position of the vertex
			/// \returns bool	returns false if the point is outisde the triangle or is not a top-left edge
			bool Evaluate(float x, float y);

			/// -----------------------------------------------------------------------
			/// \fn		GetCurrentValues
			/// \brief	return the current values of the all atributes interpolated between the vertex 
			float* GetCurrentValues();
	};
}