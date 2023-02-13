/*Conditions and branches 
Bool short for boolean means true or false, 1 (true), 0 (false).
if, else, else if.
conditional statements may slow code down so switch statements may be the best option for performance.
to perform an if statement we must make a comparision inside of the brackets ().
Elseif will only check the condition if the first if statement fails.
The switch expression is evaluated once.
The value of the switch statement expression is compared with the values of each case.
If there is a match, the associated block of code is executed.
When C++ reaches a break keyword, it breaks out of the switch block, This will stop the execution 
of more code and case testing inside the block.
The default keyword specifies some code to run if there is no case match.
*/

#include <iostream>
#include <memory>

class Data {
public:
	bool IsCodingFun = true;
};

void SwitchStatementsExample() {

	std::unique_ptr<Data> MyObj(new Data());

	int day = 4;

	switch (day) {
	case 1:
		std::cout << "Monday" << std::endl;
		break;
	case 2:
		std::cout << "Tuesday" << std::endl;
		break;
	case 3:
		std::cout << "Wednesday" << std::endl;
		break;
	case 4:
		std::cout << "Thursday" << std::endl;
		break;
	case 5:
		std::cout << "Friday" << std::endl;
		break;
	case 6:
		std::cout << "Saturday" << std::endl;
		break;
	case 7:
		std::cout << "Sunday" << std::endl;
		break;
	}
}

int main () {

	std::unique_ptr<Data> MyObj(new Data());

	SwitchStatementsExample();

	if (MyObj->IsCodingFun == 1) {
		std::cout << "Coding is fun" << std::endl;
	}

	else if (MyObj->IsCodingFun == 0) {
		std::cout << "Coding is not fun :(" << std::endl;
	}

	else {
		std::cout << "[!]Error" << std::endl;
	}

	return 0;
}