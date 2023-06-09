/*
*  @file negativeColorPicker.cpp
*  Implements the negative color picker for CPSC 221 PA2.
*
*/

#include "negativeColorPicker.h"

/**
 * Constructs a new NegativeColorPicker.
 *
 * @param inputimg - the original image.
 */
NegativeColorPicker::NegativeColorPicker(PNG& inputimg)
{
  // complete your implementation below

}

/**
 * Picks the color for pixel (x, y).
 *
 * Returns the a RGBAPixel which uses the negation on all RGB channels (alpha stays the same)
 * of the color at point p in the original image.
 * Refer to the RGBA documentation in lab_intro to determine an appropriate meaning of
 * "negation" for each RGB channel.
 */
RGBAPixel NegativeColorPicker::operator()(PixelPoint p)
{
  // complete your implementation below

  return RGBAPixel(); // REPLACE THIS STUB
}
