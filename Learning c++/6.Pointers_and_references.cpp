/*Pointers and references
A pointer is a variable that stores the memory address of another variable.
The ampersand(&) character is used to display the memory address of a variable.
pointers are declared by typing an asterix next to your typedef for example char* MyPointer = &Variable.
references are decalred by typing an ampersand next to your typedef for example char&
null is a built in constant value that means zero.
We put an asterix infront of the pointer to dereference/get the original value stored.
*/

int main() {

	std::string MyName = "Steven";

	std::cout << &MyName; /*Outputs the memory address of the variable MyName*/

	std::string* NewPointer = &MyName; /*We have created a new pointer*/

	std::cout << *NewPointer << std::endl;   /*We put an asterix infront of the pointer to dereference/get the original value stored*/

	return 0;
}