/*Enums
Short for enumeration.
All an enum is, is a way to give a name to a value so instead of having a bunch of integers called abc we can have an enum with the values abc which correspond to integers.
Its helpful when you want an integer to represent a certain state or certain values however you want to give them a name so your code is more readable.
Enums by default are just 32 bit integers.
If you declare one enum value for example A = 6,B,C the other enum values will be 7 and 8 therefore incrementing.
*/

#include <iostream>

int main() {

	enum ExampleOfEnum : unsigned int { /* You can declare which data type you want your values to consist of like so */
		Five = 5, Three = 3, One = 1
	};

	std::cout << ExampleOfEnum::Five << std::endl;  /* Here we are printing one of our enum values */
	
	return 0;
}
