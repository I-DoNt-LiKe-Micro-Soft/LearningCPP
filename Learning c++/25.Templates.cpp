/*Templates
A template is a simple yet very powerful tool in C++. The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types. 
For example, a software company may need to sort() for different data types. Rather than writing and maintaining multiple codes, we can write one sort() and pass data type as a parameter. 
C++ adds two new keywords to support templates: ‘template’ and ‘typename’. The second keyword can always be replaced by the keyword ‘class’.
Templates are expanded at compiler time. This is like macros. The difference is, that the compiler does type checking before template expansion. 
The idea is simple, source code contains only function/class, but compiled code may contain multiple copies of the same function/class.
Function Templates We write a generic function that can be used for different data types. Examples of function templates are sort(), max(), min(), printArray(). 
*/