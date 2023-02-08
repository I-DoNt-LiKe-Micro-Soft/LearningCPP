/*Functions
Functions are blocks of code we write to perform a specific task.
Functions are different to methods which reside in classes.
Function parameters are declared in the function brackets and can be passed to it when calling it.
The user can also pass in their desired parameters via cin.
Everytime we call a function the compiler generates a call instruction. in a running program for us to call a function we have to create the entire stack frame for the function
meaning we have to push things like the parameters onto the stack and also the return address.
An int function must return an integer value and a void function does not return a value.
void functions must be called in the main function if you want them to be executed.
*/

/*Variables
Varaibles must have a type definition which tells the computer how many bytes to allocate for your data.
Variables are a way for us to store data in memory. 
Variables declared inside of a function are local and can only be used inside that function.
Variables declared outside of a function are global and can be used anywhere.
*/


#include <iostream>

void VoidFunctionExample(std::string Parameters) {
	std::cout << "I am a void function, i do not return a value.\0" << std::endl;

	std::cout << Parameters;
}

std::string GlobalVariableExample = "I am a global variable.\0";

int main(int a, int b) {

	std::string LocalVariableExample = "I am a local variable.\0";

	VoidFunctionExample("I am passing the parameters when calling the function.\0");

	std::cin >> a >> b;

	return a * b;
}