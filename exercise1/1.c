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
//д���뽫һ�������Ӵ�С���
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
//��ӡ1-100֮��3�ı���
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
//�������������Լ��
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
//	printf("���Լ����:%d\n",b);
//	return 0;
//}
//�����������Զ��ػ�
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20]={0};//���������Ϣ
//	system("shutdown -s -t 60");
//agin:
//	printf("ע����ĵ��Խ���60���ػ���������������ֹͣ�Զ��ػ�\n");
//	scanf("%s",input);
//
//	if ((strcmp(input ,"������") == 0))
//	{
//		system("shutdown -a");	
//	}
//	else
//	{
//		goto agin;
//	}
//	return 0;
//}

//��ӡ1000-2000�������

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
//	printf("\n�ܼ�:%d\n",count);
//	return 0;
//}
//��ӡ100-200֮�������
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)//sqrt��ƽ����������ͷ�ļ�#include <math.h>
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
