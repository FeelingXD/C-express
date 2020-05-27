#include <stdio.h>
int main()
{
	char name[100];
	char address[100];
	printf("이름을 입력하세요 : ");
	gets_s(name, 100);

	printf("주소를 입력하세요 : ");
	gets_s(address, 100);

	puts(name);
	puts(address);

	return 0;
}