#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int  main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));//8,10,12,14,16
//	}
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		printf("%d\n", i);
//	}
//	return 0;
// }

//int main()
//{
//	int m = 24;
//	int n = 12;
//	int r = 0;
//	scanf("%d%d", &m, &n);//�������
//	while (r=m%n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2100;year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//1.�ܱ�4�������Ҳ��ܱ�100����������
//		//2.�ܱ�400����������
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//
//	}printf("\ncount=%d\n", count);
//	return 0;
//}

//��ӡ����
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i=100;i<=200;i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2->i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0) 
//			{
//				break;
//			}
//		}
//		if (j == i) {
//			count++;
//			printf("%d ", i);	
//		}
//		
//	}
//	printf("\ncount=%d\n", count);//���ж��ٸ�����
//	return 0;
//}
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i=101;i<=200;i+=2)
	{
		//�ж�i�Ƿ�Ϊ����
		//�����жϵĹ���
		//1.�Գ���
		//����2->i-1
		int j = 0;
		//sqrt-��ƽ������ѧ�⺯��-<math.h>
		for (j = 2; j <=sqrt(i); j++)
		{
			if (i%j == 0) 
			{
				break;
			}
		}
		if (j >sqrt(i)) {
			count++;
			printf("%d ", i);	
		}
		
	}
	printf("\ncount=%d\n", count);//���ж��ٸ�����
	return 0;
}