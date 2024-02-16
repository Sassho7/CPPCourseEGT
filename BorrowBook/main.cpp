#include <iostream>
#include <string>

#include "Book.h"
#include "Member.h"

using namespace std;

int main()
{
	Book firstBook("Ide li", "I.Vazov", "345678");

	Member firstMember("Tosho", 25, "24887");

	firstMember.BorrowBook(&firstBook);

	return 0;
}