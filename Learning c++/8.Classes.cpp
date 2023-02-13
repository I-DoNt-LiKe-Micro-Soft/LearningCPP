/*Classes
Data in a class is private by default.
Private variable can only be accessed by functions inside the class.
You must turn the class into an object like so MyClassName NameOfMyObj;.
Methods are void functions inside of a class.
An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
Explore class initializers !
An Object is an instance of a Class. When a class is defined, no memory is allocated
but when it is instantiated (i.e. an object is created) memory is allocated. 
*/

/*Inheritance in classes
Inheritance allows us to have a heirarchy of classes which relate to eachother. In other words it allows us to have a base class which contains common 
functionality and then we can branch off from that class and create subclasses. The primary reason this is so useful is because it allows us to prevent code duplication.
Private data will not be inherited by our new class.
Our subclass is always going to be a super set of our base class meaning our subclass will always have everything entity has and possibly more.
*/

/*Static inside classes and structs
If one instance changes one of the static variables its going to reflect that change accross all instances of that class.
Static methods cannot access non static variables. The reason is because a static method does not have a class instance.
Every non static method you write in a class always gets a current instance of the class as a parameter. Thats how classes acctually work behind the 
scenes there is no such thing as a class, they are just functions with hidden parameters.
explore static methods more !
*/

#include <iostream>

class MeSteven {
public:
	unsigned int MyAge = 17;

	float MyHeight = 5.11f;

	std::string Gender = "Male";

	void MyMethod() { /*This is a method basically a function inside of a class*/
		MyAge = 18;

		MyHeight = 5.12f;
	}
};

class InheritedClassExample : public MeSteven {  /*We have created an inherited class this class will have the same variables as the one inherited from we must declare weather the inherited values are public or private*/
public:
	std::string MyFavMeal = "Cereal";
};

int main() {

	MeSteven MyObj;

	InheritedClassExample MyInheritedObj;

	std::cout << MyObj.MyAge << std::endl; /*This is how we access data from a class. If we was using a pointer to a class we would have to use the -> operator*/

	return 0;
}