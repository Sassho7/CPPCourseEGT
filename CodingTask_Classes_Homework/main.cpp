#include <iostream>
#include <string>

#include "Book.h"

using namespace  std;

int main()
{
	Book firstBook("kniga 1", "Avtor 1", 100);
	Book secondBook("kniga 2", "Avtor 2", 200);

	firstBook.Print();
	secondBook.Print();

	return 0;
}