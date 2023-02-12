/*Pointers and references
The ampersand(&) character is used to display the memory address of a variable.
A pointer is a variable that stores the memory address of another variable.
Pointers have to reference an already existing variable.
Pointers are declared by typing an asterix next to your typedef for example char* MyPointer = &Variable.
references are decalred by typing an ampersand next to your typedef for example char&
null is a built in constant value that means zero.
We put an asterix infront of the pointer to dereference/get the original value stored.
Once you declare a reference you cannot change what it references.
*/

/*Smart pointers
You must include memory to get access to smart pointers.
Smart pointers allow us to automate the de-allocation of memory 
removing the need to use the new/delete operator.
Smart pointers are essentially a wrapper around raw pointers.
Unique pointer is a scoped pointer meaning when that pointer goes out of scope 
it will call delete and free the memory.
You cannot have two unique pointers pointing to the same block of memory, you cannot copy unique
pointers.
Shared pointers use reference counting, reference counts may be used to deallocate objects 
that are no longer needed and they are common in garbage collected languages.

*/

#include <iostream>
#include <memory>

void ReferenceExample(int* Input1, int* Input2) {

	int Result = *Input1 + *Input2;

	std::cout << Result;
}

void MakingAVariablePtr(){
	std::unique_ptr<std::string> MyName(new std::string("Steven"));
	std::cout << *MyName;
} 

class UniquePtrTest {
public:
	int x = 15;
	void Tester() {
		std::cout << "I am a test method";
	}

};

int main() {

	int a = 6;

	int& ref = a; /*Here we have created a reference.*/
	
	std::string MyName = "Steven";

	std::cout << &MyName; /*Outputs the memory address of the variable MyName*/

	std::string* NewPointer = &MyName; /*We have created a new pointer that points too the memory address of the MyName variable*/

	std::cout << *NewPointer << std::endl;   /*We put an asterix infront of the pointer to dereference/get the original value stored*/

	int Input1;

	int Input2;

	std::cin >> Input1 >> Input2;

	ReferenceExample(&Input1, &Input2);  /*We are passing the parameters via reference*/

	{
		/*Create the object and pass it to a smart pointer*/
		std::unique_ptr<UniquePtrTest> NewObj(new UniquePtrTest());

		/*Call a method from the object*/
		NewObj->Tester();

	}/*Our object is deleted automatically when function block goes out of scope.*/
	

	return 0;
}