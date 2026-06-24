#ifndef CS200_FRAGMENT_SHADERS_H_
#define CS200_FRAGMENT_SHADERS_H_
// ----------------------------------------------------------------------------
namespace Rasterizer
{
	struct FragmentInput
	{
		float x;
		float y;
		Color color;
	};
	/// -----------------------------------------------------------------------
	// typedef the shader function 
	// Shader functions take as their first argument the fragment
	// data related to the pixel we are writing, that is its attributes. 
	// Additionally the FragentInput struct can be extended to include any other user data  
	typedef Color(*ShaderFunc)(const FragmentInput& fragData);

	/// TODO
	// ------------------------------------------------------------------------
	/// \fn		FSFragmentColor
	/// \brief	Returns the fragment color.  
	///	\param	FragmentInput representing the fragment input. 
	Color FShaderColor(const FragmentInput& fragData);

	/// TODO
	// ------------------------------------------------------------------------
	/// \fn		FSFragmentColorInv
	/// \brief	Returns the fragment inverse color
	///	\param	FragmentInput representing the fragment input. 
	Color FShaderColorInv(const FragmentInput& fragData);
		

	// TODO
	// ------------------------------------------------------------------------
	/// \fn		FSAlphaBlend
	/// \brief	Returns the resulting color of performing alpha blending 
	///			of the fragment color (RGBA) and the frame buffer color (RGB).
	Color FShaderAlphaBlend(const FragmentInput& fragData);

} // namespace Ratsterizer


// ----------------------------------------------------------------------------
#endif