/*Consturctors and deconstructors
A constructor is a special type of method which runs everytime we create an instance/object of a class this is the default constructor, we can create our own.
We call a contructor to initialize our memory and set the value of it too zero, if we dont do this we will have whatever is left in the memory.
The constructor must not have a return type or a typedef and the name of the created contructor method must have the same name as the class.
When creating an instance of your class the constructor automatically gets called.
We dont need the constructor for variables that will have a set value for example int MyAge = 17; we dont need the constructor for that.
You can also pass parameters to a constructor. Do so when creating the object like this MyClass (parameter_here){};.
There are special types of constructors such as the copy and move constructor RESEARCH THOSE SOON.
The deconstructor runs when you destroy an object. Any time the object gets destroyed the destructor method will get called an will uninitialise or clean the used memory
and it applies to stack and heap allocated objects.
The destructer is identified by the tilde like so. ~MeSteven(){}
Its possible to manually call the constructor but thats most likely uneccesarry.
*/

/*Copy and move constructor
You should try and avoid copying where possible as it is taxing to performance.
*/

#include <iostream>

class ConstructorAndDeconstructorExample {
public:

	int YourAge;

	ConstructorAndDeconstructorExample() { YourAge = 0; } /*We have created a constructor to initialise the variable YourAge*/

	~ConstructorAndDeconstructorExample() { YourAge = 0; } /*We have created a deconstructor distinguished by the tilde~ this will get run when the object goes out of scope destroyed*/
};

int main() {

	ConstructorAndDeconstructorExample MyObj;

	ConstructorAndDeconstructorExample* NewPtr = &MyObj;

	std::cout << NewPtr->YourAge;

	return 0;
}