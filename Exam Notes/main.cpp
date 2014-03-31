#include <iostream> //Always include this, instruction to the preprocessor
#include <cstdlib> //Used for when creating random numbers
#include<cmath> //Include when doing math stuff
#include <cfloat> //Used when using scientific numbers and decimal numbers
#include <climits> //Used to find the max and min of integers
#include <cfloat> //Used to find the max and min of double and floating numbers

using namespace std; //So we never have to put it in for the rest of the file
namespace MyCode {
	//To create own namespace
}


//Makes the entire line a comment

/*Makes everything a comment until closed, e.g.
 int main()*/

int main() { // The main function is where the program starts running
	cout << “ “ << endl; /*Cout refers to the standard output, endl ends it,
						speech marks used for non-code text, << direction important*/

	{
		//Curly brackets used to separate functions
	}; //Semi-Colon ends line, required for each line for compiler

	//Integral Types:
	int; //Used to declare integer
	short int;
	long int;
	char c = 'C';
	bool r = true;

	//Floating Point Types:
	float x = 15; //Declaration with assignment
	float x; //Declaration without assignment
	float x(15); //Declaration with "copy"
	double; //Used for scientific notation and decimals, use double as much as possible
	long double;


	//Mathematical Operators:
	int a = b + c; //Addition
	int a = b - c; //Subtraction
	int a = b * c; //Multiplication
	float a = b / c: //Division, float in case of decimals when dividing
	int a = b % c; //Modulo, returns remainder when b/c

	i++; // assign i, increment it
	++i; //increment i, then assign
	i--;
	--i;

	i += 3; //i=i+3
	i -= 3; //i=i-3
	i *= 3; //i=i*3
	i /= 3; //i=i/3

	a < b; //a less than b
	a <= b; //a equal to or less than b
	a > b; //Vice versa
	a >= b; //Vice versa
	a == b; //a equal to b
	a != b; //a not equal to b
	a += b; //Assignment

	//Class types provided by libraries:
	std::string message = "Hello World";
	std::vector<int> collection(10);

	cout << sizeof () << endl; //Gives size of memory taken by function


	//While Loop:
	int i = 0; //Must declare variables outside while function
	int n = 10;
	while(/* Continuation condition */ i < n) {
		//Action
		++i;
	}

	//Do-while Loop:
	int i = 0;
	int n = 10;
	do {
		//Action
		++i;
	}
	while(/* Continuation condition */ i < n);

	//For Loop:
	for(/* Initialisation step */ int i = 0; /* Continuation condition */ i < n); /* Action1 */ i++) {
		//Action2
		cout << i << endl;
	}

	//If-else Loop:
	if(/* Condition1 */ i <= 1) {
		//Action1
		cout << "if" << endl;
	}
	else if(/* Condition2 */ i=2) {
		//Action2
		cout << "else if" << endl;
	}
	else(/* Condition3 */ i >= 3) {
		//Alternative action
		cout << "else" << endl;
	}

	//Switch, only use on integral var types:
	switch(var) {
	case a:
		/*Action*/;
		break;
	case b:
		/*Action*/;
		break;
	default:
		continue; //Used inside a loop to skip to the next iteration
		/*Action*/;
		break; //Used to break out of a loop or switch
	}

	//Pointers:
	float x = 15;
	float *p = &x; //Declaring p as a pointer to a float, &x takes the memory address of x. Do not use if x declared inside a seperate function
	float y = *p; //Dereferences the pointer, y = x

	//References:
	float x = 15;
	float &r = x; //References x, r = x, used for when invoking or returning values of functions

	//Arrays:
	float x[/* Number of floats in array */ 3] = {/* Floats stored in each section of array */ 1.0, 1.5, 2.0}; //numbered as 0,1,2
	for(int i=0); i<3; ++i) {
		cout << x[i] << endl; //* Prints value of (i+1)th float in array, note that 1st value is at i=0
	}

	//Mathematical Functions, require <cmath>:
	double y = sqrt(x); //Root of x
	double y = pow(x,a); //x^a
	double y = sin(x); //Sin function in radians, M_PI for pi, x is a random number. Sub sin for cos or tan
	double y = cosh(x); //Hyperbolic functions. Sub cosh for sinh or tanh
	double y = acos(x); //Arc functions, sub for asin or atan
	double y = atan(x,a); //atan(x/y)
	double y = M_PI; //pi
	double y = exp(x); //e^x
	double y = log(x); //Natural log
	double y = loga(x); //Log to base a
	double y = abs(x); //Absolute value of x
	double y = ciel(x); //Smallest integer not less than x
	double y = floor(x); //Smallest integer not greater than x





	system(“PAUSE”); //These two lines end the program, not neccessary
	return 0; //Can replace this line with “return EXIT_SUCCESS”
}


