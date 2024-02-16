#pragma once
#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

class Member
{
public:
	Member();
	Member(string, int, string);
	void Print();
	void BorrowBook(Book* book);

private:
	string name;
	int age;
	string memberId;
};