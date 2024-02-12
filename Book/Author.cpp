#include "Author.h"

Author::Author()
{

}

Author::Author(string firstNameAuthor, string lastNameAuthor, string nationalityOfAuthor)
{
    authorFirstName = firstNameAuthor;
    autrhorLastName = lastNameAuthor;
    nationality = nationalityOfAuthor;
}

string Author::GetFirstName() const
{
    return authorFirstName;
}

string Author::GetLastName() const
{
    return autrhorLastName;
}

string Author::GetNationality() const
{
    return nationality;
}