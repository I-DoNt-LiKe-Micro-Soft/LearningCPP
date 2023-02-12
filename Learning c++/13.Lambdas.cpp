/*
[ capture clause ] (parameters) -> return-type  
{   
   definition of method   
} 
*/

/*
[]capture clause(Also known as the lambda - introducer in the C++ specification.)
()parameter list Optional. (Also known as the lambda declarator)
mutable specification Optional.
exception - specification Optional.
trailing - return-type Optional.
{}lambda body.
*/

/*Lambdas
https://learn.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=msvc-170
C++ 11 introduced lambda expressions to allow inline functions 
which can be used for short snippets of code that are not going to be reused and 
therefore do not require a name.
*/

#include <iostream>

void LambdaExample(){
	/*Beginning of lambda*/
	[]() {
            std::cout << "I am a lambda function\0" << std::endl;
        } /*End of lambda expression*/

}

int main(){

	return 0;
}



[]capture clause(Also known as the lambda - introducer in the C++ specification.)

()parameter list Optional. (Also known as the lambda declarator)

mutable specification Optional.

exception - specification Optional.

trailing - return-type Optional.

{}lambda body.
