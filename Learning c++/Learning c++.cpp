/*Information about operators https://www.w3schools.com/cpp/cpp_operators.asp */
/*Information about bitwise operators https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/ */
/*C++ keywords*/

/*Notes
The linkers job is too wire up functions
The code inside header files just gets pasted to your cpp file.
When we start an application that entire program gets loaded into memory.
In C++ the :: is called the Scope Resolution Operator. It makes it clear to which namespace or class a symbol belongs.
null is a built in constant value that means zero.
*/

/*Functions
functions are blocks of code we write to perform a specific task.
Functions are different to methods which reside in classes.
function parameters are declared in the function and can be passed to it when calling it.
the user can also pass in their desired parameters via cin.
everytime we call a function the compiler generates a call instruction. in a running program for us to call a function we have to create the entire stack frame for the function
meaning we have to push things like the parameters onto the stack and also the return address.
*/

/* Bytes and Bits:
a signed integer means it contains a minus sign in the range of -2147483648 to 2147483647. And an unsigned integer is a positive number in the range 0 to 4294967295.
1 byte is 8 bits of data.
4 bytes is 32 bits of data.
8 bytes is 64 bits of data
char is 1 byte of data and can store letters you can store letter by typing in there numeric value.
short is 2 bytes of data.
int is 4 bytes of data.
long 4 bytes of data.
long long 8 bytes of data.
float is a decimal value that uses 4 bytes of data. To decalare a float an f must be appended to the value as follows 5.6f or else it becomes a double.
doubles are 8 bytes of data.
all of these typedefs are signed by default so you must declare is as unsigned if you want that.
The only difference between these data types is how much memory will be allocated when you create a variable with that data type.
a bool is 1 byte of memory and it stands for boolean and its a true or false value it will return a 1 or a 0 1 for true 0 for false.
*/

/*Conditions and branches
if, else, elseif.
conditional statements may slow code down.
to perform an if statement we must make a comparision inside of the brackets ().
else if will only check the condition if the first if fails.
*/

/*Loops
for loops conditional brackets seperate into three parts seperated by semi colons the first part can be a variable the second part is a true or false condition.
while loops have one condition in the conditional brackets.
the body of a do while loop will be executed at least once no matter what. 
*/

/*Pointers and references
pointers are declared by typing an asterix next to your typedef for example char*.
references are decalred by typing an ampersand next to your typedef for example char&
null is a built in constant value that means zero
*/

/*Control flow statements
continue: Can only be used inside of a loop, continue says go to the next iteration of the list.
break: Break appears in switch statements, loops and means just exit the loop. Break only executes if the if statement is true.
return: return will get out of the function entirly. if your function is an int it must return a value you can only use return without a value on void fucntions. 
Note to self learn control flow and make a good example.
*/

/*Static and extern variables
Static variables and functions are only going to be linked internally inside this translation unit and cannot be called or used inside other cpp files.
The linker is not going to look outside the scope of this translation unit for static variables.
When the linker sees extern before a global variable declaration, it looks for the definition in another/external translation unit.
In basic terms marking a variable static is similar to making it private.
You want to use static as much as you can unless you need the variable to be global. Not using static variables and function can lead to some pretty bad bugs.
*/

/*Static inside classes and structs
If one instance changes one of the static variables its going to reflect that change accross all instances of that class.
Static methods cannot access non static variables. The reason is because a static method does not have a class instance.
Every non static method you write in a class always gets a current instance of the class as a parameter. Thats how classes acctually work behind the 
scenes there is no such thing as a class, they are just functions with hidden parameters.
explore static methods more !
*/

/*Classes
Data in a class is private by default.
Private variable can only be accessed by functions inside the class.
You must turn the class into an object like so MyClassName NameOfMyObj;.
Methods are void functions inside of a class.
An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
Explore class initializers !
*/

/*Consturctors and deconstructors
A constructor is a special type of method which runs everytime we create an instance of a class
*/

/*Enums
Short for enumeration.
All an enum is, is a way to give a name to a value so instead of having a bunch of integers called abc we can have an enum with the values abc which correspond to integers.
Its helpful when you want an integer to represent a certain state or certain values however you want to give them a name so your code is more readable.
Enums by default are just 32 bit integers.
If you declare one enum value for example A = 6,B,C the other enum values will be 7 and 8 therefore incrementing.
*/

#include <iostream> /* These are preprocessor statements */

void ExampleOfEnumeration() {
	enum ExampleOfEnum : unsigned int { /* You can declare which data type you want your values to consist of like so */
		Five = 5, Three = 3, One = 1
	};
	std::cout << ExampleOfEnum::Five << std::endl;  /* Here we are printing one of our enum values */
}

static void StaticVariableExample() {
	static std::string MyStaticVariable = "Hello I Am Static I Can Only Be Called Inside Of This Translation Unit";
}

class MeSteven {
private:
	std::string MyPenisSize = "1 nano metere";
public:
	unsigned int MyAge = 17;
	float MyHeight = 5.11f;
	std::string Gender = "Male";
	void MyMethod() { /*This is a method basically a function inside of a class*/
		std::string MyPenisSize = "-1 inch on a good day";
	}
};

static void Variables() {
	static unsigned int MyAge = 17; /*To decalre an unsigned integer*/
	std::cout << "My name is Steven i am " << MyAge << std::endl; /*Prints text or variable to console*/
}

static void IfStatementExample() {
	static int x = 5;
	static bool ComparisonResult = x == 5;
	if (ComparisonResult == 1)
		std::cout << "integer x is equal to 5" << std::endl;
	else
		std::cout << "integer is not equal to 5" << std::endl;
}

static void SizeOfOperatorExample() {
	/*The sizeof operator find the size in bytes of typedefs*/
	std::cout << "The size of an string is: " << sizeof(std::string) << std::endl;

}

static void VoidFunctionExample() { /*I am creating a void function which doesnt return a value such function must be called in the main function*/
	std::cout << "Hello i am a void function" << std::endl;
}

static void ShortAndCharExample() {
	static char a = 'A'; /*This will store the letter A but if i put the number 65 in it will also print A*/
	static char b = 65; /*To store numbers with their actual numeric value we must use short*/
	static short c = 420; /*As you can see we now get the actual numerical value we entered*/
	std::cout << "The letter stored in variable a is: " << a << std::endl;
	std::cout << "The letter stored in variable b is: " << b << std::endl;
	std::cout << "The letter stored in variable c is: " << c << std::endl;

}

int ParametersExample(int a, int b) {

	return a * b;
}

static void LoopsExample() {
	for (int i = 0; i < 5; i++)  /*This condition will iterate over the list until i becomes less than or equal to 5*/ {
		std::cout << i << std::endl;
		
	}
	int i = 0;
	while (i < 5) {
		std::cout << i << std::endl;
		i++;
	}
	bool condition = false;
	do {
		std::cout << "A do while loop will still execute me even if im false" << std::endl;
	} while (condition);

}

int main() { /*Entry Point*/

	VoidFunctionExample(); /*Here i am calling the void function named Genders*/

	int result = ParametersExample(1, 1); /*We are passing 1 and 1 to our function parameters*/

	std::cout << "This is an example of using parameters your return values are:  = " << result << std::endl; /*Here our function is returning the integer passed to our function parameters*/

	std::cout << "---------------------------------------------------" << std::endl;
	MeSteven MyStat; /* We are Creating an object named MyStat from the class */
	MyStat.MyAge = 18; /* Here We can edit values inside our class instance (Object)*/
	std::cout << MyStat.MyAge << std::endl; /*And We can print the new values like so*/
	std::cout << "---------------------------------------------------" << std::endl;
	ExampleOfEnumeration();

	return 0;
	
}


