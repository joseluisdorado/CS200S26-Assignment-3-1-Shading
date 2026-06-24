#include <AEEngine.h>
#include "Rasterizer.h"
#include "FragmentShaders.h"

namespace Rasterizer
{
	// TODO
	// ------------------------------------------------------------------------
	/// \fn		FSFragmentColor
	/// \brief	Returns the fragment color.  
	Color FShaderColor(const FragmentInput& fragData)
	{
		return {};
	}

	// TODO
	// ------------------------------------------------------------------------
	/// \fn		FSFragmentColorInv
	/// \brief	Returns the fragment inverse color.  
	Color FShaderColorInv(const FragmentInput& fragData)
	{
		return {};
	}


	// TODO
	// ------------------------------------------------------------------------
	/// \fn		FSAlphaBlend
	/// \brief	Returns the resulting color of performing alpha blending 
	///			of the fragment color (RGBA) and the frame buffer color (RGB).
	Color FShaderAlphaBlend(const FragmentInput& fragData)
	{
		return {};
	}

} // namespace Ratsterizer