#pragma once
#include <iostream>
#include <string>

using namespace std;

class Book
{
public:
	Book(string, string, int);
	void Print();

private:
	string title;
	string author;
	int pages;
};