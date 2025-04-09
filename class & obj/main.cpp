#include <iostream>

using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;
};


int main()
{

    Book book1;
    book1.title = "KONG";
    book1.author = "Jk Rowline";
    book1.pages = 120;

    Book book2;
    book2.title = "Godzila";
    book2.author = "Haris ";
    book2.pages = 500;

    cout <<  "The title of Your book is: " <<book1.title << endl;
    cout << "The author of your book is: "<< book1.author << endl;
    cout << "The pages of your book is: "<< book1.pages << endl;
    cout <<  "The title of Your book is: " <<book2.title << endl;
    cout << "The author of your book is: "<< book2.author << endl;
    cout << "The pages of your book is: "<< book2.pages << endl;

    return 0;
}
