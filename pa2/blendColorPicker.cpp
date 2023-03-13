/*
*  @file blendColorPicker.cpp
*  Implements the blend color picker for CPSC 221 PA2.
*
*/

#include "blendColorPicker.h"

/*
*  Constructs a new BlendColorPicker.
*
*  @pre   both image parameters have dimensions at least 1x1
*  @param primaryimage - first image contributing to overall color
*  @param secondaryimage - second image contributing to overall color
*/
BlendColorPicker::BlendColorPicker(PNG& primaryimage, PNG& secondaryimage)
{
  // complete your implementation below

}

/**
 *  Picks the color for pixel (x, y).
 *  The two images will be aligned at the origin (0, 0).
 *  For coordinates where only one image is valid, the color is taken entirely from the valid image.
 *
 *  For coordinates where both images are valid, the returned color is constructed as the average
 *  of the pixels at the specified coordinates in both images, each weighted by the pixel's alpha value.
 *  The returned color will have an alpha value of 1.0.
 *
 *  e.g. px1 RGBA = (120, 45, 190, 1.0)
 *       px2 RGBA = (220, 180, 250, 0.5)
 *   px1's RGB channels will be given 1.0 weight in the average,
 *   px2's RGB channels will be given 0.5 weight in the average.
 *
 *  @param  p - The point for which you're picking a color
 *  @return The color chosen for (p).
 */
RGBAPixel BlendColorPicker::operator()(PixelPoint p)
{
  // complete your implementation below

  return RGBAPixel(); // REPLACE THIS STUB
}
