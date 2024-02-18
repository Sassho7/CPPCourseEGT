#include "Card.h"

Card::Card(string deckSuit, string deckFace)
{
	suit = deckSuit;
	face = deckFace;
}

string Card::GetSuit() const
{
	return suit;
}

string Card::GetFace() const
{
	return face;
}

string Card::PrintCard() const
{
	return face + ", " + suit;
}