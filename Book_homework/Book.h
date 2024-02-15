#include <string>
#include "Author.h"
#include "Genre.h"

using namespace std;

class Book
{
    public:
        Book();
        Book(string, Author, Genre, int);
        string GetBookName();
        void PrintBookContent();
                

    private:
        string bookName;
        Author bookAuthor;
        Genre bookGenre;
        int bookYear;
};