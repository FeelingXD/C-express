#include <stdio.h>

int main()
{
	if (remove("sample.txt") == -1)//-1일때 실패 0일때 참
	{
		printf("sample.txt 삭제할 수 없습니다.");
	}
	else
		printf("sample.txt 를 삭제하였습니다.");

	getchar();
	return 0;
	
}