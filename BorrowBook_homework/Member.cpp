#include "Member.h"

Member::Member()
{

}

Member::Member(string memberName, int memberAge, string idMember)
{
	name = memberName;
	age = memberAge;
	memberId = idMember;
}

void Member::Print()
{
	cout << "==========================" << endl;
	cout << "Member name: " << name << endl;
	cout << "Member age: " << age << endl;
	cout << "Member ID: " << memberId << endl;
	cout << "==========================" << endl;
}

void Member::BorrowBook(Book* book)
{
	cout << name << " is holding the current book. " << endl;
	book->Print();
}