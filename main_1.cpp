////////////////////////////////////
//         Neil S. Patel          //
//   Learning the C++ Language    //
//                                //
////////////////////////////////////
# include <iostream>
#include <string>
#include <cmath>
using namespace std;

// void - function is not going to return anything.
void sayHi(string name, int age); // this is the Functions signature 

int cube_a_number(int num);

int getMax(int num1, int num2, int num3);

string get_day_of_week(int DayNum);

int exponent(int number1, int number2);

int main() {
	////////////////////--New Topic {1}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {1}-->>>>>" << endl;
	// Simple cout and variables 
	string name;
	int age;
	cin >> name;
	cin >> age;
	cout << name << "was the first person to open the door." << endl;
	cout << "He was " << age << " years old." << endl;

	cin >> name;
	cout << "Then came along was" << name << "to open the door." << endl;
	cout << name << "was also" << age << "years old." << endl;

	////////////////////--New Topic {2}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {2}-->>>>>" << endl;
	// string functions and manipulation 
	string building = "Walmart Supermarket";
	cout << building << endl;
	cout << building.length() << endl; // 19
	building[0] = 'B';
	cout << building[13] << endl;
	cout << building << endl;
	cout << building.find("Supermarket", 0) << endl;
	cout << building.substr(2, 3) << endl;

	////////////////////--New Topic {3}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {3}-->>>>>" << endl;
	// Basic arithmatic 
	cout << 7 % 5; // p, e, m, d, a, s
	cout << ((5 - 4) * (9 + 9)) / 10 << endl;
	cout << 10.0 / 3 << endl;

	////////////////////--New Topic {4}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {4}-->>>>>" << endl;
	// #include <cmath> (library)
	cout << pow(3, 3) << endl; // 27
	cout << sqrt(81) << endl; // 9
	cout << round(4.6) << endl; // 5
	cout << ceil(4.1) << endl; // 5
	cout << floor(9.9) << endl; // 9
	cout << fmax(3, 10) << endl; // tell which one is the bigger number (10)
	cout << fmin(3, 10) << endl; // tell which one is smaller (3)

	////////////////////--New Topic {5}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {5}-->>>>>" << endl;
	// getline() takes the entire text
	float age99;
	cout << "Enter you age: ";
	cin >> age99;
	cout << "You are pretty young for a " << age99 << " year old. :)" << endl;
	/////// cin a string TAKES NO SPACES
	string name101;
	cout << "Enter you name: ";
	cin >> name101;
	cout << "It looks like your name is " << name101 << ". Nice name." << endl;
	/////// getline() TAKES EVRY TEXT 
	string company;
	cout << "Enter the company name you work at: ";
	getline(cin, company);
	cout << endl << company << " is a nice company to work at." << endl;

	////////////////////--New Topic {6}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {6}-->>>>>" << endl;
	// build a basic calculator
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << num1 + num2 << endl;

	////////////////////--New Topic {7}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {7}-->>>>>" << endl;
	// build a Mad Libs Game in C++
	string name55, object55, person55;
	cout << "Enter a name: ";
	getline(cin, name55);
	cout << "Enter a object: ";
	getline(cin, object55);
	cout << "Enter a person: ";
	getline(cin, person55);
	cout << name55 << " when to the " << object55 << " tree and he picked out a " << object55 << "." << endl;
	cout << "When he got home, his nice " << person55 << " said, 'where did you go?'. " << endl;
	cout << "No where " << person55 << ", i just went to the " << object55 << " tree. " << endl;

	////////////////////--New Topic {8}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {8}-->>>>>" << endl;
	// Arrays - can hold multiple data values (contiguous)
	int lucky_Nums[20] = {5, 4, 3, 2, 1, 0};
	cout << lucky_Nums[0] << endl; 
	lucky_Nums[6] = 19;
	cout << lucky_Nums[6] << endl;

	////////////////////--New Topic {9}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {9}-->>>>>" << endl;
	// functions - a block of code that performas a task
	sayHi("Moonshin", 12);
	sayHi("SkyLight", 99);
	sayHi("BladeRunner", 66);

	////////////////////--New Topic {10}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {10}-->>>>>" << endl;
	// return keyword functions (need to have a return type at the begining of the function)
	// when the return keyword is called in a function, the function ends and goes to the main() 
	cout << cube_a_number(5) << endl;
	int answer = cube_a_number(3);
	cout << answer << endl;

	////////////////////--New Topic {11}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {11}-->>>>>" << endl;
	// if statements 
	// Operations     && (and), || (or), <=, >=, <, >, ==, !=, ! (the negations operator)
	bool isMale = true;
	bool isTall = false;

	if (isMale && isTall) {
		cout << "you are a tall male" << endl;
	}
	else if (isMale && !(isTall)) {
		cout << "you are a short male. " << endl;
	}
	else if (!(isMale) && isTall) {
		cout << "You are are a tall female." << endl;
	}
	else {
		cout << "You are a short female." << endl;
	}
	cout << getMax(2, 5, 10);

	////////////////////--New Topic {12}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {12}-->>>>>" << endl;
	// build a 4 function calculator
	int value1, value2;
	char oporator;
	cout << "Enter first number: ";
	cin >> value1;
	cout << "Enter oporator: ";
	cin >> oporator;
	cout << "Enter second number: ";
	cin >> value2;
	int result;
	if (oporator == '+') {
		result = value1 + value2;
	}
	else if (oporator == '-') {
		result = value1 - value2;
	}
	else if (oporator == '*') {
		result = value1 * value2;
	}
	else if (oporator == '/') {
		result = value1 / value2;
	}
	else {
		cout << "The oporator is not correst.";
	}
	cout << result << endl;

	////////////////////--New Topic {13}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {13}-->>>>>" << endl;
	// switch statements ==>> check one value compared with other value. 
	cout << get_day_of_week(3) << endl;

	////////////////////--New Topic {14}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {14}-->>>>>" << endl;
	// while loop ==>> programming structure that allows you to loop through a block of code while a condition is true. 
	int index = 1;
	while (index <= 10) {
		cout << index << endl;
		index++;
	}
	////////////////////--New Topic {15}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {15}-->>>>>" << endl;
	// Building a Guessing Game 
	int secretNum = 7;
	int guess = 0;
	while (guess != secretNum) {
		cout << "Enter your guessed number: ";
		cin >> guess;
		if (guess == secretNum) {
			cout << "CORRECT!" << endl;
			break;
		}
		else {
			cout << "INCORRECT! TRY AGAIN!" << endl;
		}
	}
	cout << "YOU WIN!" << endl;

	////////////////////--New Topic {16}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {16}-->>>>>" << endl;
	// for loops ==>> a programming construction that loop through operations. 
	for (int i = 1; i <= 5; i++) {
		cout << i << endl;
	}

	int array[] = {500, 400, 300, 200, 100};
	for (int i = 0; i < 5; i++) {
		cout << array[i] << endl;
	}

	////////////////////--New Topic {17}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {17}-->>>>>" << endl;
	// writing an exponent function
	cout << exponent(5, 3) << endl;

	////////////////////--New Topic {18}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {18}-->>>>>" << endl;
	// 2D arrays and nested for-loops ==>> O(n^2)
	int numberGrid[3][2] = { {1, 2}, {3, 4}, {5, 6} };
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 2; k++) {
			cout << numberGrid[i][k] << endl;
		}
		cout << endl;
	}

	////////////////////--New Topic {19}--////////////////////
	cout << "<<<<<<<<<<<<--New Topic {19}-->>>>>" << endl;
	// pointers ==>> memory addresses 
	// all the variables are stored in memory; in the RAM; random access memory. 
	// The active memory the computer is using when you are running programs is RAM.
	int age88 = 20;
	int* pAge = &age88;

	double gpa = 3.9;
	double* pGpa = &gpa;

	string name45 = "Neil";
	string* pName = &name45;

	cout << *pAge << endl; // dereferencing the pointer
	cout << pGpa << endl; // print the memory address of gpa
	cout << *pName << endl; 

	cout << &gpa << endl; // this is a pointer.
	cout << *(&gpa) << endl; // this is dereferencing the pointer. 

	return 0;
}

void sayHi(string name, int age) {
	cout << "Hello, " << name << endl;
	cout << "look like you are " << age << " years old." << endl;
}

int cube_a_number(int num) {
	int cubedNumber = num * num * num; 
	return cubedNumber;
}

int getMax(int num1, int num2, int num3) { // returns the max number of the 3 entered.
	int result;
	if ( (num1 >= num2) && (num1 >= num3) ) {
		result = num1;
	}
	else if ( (num2 >= num1) && (num2 >= num3) ) {
		result = num2;
	}
	else if ( (num3 >= num1) && (num3 >= num2) ) {
		result = num3;
	}
	return result;
}

string get_day_of_week(int DayNum) {
	string Day_name;

	switch (DayNum) {
	case 1:
		Day_name = "Sunday";
		break;
	case 2:
		Day_name = "Monday";
		break;
	case 3:
		Day_name = "Tuesday";
		break;
	case 4:
		Day_name = "Wednesday";
		break;
	case 5:
		Day_name = "Thursday";
		break;
	case 6:
		Day_name = "Friday";
		break;
	case 7:
		Day_name = "Saturday";
		break;
	default:
		Day_name = "Wrong number";
	}
	return Day_name;
}

int exponent(int number1, int number2) {
	int base = number1;
	for (int i = 1; i < number2; i++) {
		base = base * number1;
	}
	return base;
}