/*
 * Example.hpp
 *
 *  Created on: 1 Apr 2014
 *      Author: rajru_000
 */

#ifndef EXAMPLE_HPP_
#define EXAMPLE_HPP_

//Can define global functions here and add them main.cpp

//Can also put class declaration here too:
class MyClass {
public: //Visible outsisde scope
	MyClass(); //Constructor
	MyClass(double v); //Constructor with argument
	~MyClass(); //Destructor
	//Public function associated the class:
	double publicMethodGetVariable();
	double publicVariable;

private: //Not visible outside scope
	double _privateMethod();
	double _privateVariable;
}; //Must end class with semi-colon

//Example class for date
class Date {
public:
	Date();
	Date(int day, int month, int year);
	~Date() {
		;
	}
	int Day() const;
	int Month() const;
	int Year() const;
	void Print () const;
private:
	int _day;
	int _month;
	int _year;
};

//When class contains pointer:
class Stack { //Not what we want though
public:
	Stack();
	//Other public methods
private:
	double * stack
};
//Solution of class method:
Stack & Stack::operator = (const Stack & stack);
Stack s1;
Stack s2 = s2;
//Solution for non-member function:
Stack & operator = (Stack & s2, const Stack &s1);
Stack s1;
Stack s2 = s1;
//Vector example:
Vector v1;
Vector v2;
Vector v3 = v1 + v2;
const Vector operator+(const Vector & v2) {
	Vector v;
	v.x = x + v2.x; //Or this->x+v2.x
	v.y = y + v2.y;
	v.z = z + v2.z;
	return v;
}

//All operators have an equvalent function call:
//Unary:
MyClass & operator!(); //No arguments
//Binary:
MyClass & operator=(const MyClass &); //1 argument
const MyClass operator+(const MyClass &); //1 argument but returning a copy

//Default arguments:
double myFunc(double x = 0, double y = 0); //Must = 0 to both x and y
//Example:
double z = myFunc(1); // z = myFunc(1,0)

//Inline functions:
inline double myFunc(double x, double y)
{return x+y;}
//Also function definitions within a class are inline


//Static members, don't get allocated space when using new:
class MyClass { //Static members declared in class like normal members
public:
	MyClass() {;}
	~MyClass() {;}
	stative float staticVariable;
private:
	static float privateStaticVariable;
};
//Definition and storage need to be in same place, therefore normally in .cpp file:
float MyClass::staticVariable;
float MyClass::privateStaticVariable
//Static member functions:
class MyClass { //Example shows how to access a static variable using a static function
public:
	MyClass() {;}
	~MyClass() {;}
	static void set_staticVariable(float v) {
		privateStaticVariable = v;
	}
private:
	static float privateStaticVariable;

};
//Don't need a class object to access static members:
MyClass:set_privateStaticVariable(10.);
//Singleton example:
class MyClass {
public:
	static MyClass * getInstance();
	~MyClass() {;}
	float getVar() const {return var;}
	void setVar(flaot v) {var = v;}
private:
	MyClass() {;}
	static MyClass * theInstance;
	float var;
};

//Child inheriting from parent:
class Child : public Parent1, public Parent2 { //Class Child takes on all properties of both Parent classes
public: //Can access public Parent code
protected: //Can access protected Parent code
private: //Cannot access private Parent code
};






#endif /* EXAMPLE_HPP_ */
