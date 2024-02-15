#include "Book.h"
#include <iostream>

Book::Book()
{

}

Book::Book(string nameOfBook, Author authorBook, Genre genreOfBook, int yearOfBook)
{
    bookName = nameOfBook;
    bookAuthor = authorBook;
    bookGenre = genreOfBook;
    bookYear = yearOfBook;
}

string Book::GetBookName()
{
    return bookName;
}

void Book::PrintBookContent()
{
    cout << "Book title is: " << bookName << endl;
    cout << "Book author`s name: " << bookAuthor.GetFirstName() << endl;;
    bookGenre.PrintGenre();
    cout << "Book year of dispatch: " << bookYear << endl;
    cout << "====================================" << endl;

}