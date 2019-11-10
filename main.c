#include <stdio.h>

char type;
int value, cost;
int calculate(int value);


int main(void)
{
	printf("* * * 전기 요금 계산 프로그램입니다 * * *\n");
	printf("주거 지역: R, 상업 지역: C, 공업 지역 : I 를 입력해주세요 : ");
	scanf_s("%c", &type, 1);

	printf("소모 전력량을 입력해주세요: ");
	scanf_s("%d", &value);

	cost = calculate(value);

	if (type == 'R')
	{
		printf("전력 요금 : %d원", (int)(cost * 1.1));
	}

	else if (type == 'C')
	{
		printf("전력 요금 : %d원", (int)(cost * 1.2));
	}
	
	else
	{
		printf("전력 요금 : %d원", (int)(cost * 1.3));
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