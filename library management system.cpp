#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
public:
    string title;
    string author;
    int year;

    Book(const string& t, const string& a, int y)
        : title(t), author(a), year(y) {}

    void displayInfo() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
        cout << "------------------------" << endl;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
        cout << "Book added successfully." << endl;
    }

    void displayBooks() const {
        if (books.empty()) {
            cout << "No books in the library." << endl;
        } else {
            cout << "Books in the library:" << endl;
            for (const auto& book : books) {
                book.displayInfo();
            }
        }
    }
};

int main() {
    Library library;

    while (true) {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string title, author;
                int year;

                cout << "Enter book title: ";
                cin.ignore(); // Clear buffer
                getline(cin, title);

                cout << "Enter author name: ";
                getline(cin, author);

                cout << "Enter publication year: ";
                cin >> year;

                Book newBook(title, author, year);
                library.addBook(newBook);
                break;
            }
            case 2:
                library.displayBooks();
                break;
            case 3:
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

