#include <iostream>
using namespace std;

class Book {
  public:
    string title;
    string author;
    int year;
};

void showBook(Book book) {
    cout << book.title << ", " << book.author << ", " << book.year << endl;
}

int main() {
    Book book1;
    book1.title = "Matilda";
    book1.author = "Roald Dahl";
    book1.year = 1988;

    Book book2;
    book2.title = "The Giving Tree";
    book2.author = "Shel Silverstein";
    book2.year = 1964;

    showBook(book1);
    showBook(book2);
    return 0;
}
