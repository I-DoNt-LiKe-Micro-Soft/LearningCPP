/*Vectors
Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted.
std::vector<TypeDef> VectorName = {1, 2, 3, 4, 5};
In C++, vectors are used to store elements of similar data types. However, 
unlike arrays, the size of a vector can grow dynamically.
That is, we can change the size of the vector during the execution of a 
program as per our requirements.
There are different ways to initialize a vector in C++.
A vector can add elements, access elements, remove elements and change elements.
To add a single element into a vector, we use the push_back() function, it inserts an 
element into the end of the vector.
In C++, we use the index number to access the vector elements, we use the at() function to 
access the element from the specified index.
We can change an element of the vector using the same at() function.
To delete a single element from a vector, we use the pop_back() function.

size() returns the number of elements present in the vector
			
clear() removes all the elements of the vector
			
front() returns the first element of the vector
			
back() returns the last element of the vector
			
empty() returns 1 (true) if the vector is empty
			
capacity() check the overall size of a vector
*/

/*initializing vectors

Initializer list:
vector<int> vector1 = {1, 2, 3, 4, 5};

Uniform initialization:
vector<int> vector2 {1, 2, 3, 4, 5};

Here, 5 is the size of the vector and 12 is the value:
vector<int> vector3(5, 12);
This code creates an int vector with size 5 and initializes the vector with the value 
of 12. So, the vector is equivalent to:
vector<int> vector3 = {12, 12, 12, 12, 12};
*/

/*C++ Vector Iterators
Vector iterators are used to point to the memory address of 
a vector element. In some ways, they act like pointers in C++.
We can create vector iterators with the syntax vector<T>::iterator iteratorName;
if we have 2 vectors of int and double types, then we will need 2 different iterators corresponding to their types.
*/

#include <iostream>
#include <vector>

int main() {
	
	std::vector<int> MyVector = {1,2,3,4,5,6,7}; /*We have created a vector and initialized it as a list*/

	MyVector.push_back(8);  /*We have added the integer 8 to our vector*/

	std::cout << "Value at index position 5 is: " << MyVector.at(5) << std::endl;  /*We have printed a value from our vector*/

	MyVector.at(5) = 9;  /*We have changed the value of index position 5 to equal 9*/

	/*declare iterator*/
	std::vector<int>::iterator MyIterator;

	/*initialize the iterator with the first element*/
	MyIterator = MyVector.begin();

	/*print the vector element*/
	std::cout << "num[0] = " << *MyIterator << std::endl;

	/*iterator points to the 3rd element*/
	MyIterator = MyVector.begin() + 2;
	std::cout << "num[2] = " << *MyIterator << std::endl;

	/*iterator points to the last element*/
	MyIterator = MyVector.end() - 1;
	std::cout << "num[4] = " << *MyIterator << std::endl;

	return 0;
}
