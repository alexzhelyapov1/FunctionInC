#ifndef FUNCTIONINC_H_INCLUDED
#define FUNCTIONINC_H_INCLUDED


#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int Puts (const char *str);				//вывод массива
const char *Strchr (const char *str, int ch);		//ищет первое вхождение ch
size_t strlen (const char *str);
char *Strcpy (char *str1, const char *str2);
char *Strncpy (char *copy, const char *original, size_t num);
char *Strcat( char *begin, const char *end);
char *Strncat(char *str1, const char *str2, size_t count);


#endif //FUNCTIONINC_H_INCLUDED

//dest (ination) source (src)