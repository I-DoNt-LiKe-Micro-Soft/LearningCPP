/*Static and extern variables
Static variables and functions are only going to be linked internally inside this translation unit and cannot be called or used inside other cpp files.
The linker is not going to look outside the scope of this translation unit for static variables.
When the linker sees extern before a global variable declaration, it looks for the definition in another/external translation unit.
In basic terms marking a variable static is similar to making it private.
You want to use static as much as you can unless you need the variable to be global. Not using static variables and function can lead to some pretty bad bugs.
*/

/*Static inside classes and structs
If one instance changes one of the static variables its going to reflect that change accross all instances of that class.
Static methods cannot access non static variables. The reason is because a static method does not have a class instance.
Every non static method you write in a class always gets a current instance of the class as a parameter. Thats how classes acctually work behind the 
scenes there is no such thing as a class, they are just functions with hidden parameters.
explore static methods more !
*/


static void StaticVariableExample() {
	static std::string MyStaticVariable = "Hello I Am Static I Can Only Be Called Inside Of This Translation Unit (This file)";
}