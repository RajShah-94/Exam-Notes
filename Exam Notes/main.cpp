#include <iostream> //Always include this, instruction to the preprocessor
#include <cstdlib> //Used for when creating random numbers
#include<cmath> //Include when doing math stuff
#include <cfloat> /*Used when using scientific numbers and decimal numbers,
					used to find the max and min of double and floating numbers*/
#include <climits> //Used to find the max and min of integers
#include <iomanip> //To use Arguments

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
	bool r = true; //Non-0 values return true

	//Floating Point Types:
	float x = 15; //Declaration with assignment
	float x; //Declaration without assignment
	float x(15); //Declaration with "copy"
	double; //Used for scientific notation and decimals, use double as much as possible
	long double;

	//Converting from Integral to Floating, results in no loss of information, however reverse is not true:
	//Converting from larger to smaller store will result in undefined behaviour
	int i;
	int j;
	float f = float(i) / j; //Must make i a float

	//Mathematical Operators:
	int a = b + c; //Addition
	int a = b - c; //Subtraction
	int a = b * c; //Multiplication
	float a = b / c: //Division, float in case of decimals when dividing
	int a = b % c; //Modulo, returns remainder when b/c

	i++; // Assign i, increment it
	++i; //Increment i, then assign
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

	//Input and Output:
		//General, the precision defines the total number of digits:
		cout.setf(0,std::ios::floatfield);
		cout.precision(6); //Number of sig figs
		cout << 1234.5678 << endl; //Will only print first 6 sig figs and round the end, 1234.57
		//Scientific, exponent notation, number of digits after the decimal point specified by the precision:
		cout.setf(std::ios::scientific,std::ios::floatfield);
		cout.precision(4); //Number of figs after decimal
		cout << 1234.5678 << endl; //Will print 1.2346e+03, rounds the end
		//Fixed, integer part followed by number of decimal places
		cout.setf(std::ios::fixed,std::ios::floatfield);
		cout.precision(3); //Number of places after decimal
		cout << 1234.5678 << endl; //Will print 1234.568, rounds the end
		//For change of base:
		cout.setf(std::ios::dec,std::ios::basefield); //Where dec can be replaced with oct or hex
	//These are all permanent until altered

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

	//Formatting the field:
	cout << /* Field1 */ << /* Field2 */ << /* Field3 */ << endl;
	//For each field we can specify 3 properties:
	cout.width(x); //Width, only applies to next << operation
	cout.fill('*'); //Fill Character
	cout.setf(std::ios::left,std::ios::adjustfield); //Adjustment, values can be left, right, internal
	cout << /* Width */ -12 << 12 << endl; //Ouput is -12*12 on left hand side of field

	//Manipulators:
	cout << std::oct << 1234 << endl; //Prints in oct format, same can be done for hex and dec
	cout << std::setprecision(4) << std::scientific << 1234.5678 << endl; //Prints using scientific system, same for general and fixed
	cout << setw(4) << setfill('*') << std::left << 12 << endl;

	//Input:
	int x;
	cin >> x; //Arrow direction important
	//Can be tested with following functions:
	cin.good(); //Will return true if everything is OK
	cin.eof(); //Will return true if we've seen the end of the input
	cin.fail(); //Will return true if the next operation will fail
	cin.bad(); //Will return true if something is really wrong and the stream might be corrupted




















	system(“PAUSE”); //These two lines end the program, not neccessary
	return 0; //Can replace this line with “return EXIT_SUCCESS”
}


