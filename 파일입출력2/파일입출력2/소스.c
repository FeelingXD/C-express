#include <stdio.h>

int main()
{
	if (remove("sample.txt") == -1)//-1�϶� ���� 0�϶� ��
	{
		printf("sample.txt ������ �� �����ϴ�.");
	}
	else
		printf("sample.txt �� �����Ͽ����ϴ�.");

	getchar();
	return 0;
	
}