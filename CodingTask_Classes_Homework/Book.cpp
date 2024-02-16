#include "Book.h"

Book::Book(string bookTitle, string bookAuthor, int bookPages)
{
	title = bookTitle;
	author = bookAuthor;
	pages = bookPages;
}

void Book::Print()
{
	cout << "================================" << endl;
	cout << "Book name: " << title << endl;
	cout << "Book author: " << author << endl;
	cout << "Number of pages: " << pages << endl;
	cout << "================================" << endl;
}