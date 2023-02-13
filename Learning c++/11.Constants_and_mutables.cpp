/*Const keyword
Constants allow our code to look cleaner and prevent variable values being modified.
A constant pointer depends on where youve placed the keyword when declaring the new pointer for example if the keyword is before the ampersand* it will make the value
it points too a constant and the opposite would only allow you to change the address of the pointer.
*/

/*Mutable keyword
Marking a class member as mutable means const methods inside that class can modify that memeber declared as mutable.
A really naive example, imagine if I only give non-const handles to friends, enemies get a const handle. Friends can modify, enemies cannot.
Note too self make an example.
*/

#include <iostream>

int main() {

	const int MyAge = 21;  /*The Value of this variable cannot be modified because it is a constant*
	
	const int* NewConstantPointer = &MyAge;  /*The value of this pointer cannot be modified*/
	int* const NewConstantPointer1 = &MyAge; /*The memory address may not be modified*/  
	
	std::cout << *NewConstantPointer;

	return 0;
}