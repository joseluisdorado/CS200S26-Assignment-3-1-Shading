#pragma once
#include <vector>

using namespace std;

namespace Rasterizer
{

	class AttributeInterpolator
	{
		private:
			int mAttrCount;     // Number of attributes per vertex (e.g., 6 for x, y, r, g, b, a)
			const float *mVertices; // Stores the 3 interleaved vertices (3 * 6 attributes)
			float mArea;         // Pre-calculated triangle area
			float x0, y0, x1, y1, x2, y2; // Cached positions for fast edge testing
			std::vector<float> mCurrentValues;
		public:
			void Init(const float* vertices, const int attrCount);
			bool Evaluate(float x, float y);
			float* GetCurrentValues();
	};
}