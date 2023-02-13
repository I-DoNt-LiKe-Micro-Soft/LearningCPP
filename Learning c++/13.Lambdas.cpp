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
A lambda expression can have more power than an ordinary function by having access to variables from the enclosing scope. We can capture external variables from the enclosing scope in three ways : 
      Capture by reference 
      Capture by value 
      Capture by both (mixed capture)
Syntax used for capturing variables : 
      [&] : capture all external variables by reference 
      [=] : capture all external variables by value 
      [a, &b] : capture a by value and b by reference
A lambda with an empty capture clause [ ] can only access variables which are local to it. 
Different methods of capturing are demonstrated below :
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
            std::cout << "I am a lambda function" << std::endl;
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
