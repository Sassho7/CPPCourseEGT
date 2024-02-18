#pragma once
#include <string>
#include <iostream>

using namespace std;

class Card
{
public:
	Card(string, string);
	string GetSuit() const;
	string GetFace() const;
	string PrintCard() const;

private:
	string suit;
	string face;
};