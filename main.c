#include <stdio.h>

char type;
int value, cost;
int calculate(int value);


int main(void)
{
	printf("* * * ���� ��� ��� ���α׷��Դϴ� * * *\n");
	printf("�ְ� ����: R, ��� ����: C, ���� ���� : I �� �Է����ּ��� : ");
	scanf_s("%c", &type, 1);

	printf("�Ҹ� ���·��� �Է����ּ���: ");
	scanf_s("%d", &value);

	cost = calculate(value);

	if (type == 'R')
	{
		printf("���� ��� : %d��", (int)(cost * 1.1));
	}

	else if (type == 'C')
	{
		printf("���� ��� : %d��", (int)(cost * 1.2));
	}
	
	else
	{
		printf("���� ��� : %d��", (int)(cost * 1.3));
	}

	return 0;
}	

int calculate(int value)
{
	int fee;

	if (value < 300)
	{
		fee = 3000 + value * 100;
	}

	else if (value > 300 && value < 600)
	{
		fee = 3000 + (300 * 100 + (value - 300) * 150);
	}

	else
	{
		fee = 3000 + (300 * 100 + 300 * 150 + (value - 600) * 200);
	}

	return fee;
}