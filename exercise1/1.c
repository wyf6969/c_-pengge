#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for ( i = 0 ; i <=10 ; i++)
//	{
//		if (i = 5)
//		{
//			printf("%d",i);
//		}
//	}
//	return 0;
//}
//写代码将一个整数从大到小输出
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
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}
//}
//打印1-100之间3的倍数
//int main()
//{
//	int a = 0;
//	for (a = 0; a <= 100; a+=3)
//	{
//		
//			printf ("%d\n", a);
//		
//	}
//	return 0;
//}
//求两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	scanf("%d%d", &a, &b);	
//	while (a % b)
//	{
//		t = a % b;
//		a = b;
//		b = t;
//	}
//	printf("最大公约数是:%d\n",b);
//	return 0;
//}
//输入我是猪自动关机
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20]={0};//存放输入信息
//	system("shutdown -s -t 60");
//agin:
//	printf("注意你的电脑将在60秒后关机！输入我是猪则停止自动关机\n");
//	scanf("%s",input);
//
//	if ((strcmp(input ,"我是猪") == 0))
//	{
//		system("shutdown -a");	
//	}
//	else
//	{
//		goto agin;
//	}
//	return 0;
//}

//打印1000-2000年的闰年

//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 1000; n <= 2000; n++)
//	{
//		if (((n%4==0)&&(n%100!=0))||(n%400==0))
//		{
//			printf("%d\n",n);
//			count++;
//		}
//	}
//	printf("\n总计:%d\n",count);
//	return 0;
//}
//打印100-200之间的素数
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)//sqrt开平方函数调用头文件#include <math.h>
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}
