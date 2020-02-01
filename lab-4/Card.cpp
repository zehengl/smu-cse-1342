#include "Card.h"

// Card constructor initializes face and suit
Card::Card(int cardFace, int cardSuit)
{
    face = (cardFace >= 0 && cardFace < totalFaces) ? cardFace : 0;
    suit = (cardSuit >= 0 && cardSuit < totalSuits) ? cardSuit : 0;
} // end Card constructor

// returns a string representation of a Card
string Card::toString() const
{
    // strings can be concatenated with +
    return faceNames[face] + " of " + suitNames[suit];
} // end function toString

// contents of arrays to convert index into name
const string Card::faceNames[totalFaces] =
    {"Ace", "Deuce", "Three", "Four", "Five", "Six",
     "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
const string Card::suitNames[totalSuits] =
    {"Hearts", "Diamonds", "Clubs", "Spades"};
