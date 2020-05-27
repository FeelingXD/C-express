#include <stdio.h>

int main() {
	
	char* p = "Hello World";
	printf("%s\n", p);
	
	p = "Welcome to C World!";
	printf("%s\n", p);
	
	char q[] = "Goodbye";
	printf("%s\n",q);
	
	q[0] = 'a';
	printf("%s", q);
	return 0;

}