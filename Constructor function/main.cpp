#include <iostream>

using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;
    Book(string aTitle, string  aAuthor, int aPages){
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};


int main()
{
Book book1(" KONG "," Jk Rowline ",120);
Book book2(" Godzila "," Haris ",500);

    cout << book1.title;

    return 0;
}
