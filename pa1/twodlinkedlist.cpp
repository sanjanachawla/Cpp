/**
 * @file twodlinkedlist.cpp
 * @author your name(s)
 *
 * Defines a two-dimensional null-terminated doubly-linked list containing rectangular image pieces
 *  for CPSC 221 PA1
 *
 * COMPLETE THE FUNCTION BODIES IN THIS FILE AND SUBMIT TO PRAIRIELEARN
 */

#include "twodlinkedlist.h"

TwoDNode::TwoDNode() {
  // THIS IMPLEMENTATION HAS BEEN COMPLETED FOR YOU ALREADY
  north = nullptr;
  east = nullptr;
  south = nullptr;
  west = nullptr;
}

TwoDNode::TwoDNode(const Block& bdata) {
  // THIS IMPLEMENTATION HAS BEEN COMPLETED FOR YOU ALREADY
  data = bdata;
  north = nullptr;
  east = nullptr;
  south = nullptr;
  west = nullptr;
}

/**
 *  Deallocates any associated dynamic memory and sets private attributes appropriately
 *
 *  @post this list is empty
 */
void TwoDLinkedList::Clear() {
  // COMPLETE YOUR IMPLEMENTATION BELOW

}

/**
 *  Copies the data and structure of otherlist into this list
 *
 *  @post this list is a physically separate copy of otherlist
 */
void TwoDLinkedList::Copy(const TwoDLinkedList& otherlist) {
  // COMPLETE YOUR IMPLEMENTATION BELOW

}

/**
 *  Default constructor creates an empty list
 */
TwoDLinkedList::TwoDLinkedList() {
  // COMPLETE YOUR IMPLEMENTATION BELOW

}

/**
 *  Parameterized constructor creates a list with blockdimx columns,
 *  blockdimy rows, using color data from img
 *
 *  @param img - input PNG
 *  @param blockdimx - horizontal dimension of the list (in Blocks, i.e. number of columns)
 *  @param blockdimy - vertical dimension of the list (in Blocks, i.e. number of rows)
 *
 *  @pre img has dimensions at least 1x1
 *  @pre 1 <= blockdimx <= PNG's horizontal dimension (in pixels)
 *  @pre 1 <= blockdimy <= PNG's vertical dimension (in pixels)
 */
TwoDLinkedList::TwoDLinkedList(PNG& img, unsigned int blockdimx, unsigned int blockdimy) {
  // THIS IMPLEMENTATION HAS BEEN COMPLETED FOR YOU ALREADY
  Build(img, blockdimx, blockdimy);
}

/**
 *  Copy constructor creates a new list as a copy of the data in otherlist
 */
TwoDLinkedList::TwoDLinkedList(const TwoDLinkedList& otherlist) {
  // THIS IMPLEMENTATION HAS BEEN COMPLETED FOR YOU ALREADY
  Copy(otherlist);
}

/**
 *  Overloaded assignment operator assigns structure and data of rhs into this list
 *
 *  @post this list is a physically separate copy of otherlist
 */
TwoDLinkedList& TwoDLinkedList::operator=(const TwoDLinkedList& rhs) {
  // THIS IMPLEMENTATION HAS BEEN COMPLETED FOR YOU ALREADY
  if (this != &rhs) { // this list and rhs are not the same physical list in memory (i.e. they are at different addresses)
    Clear(); // release any existing dynamic memory
    Copy(rhs); // copy data and structure from rhs
  }
  return *this;
}

/**
 *  Destructor deallocates associated dynamic memory
 */
TwoDLinkedList::~TwoDLinkedList() {
  // THIS IMPLEMENTATION HAS BEEN COMPLETED FOR YOU ALREADY
  Clear();
}

/**
 *  Builds the structure of this list from the provided parameters.
 *  The dimension of individual blocks will be an even division
 *  of the input PNG's dimensions by blockdimx or blockdimy.
 *  Assume that supplied PNG dimensions will be divisible by
 *  blockdimx and blockdimy.
 *
 *  @pre PNG horizontal dimension is divisible by blockdimx
 *  @pre PNG vertical dimension is divisible by blockdimy
 *
 *  Example: PNG dimensions 320x240
 *           blockdimx = 4
 *           blockdimy = 2
 *           The constructed list will have the following Block and node structure:
 *
 *                +-----------+     +-----------+     +-----------+     +-----------+
 *  northwest --> |           | --> |           | --> |           | --> |           |
 *                |  80 x 120 |     |  80 x 120 |     |  80 x 120 |     |  80 x 120 |
 *                |           | <-- |           | <-- |           | <-- |           |
 *                +-----------+     +-----------+     +-----------+     +-----------+
 *                   |     ^           |     ^           |     ^           |     ^
 *                   v     |           v     |           v     |           v     |
 *                +-----------+     +-----------+     +-----------+     +-----------+
 *                |           | --> |           | --> |           | --> |           |
 *                |  80 x 120 |     |  80 x 120 |     |  80 x 120 |     |  80 x 120 |
 *                |           | <-- |           | <-- |           | <-- |           | <-- southeast
 *                +-----------+     +-----------+     +-----------+     +-----------+
 */
void TwoDLinkedList::Build(PNG& img, unsigned int blockdimx, unsigned int blockdimy) {
  // COMPLETE YOUR IMPLEMENTATION BELOW

}

/**
 *  Returns the horizontal dimension of this list (in blocks)
 */
unsigned int TwoDLinkedList::GetBlockDimensionX() const {
  // REPLACE THE LINE BELOW WITH YOUR IMPLEMENTATION
  return 0;
}

/**
 *  Returns the vertical dimension of this list (in blocks)
 */
unsigned int TwoDLinkedList::GetBlockDimensionY() const {
  // REPLACE THE LINE BELOW WITH YOUR IMPLEMENTATION
  return 0;
}

/**
 *  Places this lists's color data into a PNG of appropriate dimensions
 */
PNG TwoDLinkedList::Render() const {
  // REPLACE THE LINE BELOW WITH YOUR IMPLEMENTATION
  return PNG();
}

/**
 *  Every Block in this list has the color of all its pixels replaced with the Block's average color
 */
void TwoDLinkedList::Blockify() {
  // COMPLETE YOUR IMPLEMENTATION BELOW

}

/**
 *  Applies Block::SwapChannels to produce a rotating cycle of color swaps to each Block in this list,
 *  in a row-order sequence.
 *  Example: For a list with 4 columns and 3 rows, the application will be as follows:
 *
 *  northwest ->  no change -> SC(0) ->   SC(1)   -> SC(2)
 *                    SC(3) -> SC(4) -> no change -> SC(0)
 *                    SC(1) -> SC(2) ->   SC(3)   -> SC(4) <- southeast
 */
void TwoDLinkedList::CheckerSwap() {
  // COMPLETE YOUR IMPLEMENTATION BELOW

}

/**
 *  Reorganizes the list and node contents so that a rendered image will be flipped horizontally.
 *  This must be achieved by pointer manipulation. Do not deallocate any existing nodes, and
 *  do not allocate any new nodes.
 *
 *  Ensure that the integrity of north/south/east/west pointers of all nodes is maintained.
 *
 *  You may use up to O(n) time and space complexity, where n is the total number of nodes in the list.
 *
 *  Example: A, B, C, D etc. are physical nodes (each at a particular address)
 *  before:
 *   northwest -> A <-> B <-> C <-> D
 *                ^     ^     ^     ^
 *                v     v     v     v
 *                E <-> F <-> G <-> H
 *                ^     ^     ^     ^
 *                v     v     v     v
 *                I <-> J <-> K <-> L  <- southeast
 *
 *  after:
 *   northwest -> D <-> C <-> B <-> A
 *                ^     ^     ^     ^
 *                v     v     v     v
 *                H <-> G <-> F <-> E
 *                ^     ^     ^     ^
 *                v     v     v     v
 *                L <-> K <-> J <-> I  <- southeast
 */
void TwoDLinkedList::FlipHorizontal() {
  // COMPLETE YOUR IMPLEMENTATION BELOW

}

/**
 *  Reorganizes the list and node contents so that a rendered image will be flipped vertically.
 *  This must be achieved by pointer manipulation. Do not deallocate any existing nodes, and
 *  do not allocate any new nodes.
 *
 *  Ensure that the integrity of north/south/east/west pointers of all nodes is maintained.
 *
 *  You may use up to O(n) time and space complexity, where n is the total number of nodes in the list.
 *
 *  Example: A, B, C, D etc. are physical nodes (each at a particular address)
 *  before:
 *   northwest -> A <-> B <-> C <-> D
 *                ^     ^     ^     ^
 *                v     v     v     v
 *                E <-> F <-> G <-> H
 *                ^     ^     ^     ^
 *                v     v     v     v
 *                I <-> J <-> K <-> L  <- southeast
 *
 *  after:
 *   northwest -> I <-> J <-> K <-> L
 *                ^     ^     ^     ^
 *                v     v     v     v
 *                E <-> F <-> G <-> H
 *                ^     ^     ^     ^
 *                v     v     v     v
 *                A <-> B <-> C <-> D  <- southeast
 */
void TwoDLinkedList::FlipVertical() {
  // COMPLETE YOUR IMPLEMENTATION BELOW

}

// ADD IMPLEMENTATIONS OF ANY OF YOUR OWN PRIVATE FUNCTIONS BELOW
