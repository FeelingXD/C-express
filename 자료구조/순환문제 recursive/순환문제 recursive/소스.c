#include <stdio.h>
void unknow();
int main()
{
	unknow();
}

void unknow() {
	int ch;
	if ((ch = getchar()) != '\n')
		unknow();
	putchar(ch);
}