/*Arrays
Arrays in c++ always start at index position 0. The first value is always index position zero.
Writing values outside of the array will cause a memory access violation.
Arrays are good for, for loops.
Arrays store data contiguously.
An array is an integer pointer to that block of memory which contains our data
Watch the array video.
*/

#include <iostream>

int main() {

	int ArrayExample1[4]; /*We have created an array with space for 5 integers to be entered whenever*/

	int ArrayExample2[4]{ 1,2,3,4, }; /*I have created an array with values i want in there*/

	ArrayExample1[0] = 6; /*Setting an array value*/

	std::cout << ArrayExample1[0] << std::endl; /*Printing an array value*/

	std::cout << ArrayExample2[3] << std::endl; /*Printing an array value*/

	return 0;
}
