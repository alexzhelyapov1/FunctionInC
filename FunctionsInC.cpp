#include "FunctionInC.h"

int Puts(const char *str) {

	assert (str != NULL);

	if (str[0] == '\0') {
		return EOF;
	}

	int i = 0;
	while (str[i] != '\0') {
		putchar (str[i]);
		i++;
	}
	putchar ('\n');
	return 0;
}


const char *Strchr (const char *str, int ch) {
	assert (str != 0);

	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == ch) {
			return &str[i];
		}
		else {
			i++;
		}
	}
	return NULL;

}


size_t strlen (const char *str) {
	assert (str != 0);
	int i = 0;
	for (i = 0; str[i] != '\0'; i++) ;
	return i;
}


char *Strcpy (char *str1, const char *str2) {
	int i = 0;
	do {
		str1[i] = str2[i];
		i++;
	} 
	while (str2[i] != '\0');
	return str1;
}


char *Strncpy(char *copy, const char *original, size_t num) {
	assert (original != NULL);
	assert (copy != NULL);

	int i = 0;
	while (i < int (num)) {
		copy[i] = original[i];
		i = (original[i] == '\0') ? num + 1 : i + 1; // можно ли i++?
	}
	copy[i] = '\0';
	return copy;
}


char *Strcat( char *begin, const char *end) {
	int beginI = 0;
	for (beginI = 0; begin[beginI] != '\0'; beginI++) ;
	for (int endI = 0; end[endI] != '\0'; endI++) {
		begin[beginI] = end[endI];
		beginI++;
	}
	begin[beginI] = '\0';
	return begin;
}


char *Strncat(char *str1, const char *str2, size_t count) {
	int i1 = 0;
	for (i1 = 0; str1[i1] != '\0'; i1++) ;
	int i2 = 0;
	while (i2 < int (count)) {
		str1[i1] = str2[i2];
		i1++;
		i2++;
		if (str2[i2] == '\0') {
			i2 = count + 1;
		}
	}
	str1 [i1] = '\0';
	return str1;
}


// char *fgets(char *str, int num, FILE *stream) {

// }