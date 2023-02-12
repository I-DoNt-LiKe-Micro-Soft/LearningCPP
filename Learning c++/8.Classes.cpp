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

/*Consturctors and deconstructors
A constructor is a special type of method which runs everytime we create an instance of a class this is the default constructor, we can create our own.
We call a contructor to initialize our memory and set the value of it too zero, if we dont do this we will have whatever is left in the memory.
The constructor must not have a return type or a typedef and the name of the created contructor method must have the same name as the class.
When creating an instance of your class the constructor automatically gets called.
We dont need the constructor for variables that will have a set value for example int MyAge = 17; we dont need the constructor for that.
You can also pass parameters to a constructor. Do so when creating the object like this MeSteven MyStat(parameter_here);.
There are special types of constructors such as the copy and move constructor RESEARCH THOSE SOON.
The deconstructor runs when you destroy an object. Any time the object gets destroyed the destructor method will get called an will uninitialise or clean the used memory
and it applies to stack and heap allocated objects.
The destructer is identified by the tilde like so. ~MeSteven(){}
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

void ClassesExample() {
	class MeSteven {
	private:
		std::string MyPenisSize = "1 nano metere";
	public:
		unsigned int YourAge;
		unsigned int MyAge = 17;
		float MyHeight = 5.11f;
		std::string Gender = "Male";
		MeSteven() {  /*We have created a constructer here*/
			YourAge = 0; /*Initializing the variable in memory*/
			std::cout << "Constructed" << std::endl;
		}
		void MyMethod() { /*This is a method basically a function inside of a class*/
			std::string MyPenisSize = "-1 inch on a good day";
			std::cout << YourAge;
		}
		~MeSteven() { /*We have created a deconstructer*/
			std::cout << "Deconstructed" << std::endl;
		}
	};
	MeSteven MyStat; /* We are Creating an object named MyStat from the class and also calling our constructor */
	std::cout << MyStat.MyAge << std::endl; /*And We can print the new values like so*/

	class InheritanceExample : public MeSteven { /*Here we have created a new class that inherits values from our other class*/
	public:
	};
	InheritanceExample MyStatsPlusPlus;
	std::cout << "Inherited Age: " << MyStatsPlusPlus.MyAge << std::endl;
}