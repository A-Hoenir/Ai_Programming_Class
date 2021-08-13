#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()
{
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf("%d %o %x", &num1, &num2, &num3);

	printf("입력된 정수 10진수 출력: ");
	printf("%d %d %d\n", num1, num2, num3);
	return 0;
}
*/

/*int main()
{
	int num =1;
	while (num <= 9)
	{
		printf("Hello World %d\n", num);
		num = num + 2;
	}
	return 0;
}*/

/*int main(void)
{
	int dan = 0, num = 1;
	printf("몇 단?: ");
	scanf("%d", &dan);

	while (num < 10)
	{
		printf("%d*%d=%d\n", dan, num, dan * num);
		num++;
	}
	return 0;
}*/

/*int main()
{
	int dan = 0, num = 0;
	printf("곱셈을 하자: ");
	scanf("%d %d", &dan, &num);

	while (dan<20, num < 20, dan*num<100)
	{
		printf("%d*%d=%d\n", dan, num, dan * num);
		num++;
	}
	return 0;
}*/

/*int main()
{
	int num = 0, a=0;
	printf("입력하시오: ");
	scanf("%d", &num);

	while (a<num)
	{
		printf("Hello World!\n");
		a++;
	}
	return 0;
}*/

/*int main()
{
	int num = 0, a = 1;
	scanf("%d", &num);

	while (a<= num)
	{
		printf("%d\n", a * 3);
		a++;
	}
	return 0;
}*/

/*int main()
{
	int num = 1, result = 0;
	while (num !=0)
	{
		scanf("%d", &num);
		result = result + num;
		printf("결과: %d\n", result);
	}
	return 0;
}*/

/*int main()
{
	int q = 0, a = 1;
	int num, result = 0;

	scanf("%d", &q);
	while (a <= q)
	{
		scanf("%d", &num);
		a++;
	}
	printf("평균값: %f", (double)a+num/q);
	return 0;
}*/

/*int main()
{
	int cur = 0;
	int is = 0;
	
	while (scanf("%d", &cur))
	{
		is = 1;
		while (is < 10)
		{
			printf("%d*%d=%d\n", cur, is, cur * is);
			is++;
		}
		return 0;
	}
}*/

/*int main()
{
	int total = 0, num = 0;

	do
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);
	printf("합계: %d\n", total);
	return 0;
}*/

//사번 500
//비번 1234

int main()
{
	int num1=500, num2 = 1234;
	int a = 0, b = 0;
	/*
		do
	{
		printf("My ID: \nPassword: \n");
		scanf("%d\n %d\n", &a, &b);
		int result1 = a == num1 && b == num2;
		int result2 = a != num1 && b != num2;
		int result3 = a != num1 && b == num2;
		int result4 = a == num1 && b != num2;

	} while ();
	*/

	do
	{
		scanf("%d %d", &a, &b);
	} while (a != num1 || b != num2);
	printf("로그인");
	return 0;
}
