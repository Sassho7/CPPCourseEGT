#include "Book.h"
#include <vector>

class BaseLibrary
{
    public:
        BaseLibrary();
        void AddBook();
        void FindBookByName(string);
        void FindBookByAuthor(string);
        void PrintAllBooks();

    private:
        Book bookContent;
        vector<Book> bookContainer;
};