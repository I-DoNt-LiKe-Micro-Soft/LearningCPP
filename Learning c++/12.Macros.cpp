/*Macros
We use the preprocessor to help us automate. 
Every statement with a hashtag is known as a preprocessor directive.
Macros may make your code confusing.
The preprocessor replaces your macros with the original code at compile time.
You can make any character a macro.
We can also remove certain code from compilation
We can also define multiple lines by using the escape newline character backwards slash.
*/

#include <iostream>

#define RET return 0	/*We have defined return 0 as RET. We could include the semicolon aswell*/
#define print(x) std::cout << x << std::endl;

#ifdef
#else
#endif

#define Example void MultiLineExample(){\
print("I am a function defined by a macro");\
}

Example

int main() {

	print("HELLO_WORLD!\n");

	MultiLineExample();

	RET;
}