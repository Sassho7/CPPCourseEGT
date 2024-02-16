#pragma once
#include <iostream>
#include <string>

using namespace std;

class Book
{
public:
	Book();
	Book(string, string, string);
	void Print();
	string GetISBN();

private:
	string title;
	string author;
	string isbn;
};
