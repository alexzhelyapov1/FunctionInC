#include <stdlib.h>
#include <stdio.h>

void clearInputBuffer ();

int main () {
	int a = 0, b = 0, c = 0;
	int count = scanf ("%d %d %d", &a, &b, &c);
	clearInputBuffer ();
	printf("count = %d, %d %d %d\n", count, a, b, c);
	return 0;
}

void clearInputBuffer () {
	int symbol;
	while ((symbol = getchar()) != '\n') {
		putchar ('!');
		putchar (symbol);
		putchar ('\n');
	}
}