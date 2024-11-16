#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int publicationYear;
    float price;

public:
    // Constructor to initialize the data members
    Book(string t, string a, int pYear, float p)
        : title(t), author(a), publicationYear(pYear), price(p) {}

    // Setter and Getter for title
    void setTitle(string t) {
        title = t;
    }
    string getTitle() const {
        return title;
    }

    // Setter and Getter for author
    void setAuthor(string a) {
        author = a;
    }
    string getAuthor() const {
        return author;
    }

    // Setter and Getter for publication year
    void setPublicationYear(int pYear) {
        publicationYear = pYear;
    }
    int getPublicationYear() const {
        return publicationYear;
    }

    // Setter and Getter for price
    void setPrice(float p) {
        price = p;
    }
    float getPrice() const {
        return price;
    }

    // Display function to show book details
    void display() const {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << publicationYear << endl;
        cout << "Price: $" << price << endl << endl;
    }
};

int main() {
    // Creating Book objects
    Book book1("C++ Programming", "Bjarne Stroustrup", 1985, 59.99);
    Book book2("Effective Modern C++", "Scott Meyers", 2014, 49.99);

    // Using display() to show book information
    cout << "Book 1 Details:" << endl;
    book1.display();

    cout << "Book 2 Details:" << endl;
    book2.display();

    // Modifying book2 details using setters
    book2.setTitle("Effective C++");
    book2.setPublicationYear(2005);
    book2.setPrice(39.99);

    cout << "Updated Book 2 Details:" << endl;
    book2.display();

    return 0;
}
