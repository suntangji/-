#define _CRT_SECURE_NO_WARNINGS
#include "mine.h"
int main()
{
	int input = 0;
	
	do
	{
		count = ROW * COL - MINECOUNT;
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("ÎÞÐ§²Ù×÷\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}