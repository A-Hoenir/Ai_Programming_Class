#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()
{
	int num1, num2, num3;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %o %x", &num1, &num2, &num3);

	printf("�Էµ� ���� 10���� ���: ");
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
	printf("�� ��?: ");
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
	printf("������ ����: ");
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
	printf("�Է��Ͻÿ�: ");
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
		printf("���: %d\n", result);
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
	printf("��հ�: %f", (double)a+num/q);
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
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);
	printf("�հ�: %d\n", total);
	return 0;
}*/

//��� 500
//��� 1234

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
	printf("�α���");
	return 0;
}
