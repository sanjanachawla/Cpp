/*
*  @file edgeColorPicker.cpp
*  Implements the edge color picker for CPSC 221 PA2.
*
*/

#include "edgeColorPicker.h"

/*
 *  Constructs a new EdgeColorPicker.
 *
 *  @param inputimage - original image to be colored
 *  @param b_color - color of the border
 *  @param width - width of the border to be painted
 *  @param s - seed point from flood fill configuration, must include original image color
 *  @param tol - tolerance threshold from flood fill configuration
 */
EdgeColorPicker::EdgeColorPicker(PNG& inputimage, RGBAPixel b_color, unsigned int width, PixelPoint s, double tol)
{
  // complete your implementation below

}

/*
*  Picks the color for pixel (x, y).
*  First determines whether p is a border pixel or not.
*
*  A border pixel is one which is within (<=) borderwidth of a non-fillable pixel
*  (i.e. at least one of the pixels within borderwidth of p will not be reached by
*  the filling algorithm.
*
*  A border pixel will be colored using the bordercolor.
*
*  A fillable non-border pixel will take the average color of all pixels within
*  borderwidth of p. Make sure that you are averaging from the original
*  image colors!
*
*  @param  p - The point for which you're picking a color
*  @return The color chosen for (p).
*/
RGBAPixel EdgeColorPicker::operator()(PixelPoint p)
{
  // complete your implementation below

  return RGBAPixel(); // REPLACE THIS STUB
}
