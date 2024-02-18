#include "DeckCards.h"

DeckCards::DeckCards()
{

}

void DeckCards::CreateDeck()
{
	string face[] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	string suit[] = { "Spade", "Diamond", "Heart", "Clubs" };

	for (const auto& s : suit)
	{
		for (const auto& f : face)
		{
			cards.push_back(Card(f, s));
		}
	}
}

void DeckCards::Shuffle()
{
	srand(123);

	for (int i = cards.size() - 1; i > 0; i--) // obraten cikul
	{
		int j = rand() % (i + 1);
		swap(cards[i], cards[j]); // vzima dvete referencii i smenq stoinostite im
	}
}

void DeckCards::RiffleShuffle()
{
	vector<Card> shuffled;

	int middle = cards.size() / 2;

	for (int i = 0; i < middle; i++)
	{
		shuffled.push_back(cards[i]);
		shuffled.push_back(cards[middle + 1]);
	}

	if (cards.size() % 2 != 0)
	{
		shuffled.push_back(cards.back());  // pozvolqva direkno da dostupim posledniq elemnt ot vektora. preporuchitelno da se polzva s push_back zashtoto .back() raboti s posledniq element
	}

	cards = shuffled;
}

void DeckCards::Print() const
{
	for (int i = 0; i < cards.size(); i++)
	{
		cout << cards[i].PrintCard() << endl;
	}
}