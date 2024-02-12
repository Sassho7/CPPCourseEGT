#include <iostream>
#include <list>
#include <map>
#include <set>
#include "BaseLibrary.h"

using namespace std;

int main()
{
    int numberOfBooks;
    cout << "Enter how many books you want to have; ";
    cin >> numberOfBooks;
    

    BaseLibrary library;

    //library.AddBook();

    for (int i = 0; i < numberOfBooks; i++)
    {
        library.AddBook();
        cout << "=================================" << endl;    
    }
    
    library.PrintAllBooks();
   
    return 0;
}