/*String literals
A string literal or anonymous string is a literal for a string value in the source 
code of a computer program.
A string is just a char array, the char array will always say their is 1 more character hidden 
in your string that is called a string terminator \0.
"s-char-sequence(optional)"
L"s-char-sequence(optional)"
u8"s-char-sequence(optional)"
u"s-char-sequence(optional)"
U"s-char-sequence(optional)"
*/

#include <iostream>

int main(){
	
	std::string MyName "John\0"; /*A string with a null terminator*/

	return 0;

}