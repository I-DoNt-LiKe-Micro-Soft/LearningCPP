/*Information about operators https://www.w3schools.com/cpp/cpp_operators.asp */
/*Information about bitwise operators https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/ */
/*C++ keywords*/

/*Notes
The linkers job is too wire up functions
The code inside header files just gets pasted to your cpp file.
When we start an application that entire program gets loaded into memory.
In C++ the :: is called the Scope Resolution Operator. It makes it clear to which namespace or class a symbol belongs.
null is a built in constant value that means zero.
a signed integer means it contains a minus sign in the range of -2147483648 to 2147483647. And an unsigned integer is a positive number in the range 0 to 4294967295.
*/

/* Bytes and Bits:
1 byte is 8 bits of data.
4 bytes is 32 bits of data.
8 bytes is 64 bits of data
char is 1 byte of data and can store letters you can store letter by typing in there numeric value.
short is 2 bytes of data.
int is 4 bytes of data.
long 4 bytes of data.
longlong 8 bytes of data.
float is a decimal value that uses 4 bytes of data. To decalare a float an f must be appended to the value as follows 5.6f or else it becomes a double.
doubles are 8 bytes of data.
all of these typedefs are signed by default so you must declare is as unsigned if you want that.
The only difference between these data types is how much memory will be allocated when you create a variable with that data type.
a bool is 1 byte of memory and it stands for boolean and its a true or false value it will return a 1 or a 0 1 for true 0 for false.
*/

#include <iostream> /*These are preprocessor statements*/


static void SizeOfOperatorExample() {
	/*The sizeof operator find the size in bytes of typedefs*/
	std::cout << "The size of an string is: " << sizeof(std::string) << std::endl;

}

static void ShortAndCharExample() {
	static char a = 'A'; /*This will store the letter A but if i put the number 65 in it will also print A*/
	static char b = 65; /*To store numbers with their actual numeric value we must use short*/
	static short c = 420; /*As you can see we now get the actual numerical value we entered*/
	std::cout << "The letter stored in variable a is: " << a << std::endl;
	std::cout << "The letter stored in variable b is: " << b << std::endl;
	std::cout << "The letter stored in variable c is: " << c << std::endl;

}

int main() { /*Entry Point*/

	VoidFunctionExample(); /*Here i am calling the void function*/

	int result = ParametersExample(1, 1); /*We are passing 1 and 1 to our function parameters*/

	std::cout << "This is an example of using parameters your return values are:  = " << result << std::endl; /*Here our function is returning the integer passed to our function parameters*/

	std::cout << "---------------------------------------------------" << std::endl;

	ConstExample();


	return 0;
	
}
