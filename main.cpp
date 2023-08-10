#include <iostream>
#include <string>
// learned classes, learned constructors, object functions
using namespace std;
/* The resone why everything is an object. you can represent a number using an int.
you can represent a string using string, and represent a character using char. So we can
store all these types being int, string, char with information /// But, how would you 
represent a phone and store the phone
if you want to store a book, person, a location, musical instrument there is no data type for that

creating a class is basicaly creating a new data type in C++
creat the blue print of a new type of data in our program
*/
// A class is a blue print, a specification, or the template of a data type
// An object is an actual instance of that blue print or and actual instance of that class. 
// instance - an example or single occurrence of something.

// a constructor is a special function that is going to get called every time we creat a object of a class
class Book {
	public:
		// member variables 
		string title;
		string author;
		int pages;
		string genres;
		// Default constructor 
		Book() {
			title = "No title";
			author = "No author";
			pages = 0;
			genres = "NONE";
		}
		// parameterized constructor 
		Book(string A_genres) {
			genres = A_genres;
		}
		// member function (method)
		void display() {
			cout << "Title: " << title << endl;
			cout << "Author: " << author << endl;
			cout << "Pages: " << pages << endl;
			cout << "Genre: " << genres << endl;
		}
};

int main() {
	Book book1("comedy"); // created a book object
	book1.title = "Harry Potter";
	book1.author = "JK Rowling";
	book1.pages = 500;

	book1.display();

	Book book2("action"); // created a book object
	book2.title = "Lord of the Rings";
	book2.author = "Tolkein";
	book2.pages = 700;

	book2.display();

	Book book3;
	book3.display();

	return 0;
}