#include <iostream>
using namespace std;

class Book {
public:
    string title;
    float price;

    Book() {}
    Book(string t, float p) {
        title = t;
        price = p;
    }

    void display() {
        cout << "Title: " << title << ", Price: $" << price << endl;
    }
};

int main() {
    cout << "Task 2: Book array\n";
    Book books[5] = {
        Book("C++ Basics", 25.5),
        Book("OOP Concepts", 30.0),
        Book("Data Structures", 28.0),
        Book("Algorithms", 35.0),
        Book("Design Patterns", 40.0)
    };

    for (int i = 0; i < 5; i++) {
        books[i].display();
    }
   
