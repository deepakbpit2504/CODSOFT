#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Book {
    string title;
    string genre;
    double rating;
};

int main() {
    // Expanded book list
    vector<Book> books = {
        {"The Hobbit", "Fantasy", 4.9},
        {"Harry Potter", "Fantasy", 4.7},
        {"A Brief History of Time", "Science", 4.6},
        {"The Power of Now", "Spirituality", 4.8},
        {"Bhagavad Gita", "Spirituality", 4.9},
        {"Sapiens: A Brief History of Humankind", "Humanism", 4.8},
        {"The Art of Happiness", "Humanism", 4.7}
    };

    string preferredGenre;
    double minRating;

    cout << "Enter preferred genre (Fantasy, Science, Spirituality, Humanism): ";
    getline(cin, preferredGenre);
    cout << "Enter minimum rating (0-5): ";
    cin >> minRating;

    cout << "\nRecommended Books:\n";
    bool found = false;

    for (auto &book : books) {
        if (book.genre == preferredGenre && book.rating >= minRating) {
            cout << "- " << book.title << "\n";
            found = true;
        }
    }

    if (!found) {
        cout << "No books match your preference.\n";
    }

    return 0;
}
