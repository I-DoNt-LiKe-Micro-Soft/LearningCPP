/*Conditions and branches
if, else, elseif.
conditional statements may slow code down.
to perform an if statement we must make a comparision inside of the brackets ().
Elseif will only check the condition if the first if statement fails.
*/

#include <iostream>

int main IfStatementExample() {
	static int x = 5;
	static bool ComparisonResult = x == 5;
	if (ComparisonResult == 1)
		std::cout << "integer x is equal to 5" << std::endl;
	else
		std::cout << "integer is not equal to 5" << std::endl;
}