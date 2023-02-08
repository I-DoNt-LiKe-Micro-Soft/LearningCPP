/*Const keyword
Constants allow our code to look cleaner and prevent variable values being modified.
A constant pointer depends on where youve placed the keyword when declaring the new pointer for example if the keyword is at the beginning it will make the value
it points too a constant and the opposite would only allow you to change the address of the pointer.
*/

/*Mutable keyword
Marking a class member as mutable means const methods inside that class can modify that memeber declared as mutable
Note too self make an example.
*/



void ConstExample() {
	const int MyAge = 21;  /*The Value of this variable cannot be modified because it is a constant*/
	const int* NewConstantPointer = &MyAge;  /*The value of this pointer cannot be modified*/
	std::cout << *NewConstantPointer;

}