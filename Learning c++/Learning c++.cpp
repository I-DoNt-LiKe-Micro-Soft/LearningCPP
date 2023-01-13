/*Information about operators https://www.w3schools.com/cpp/cpp_operators.asp */
/*Information about bitwise operators https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/ */
/*C++ keywords*/
/*The linkers job is too wire up functions*/
/*The code inside header files just gets pasted to your cpp file*/
/*When we start an application that entire program gets loaded into memory*/
/*null is a built in constant value that means zero*/

/*Functions
functions are blocks of code we write to perform a specific task.
i am not talking about methods which reside in classes.
function parameters are declared in the function and can be passed to it when calling it.
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

#include <iostream> /* These are preprocessor statements */

void Variables() {
	unsigned int MyAge = 17; /*To decalre an unsigned integer*/
	std::cout << "My name is Steven i am " << MyAge << std::endl; /*Prints text or variable to console*/
}

void IfStatementExample() {
	int x = 5;
	bool ComparisonResult = x == 5;
	if (ComparisonResult == 1)
		std::cout << "integer x is equal to 5" << std::endl;
	else
		std::cout << "integer is not equal to 5" << std::endl;
}

void SizeOfOperatorExample() {
	/*The sizeof operator find the size in bytes of typedefs*/
	std::cout << "The size of an string is: " << sizeof(std::string) << std::endl;

}

void VoidFunctionExample() { /*I am creating a void function which doesnt return a value such function must be called in the main function*/
	
	std::cout << "Hello i am a void function" << std::endl;
}

void ShortAndCharExample() {
	char a = 'A'; /*This will store the letter A but if i put the number 65 in it will also print A*/
	char b = 65; /*To store numbers with their actual numeric value we must use short*/
	short c = 420; /*As you can see we now get the actual numerical value we entered*/
	std::cout << "The letter stored in variable a is: " << a << std::endl;
	std::cout << "The letter stored in variable b is: " << b << std::endl;
	std::cout << "The letter stored in variable c is: " << c << std::endl;

}

int ParametersExample(int a, int b) {

	return a * b;
}

void LoopsExample() {
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
	return 0;
	
}


