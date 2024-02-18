#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

#include "Card.h"

using namespace std;

class DeckCards
{
public:
	DeckCards();
	void CreateDeck();
	void Shuffle();
	void RiffleShuffle();
	void Print() const;

private:
	vector<Card> cards;
};