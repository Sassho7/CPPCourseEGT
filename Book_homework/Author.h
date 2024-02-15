#include <string>

using namespace std;

class Author
{
    public:
        Author();
        Author(string, string, string);
        string GetFirstName() const;
        string GetLastName() const;
        string GetNationality() const;

        
    private:
        string authorFirstName;
        string autrhorLastName;
        string nationality;

};