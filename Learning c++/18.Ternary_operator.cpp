/*Ternary operator
The syntax is: condition ? expression1 : expression2;
If the condition is true, expression1 is executed and if the condition is false, expression2 is executed.
In C++, the ternary operator can be used to replace certain types of if...else statements.
It is also possible to use one ternary operator inside another ternary operator. It is called the nested ternary operator in C++.
*/

#include <iostream>


int main() {
	
	int x = 5;

	int number = 1;

	std::string result;

	x > 6 ? std::cout << "X is not equal to 6" << std::endl : std::cout << "X is not equal to 6" << std::endl;

	/*nested ternary operator to find whether*/
	/*number is positive, negative, or zero*/
	result = (number == 0) ? "Zero" : ((number > 0) ? "Positive" : "Negative");

	std::cout << "Your Number Is: " << number << std::endl;

	return 0;
}