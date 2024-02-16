#include "Book.h"

Book::Book()
{

}

Book::Book(string bookTitle, string bookAuthor, string bookIsbn)
{
	title = bookTitle;
	author = bookAuthor;
	isbn = bookIsbn;
}

string Book::GetISBN()
{
	return isbn;
}

void Book::Print()
{
	cout << "====================================" << endl;
	cout << "Book title: " << title << endl;
	cout << "Book author: " << author << endl;
	cout << "Book isbn: " << isbn << endl;
	cout << "====================================" << endl;
}