/*
 * Example.cpp
 *
 *  Created on: 1 Apr 2014
 *      Author: rajru_000
 */

extern float x; //x is global. Need extern in this declaration so that the definition can be in main.cpp as a global

//Class definitions usually go in their own class files in MyClass.cpp format:
MyClass::MyClass() { //Constructor
	_privateVariable = 10;
}
MyClass::MyClass(float v) { //Constructor with argument
	_privateVariable = v;
}
MyClass::MyClass(const MyClass & myclass); //Another type of constructor
MyClass::MyClass(double a, double b) :
		_a(a), _b(b) { //If 2 data members
	;
}
MyClass::~MyClass() { //Destructor
	;
}
double My::publicMethodGetVariable() {
	return _privateVariable;
}
//Using this pointer:
double My::publicMethodGetVariable() {
	return this->_privateVariable;
}
//Useful for member variable with same name as local scope variable:
double MyClass::AddData(double data) {
	//If class had a member variable called data
	return data+this->data;
}
//const member functions do not modify their object:
double MyClass::publicMethodGetVariable() const;
double MyClass::publicMethodGetVariable() const {
	return _privateVariable;
}

//Function overload:
double myFunc(int x, int y) {
	return x + y;
}

//Date example from hpp:
#include <iostream>
#include "Date.hpp"
Date() : _day(1), _month(1), _year(1970) {
	;
}
Date::Date(int day, int month, int year) :
		_day(day), _month(month), _year(year) {
	;
}
int Date:Day() const {
	return _day;
}
int Date:Month() const {
	return _month;
}
int Date:Year() const {
	return _year;
}
void Date::Print() {
	std::cout << day << "/" << month << "/" << year << endl;
}

//Singleton example from hpp:
MyClass * MyClass::theInstance = 0;
MyClass * MyClass::getInstance() {
	if(theInstance == 0) {
		theInstance = new MyClass();
	}
	return theInstance;
}//In the main: MyClass*myClass = MyClass::getInstance();


