#include "../headers/Piece.h"

// Takes a pointer to uint8_t
// stores the value in the color var
// in the object
void Piece::setPieceColor(uint8_t *color) {
    *pPieceColor = *color;
}

// Returns the address of pointer
// to color
uint8_t *Piece::getPieceColor() {
  if (pPieceColor == NULL) {
    printf("NULL pointer to pPieceName. Use setPieceColor(uint8_t *color) first!\n");
    exit(-1);
  }
  return pPieceColor;
}

// Takes a pointer to a string
// sets value of pieceName to
// string stored in it
void Piece::setPieceName(char *name) {
  pPieceName = name;
}

// Returns the address that
// points to pieceName
char *Piece::getPieceName() {
  if (pPieceName == NULL) {
    printf("NULL pointer to pPieceName. Use setPieceName(char *name) first!\n");
    exit(-1);
  }
  return pPieceName;
}

// sets posX throught pointer
// passed from function
void Piece::setPosX(int *x) {
  *pPosX = *x;
}

// gets address of pointer
// that points to value of
// x
int *Piece::getPosX() {
  if (pPosX == NULL) {
    printf("NULL pointer to pPosX. Use setPosX(int *x) first!\n");
    exit(-1);
  }
  return pPosX;
}

// sets posY throught pointer
// passed from function
void Piece::setPosY(int *y) {
  *pPosY = *y;
}

// gets address of pointer
// that points to value of
// Y
int *Piece::getPosY() {
  if (pPosY == NULL) {
    printf("NULL pointer to pPosY. Use setPosY(int *Y) first!\n");
    exit(-1);
  }
  return pPosY;
}

// init the tracker variable
void Piece::setTracker(Tracker &refTracker) {
  t = &refTracker;
}

// get Ref to the Tracker
Tracker *Piece::getTracker() {
  if (t == NULL) {
    printf("NULL pointer to t. Use setTracker(Tracker &refTracker) first!\n");
    exit(-1);
  }
  return t;
}

// Test function to
// make sure that class
// is working properly
void Piece::say() {
  printf("Works!\n");
}
