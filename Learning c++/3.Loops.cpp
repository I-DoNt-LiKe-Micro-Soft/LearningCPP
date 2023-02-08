/*Loops
In c++ their are three types of loops.
Loops are neccesary in most applications.
The for loops conditional brackets seperate into three parts seperated by semi colons the first part can be a variable the second part is a true or false condition.
While loops have one condition in the conditional brackets.
The body of a do while loop will be executed at least once no matter what. 
*/

#include <iostream>

int main LoopsExample() {
	for (int i = 0; i < 5; i++){  /*This condition will iterate over the list until i becomes less than or equal to 5*/
		std::cout << i << std::endl;
		
	}

	int i = 0;
	while (i < 5) {
		std::cout << i << std::endl;
		i++;
	}

	bool condition = false;
	do {
		std::cout << "A do while loop will still execute me even if im false" << std::endl;
	} while (condition);

}