#include "FunctionInC.h"
//#define DEBUG

int main () {
#ifndef DEBUG
	char a[] = {'1', '2', '3', '4', '5', '\0'};
	char b[] = "abcde";
	//a = (char *)malloc (10 * sizeof (char));
	Strncat(a, b, 10);
	Puts (a);



#else
#endif
}