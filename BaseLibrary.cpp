#include <iostream>
#include <string>
#include "BaseLibrary.h"

using namespace std;

BaseLibrary::BaseLibrary()
{
    
}

void BaseLibrary::AddBook()
{
    string bookName; //priema ot klaviaturata imeto na knigata
    cout << "Enter book name: ";
    cin.ignore(); // ignorira white space, idwash ot predi vhoda na imeto na knigata
    getline(cin, bookName);

    string authorInputFirstName;
    cout << "Enter author first name: ";
    cin >> authorInputFirstName;

    string authorInputLastName;
    cout << "Enter author last name: ";
    cin >> authorInputLastName;

    string authorInputNationality;
    cout << "Enter author nationality: ";
    cin >> authorInputNationality;

    string genreType;
    cout << "Enter genre of book: ";
    cin >> genreType;

    int bookYear;
    cout << "Enter book year: ";
    cin >> bookYear;

    Genre tempGenre(genreType);  
    Author tempAuthor(authorInputFirstName, authorInputLastName, authorInputNationality);
    Book tempBook(bookName, tempAuthor, tempGenre, bookYear);

    bookContainer.push_back(tempBook);
}

void BaseLibrary::FindBookByName(string bookName)
{
    bool isValid = false;
    for(Book &bk : bookContainer)
    {
        if (bk.GetBookName() == bookName)
        {
            bk.PrintBookContent();
            isValid = true;
        }
    }
    if (isValid == false)
    {
        cout << "There is no book with name: " << bookName << " in this library." << endl;
    }    
}

void BaseLibrary::FindBookByAuthor(string bookAuthor)
{

}

void BaseLibrary::PrintAllBooks()
{
    if (bookContainer.empty())
    {
        cerr << "There is NO books in the library!" << endl;
    }
    else
    {
        for (Book &bk : bookContainer)
        {
            
            bk.PrintBookContent();
        }
    }
    
}



