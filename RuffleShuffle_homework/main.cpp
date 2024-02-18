#include <iostream>
#include <string>
#include <vector>

#include "Card.h"
#include "DeckCards.h"

using namespace std;

int main()
{
	DeckCards deck;
	deck.CreateDeck();
	deck.Print();
	cout << "========================" << endl;


	cout << endl << "Razburkani" << endl;
	deck.Shuffle();
	deck.Print();
	cout << "========================" << endl;


	cout << endl << "RuffleShuffle" << endl;
	deck.RiffleShuffle();
	deck.Print();
	cout << "========================" << endl;


	return 0;
}