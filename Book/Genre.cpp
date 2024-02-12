#include <iostream>
#include <string>
#include "Genre.h"

using namespace std;


Genre::Genre()
{
    
}

Genre::Genre(string typeOfGenre)
{
    genreType = typeOfGenre;
}

void Genre::PrintGenre()
{
    cout << "Book genre is: " << genreType << endl;
}