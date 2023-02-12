/*Virtual functions
A virtual function is a member function which is declared within a base class and 
is re-defined (overridden) by a derived class. When you refer to a derived 
class object using a pointer or a reference to the base class, you can call a virtual 
function for that object and execute the derived class’s version of the function. 
Virtual functions cannot be static.
A class may have virtual destructor but it cannot have a virtual constructor.
Virtual functions introduce something called dynamic dispatch which compilers typically implement via a V table which is a table containing mapping for all our virtual 
functions except our base class. This is used so we can correctly map them to the overwitten function at runtime.
You have to mark functions as virutal.
If we have a class a and another derived class b and mark a method as virtual inside of a 
we have the option of overriding it in class b and making it do somethong else.
*/

#include <iostream>

class Base {
public:
	std::string MyName = "Stevem\0";
	virtual void VirtualFunctionExample() {
		std::cout << "I am going to be overridden.\0" << std::endl;
	}
};

class Derived : public Base {
public:
	int MyAge = 17;
	void VirtualFunctionExample() {
		std::cout << "I have overridden the base method.\0" << std::endl;
	}
};

int main() {

	Base* BasePointer;

	Derived Obj;

	BasePointer = &Obj;

	BasePointer->VirtualFunctionExample();  /*We have overridden the method.*/

	return 0;
}