#include <iostream> //Always include this, instruction to the preprocessor
#include <fstream> //Lets file streams be declared
#include <cstdlib> //Used for when creating random numbers
#include <cmath> //Include when doing math stuff
#include <cfloat> /*Used when using scientific numbers and decimal numbers,
					used to find the max and min of double and floating numbers*/
#include <climits> //Used to find the max and min of integers
#include <iomanip> //To use Arguments
#include <vector> //To use Vectors
#include <algorithm> //To use Sort

#include Example.hpp; //Declare function in hpp file

using namespace std; //So we never have to put it in for the rest of the file
using std::cout; //For specific namespace, std is namespace, cout is a class
namespace MyCode {
	//To create own namespace
}

//Any Variables declared outside a function is global, inside function is local to that function

//Makes the entire line a comment
/*Makes everything a comment until closed, e.g.
 int main()*/

//Function Declaration, used to tell compiler what a name means, must be before main:
/* Return type */ int /* Function name */ additionFunction/* (Argument list) */(int a, int b);
//Signature = Name + Type, can declare multiple functions with same name as long as signatures are different

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
	char c = 'C'; //Number of character
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
	// = assignment
	// == equal to
	// && and
	// ! not
	// || or

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

	//Function Invocation:
	int c;
	int d;
	cout << additionFunction(c,d) << endl;

	//Pseudo-Random Number Generator:
	std::srand(12345); //Seeds the random numbers
	int rnd = std::rand(); //Get a random int
	//For floating point numbers:
	float min;
	float max;
	float rnd = min + (max - min) * (double)rand()/RAND_MAX;

	const i = 10; //Declaring a var to be constant, allows compiler to make various optimizations
	//Void indicates no type, used in functions that return nothing
	void myFunc(int i) {
		//Action
		return;
	}

	//Creating object stored in the heap:
	MyObject*obj = new MyObject();
	delete obj; //Deallocates the memory and sets the pointer to 0, must be within same function as creation to prevent memory leak
	//Special version to delete arrays:
	float * array = new float[n];
	delete[] array;
	//To use outside the function it was created in:
	float * array = new float[n];
	MyObject * ptr = 0;
	if(getObject == true) {
		ptr = new MyObject();
	}
	//Can't lose pointer:
	int n = 10;
	MyObject * ptrArray[] = new MyObject*[n];
	fo(int i=0; i<n; ++i) {

	}

	//To access a class using dot notation:
	MyClass myclass;
	double v = myclass.publicVariable;
	//To access a class using pointer notation:
	MyClass * myclass = new MyClass();
	double v = myclass->publicVariable;

	//Accessing members of a class using dot notation:
	MyClass myclass;
	double v = myclass.publicMethodGetVariable();
	//Accessing members of a class using pointer notation:
	MyClass * myclass = myclass = new MyClass();
	double v = myclass->publicMethodGetVariable();

	//Strings:
	"Random text"; //Literal string
	char c('a'); //Single quotes for character literals
	//2 types of string in c++:
	char [100] = "Hello, World"; //C-style,problematic as need to be careful of size, easy to overrun the end
	std::string //From standard library, more versatile than char
	//Example:
	std::string message = "Hello World!";
	//Concatenation:
	std::string message = "Hello "+"World!";

	//File IO:
	std::cout; //Output stream
	std::ostream; //Attached to the console
	std::cin; //Input stream
	std::istream; //Attached to the console
	//fstream examples:
	//Input:
	std::ifstream fin("filename.dat");
	int a;
	int b;
	int c;
	fin >> a >> b >> c >>; //Read in three integers from the file
	fin.close(); //Must close the file when done
	//Output:
	std::ofstream fout("filename.dat");
	int a = 1;
	int b = 2;
	fout << 1 << 2 << std::endl;
	fout.close(); //Must close the file when done

	//Vectors, better versions of arrays:
	std::vector<MyClass*/* Can use any type or pointer */> vector OfIntegers; //Uses a copy when inserting objects
	//Adding elements to end, vector will automatically grow to accomodate new data:
	std::vector<int> vec;
	for (int i=0; i<10; ++i) {
		vec.push_back(i);
	}
	//Accessing elements:
	for (int i=0; i<10; ++i) {
		cout << vec[i] << " "; //Provides range checking
		cout << vec.at(i) <<" "; //Doesn't provide range checking but much faster
	}
	//Removing elements:
	for(int i=0; int i<10; ++i) {
		vec.pop_back();
	}
	//Other useful methods:
	vec.resize(100); //Set size of vector, elements are set to their default value
	vec.reserve(100); //Pre-allocates storage for elements, but don't add anything to the vector
	vec.size(); //Number of stored elements
	vec.capacity(); //Amount of memory allocated
	vec.clear(); //Remove everything from vector
	//Can use anywhere an array might be used:
	std::vector<int>myVector;
	for(int i=0; i<10; ++i) {
		myVector.push_back(i); //Add an element
	}
	cout << myVector.size() << endl; //Prints out size
	int n = myVector.size();
	for(int i=0; i<n; ++i) { //Loop over all elements
		cout << myVector[i] << " "; //Print out an element
	}
	cout << endl;
	//Iterators, type of object to help in looping over elements of a container:
	std::vector<int> myVec;
	for(int i=0; i<10; ++i) {
		myVec.push_back(i); //Fill the vector
	}
	for(std::vector<int>::iterator iter = myVec.begin(); iter ! = myVec.end(); ++myVec) {
		int element = *iter; //Iterators work a bit like pointers
		cout << element << " ";
	}
	cout << endl;
	//Summary:
	std::vector<int> myVector; //Create vector
	myVector.push_back(10); //Add
	myVector.pop_back(); //Remove
	myVector[0]; //Access, also can use myVector.at(0)
	myVector.clear; //Clear
	std::vector<int>::iterator iter = myVec.begin(); //Iterator pointing at beginning of vector
	std::vector<int>::iterator iter = myVec.end(); //Iterator pointing to next free slot
	iter++; //Move the iterator to the next element
	*iter //Access the current element
	//Sort:
	std::vector<int> myVector;
	for(int i=0; i<1000, ++i) { //New empty vector
		myVector.push_back(rand()); //Fill with random numbers
	}
	std::sort(myVector.begin(),myVector.end()); //Sort algorithm
	for(int i=0; n=myVector.size(); i<n, ++i) {
		cout << myVector[i] << endl; //Prints all the elements
	}

	//Other features of strings:
	/* All of them for: */std::string message = " ";
	int size = message.size(); //Size of string
	char letter = message[n]; //n+1th character
	message.resize(n,'*'); //Adds character in apostrophes to the end of message to fill out spaces until it is n long
	message.append("!"); //Appends to end of message, can also use message+="!";
	//Substrings:
	std::string message = "Hello World";
	std::string sub = message.substr(6,5); // substr(start position, length)
	//Search for substrings, using above hello world:
	std::size_t position = message.find("World");
	if(position != std::string::npos) {
		cout << "Found the world!" << endl;
	}
	//Alternatively, if looking for the first or last of any character in argument:
	std::size_t position = message.find_first_of("ABCDEFGH"); //Will look for each of these characters seperately
	position = messge.find_last_of("ABCDEFGH");

	//Monte Carlo method to find area of a circle (or value of pi):
	int N=10000;
	srand(12345);
	int sum=0;
	for(int i=1; i<N; i++){
		double x = -1 + 2.*(double)rand()/RAND_MAX;
		double y = -1 + 2.*(double)rand()/RAND_MAX;
		if( x*x+y*y < 1) sum++;
	}
	double result = 4.* (double)sum/N;
	cout << " result = " << result << endl;
	return 0;
}




	system(“PAUSE”); //These two lines end the program, not neccessary
	return 0; //Can replace this line with “return EXIT_SUCCESS”
}

//Function Definition, used to tell compiler what the function does, after main:
int additionFunction(int a, int b) { //a and b are local to the function
	return a + b;
}
//To modify arguments:
int add( int &a, int £b) { //New labels still point back to a and b
	return a + b;
}

;
