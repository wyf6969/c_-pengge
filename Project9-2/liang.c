#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
# include <windows.h>

//extern  int g_val;
//enum sex {
//	man,
//	wonman
//};
//int main()
//{
//	enum sex s = man;
//	enum sex n = wonman;
//	const int a = 20;
//	int nni[10] = { 0 };
//	printf("%d\n", g_val);
//	printf("a= %d\n", a);
//	printf("%d\n", s);
//	printf("%d\n", wonman);
//	printf("%d\n", nni);
//	return 0;
//}
//int main()
//{
//	
//	printf("%d\n", strlen("abc"));
//
//	return 0;
//	}
//
//int main()
//{
//	int dafj = 0;
//	while (dafj < 3000)
//	{
//		printf("�㻹���� %d\n" ,dafj);
//		dafj++;
//	}
//	if (dafj == 3000)
//	{
//		printf("�������� %d\n",dafj);
//	}
//	return 0;
//}

 /*int add(x,y)
{
	 int z = x + y;
	 return z;
}
 int main()
 {
	 int num1 = 0;
	 int num2 = 0;
	 int sum = 0;
	 printf("������������");
	 scanf("%d%d", &num1, &num2);
	 sum = add(num1, num2);
	 printf("%d", sum);
	 return 0;
 }*/
 //int main()
 //{
 //	int arr[10] = { 0 };
 //	printf("%d\n" ,sizeof(0));
 //	int sz = sizeof(arr) / sizeof arr[1];
 //	printf("%d\n", sz);
 //
 //	return 0;
 //}
 //
 //
 //void test()
 //{
 //	static int b = 1;
 //	b++;
 //	printf("%d", b);
 //}
 //int main()
 //{
 //	int a = 0;
 //	while (a < 10)
 //	{
 //		test();
 //		a++;
 //	}
 //	return 0;
 //}
 //#define Add(x,y) ((x)+(y))
 //int main()
 //{
 //	printf("%d\n", 4 * Add(4, 5));
 //	return 0;
 // }
 //int main()
 //{
 //	int a = 10;
 //	printf("%p\n", &a);
 //	int* pp = &a;
 //	char jj = "dada";
 //	char* xx = &jj;
 //
 //	return 0;
 //}
//int main()
//{
//	int a = 20;
//	int* sz = &a;
//	*sz = 50;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof (char*));
//	return 0;
//}


//struct stu
//{
//	char name[20];
//	int age;
//	double socre;
//};
//struct book
//{
//	char name[20];
//	float price;
//	char id[10];
//};
//int  main()
//{
//	struct stu s = { "������",20,89 };//�ṹ�崴���ͳ�ʼ��
//	printf("1: %s %d %lf\n",s.name,s.age,s.socre);//�ṹ�����.��Ա����
//	struct stu* xs = &s;
//	printf("2: %s %d %lf\n",xs->name,xs->age,xs->socre);//�ṹ��ָ��->��Ա������
//	printf("3: %s %d %lf\n", (*xs).name,(*xs).age,(*xs).socre);
//	return 0;
//}
//int bj(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	int cha = bj(a, b);
//	printf("%d", cha);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	if (a%5 == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf ("%d", &a);
//	if (a < 18)
//		printf("����");
//	else if (a >= 18 && a <= 30)
//		printf("����");
//	else if ( a <= 50)
//		printf("����");
//	else
//		printf("����");
//	
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("����");
//	else
//		printf("ż��");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	
//	for (a = 1; a < 100; a++)
//	{
//		if (a % 2 == 1);
//		printf("%d\n", a);
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)      //()��������ͱ��ʽ
//	{
//		case 1:		//case��������ͳ������ʽ :
//	           printf("��һ");
//			   break;    //������֧
//		case 2:
//			printf("�ܶ�");
//			break;
//		case 3:
//			printf("����");
//			break;
//		default :       //Ĭ������ѡ��
//			printf("����ѡ��");
//			break;
//	}
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)  //EOF�ļ�������־=end of file  =  ctrl+z
//		putchar(ch); //���һ���ַ�
//	return 0;
//}
//int main()
//{
//	int a = 0; //��ʼ��
//	while (a<=10) //�жϲ���
//	{
//		printf("%d",a);
//		a++;		 //��������
//	}
//	return 0;
//} //��ӡ0��10
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || '9' > ch)
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0 ; a < 3 ; a++)
//	{
//		for( ; b<3 ; b++)
//		{
//			printf("shuaige\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int jx = 1;
//	scanf("%d",&m);
//	for (n = 1 ; n <= m ; n++ )
//	{
//		jx *= n;
//	}
//	printf("%d\n", jx);
//	return 0;
//}//����m�Ľ׳�
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int c = 7;	
//	int sz = sizeof (arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[mid] < c)
//		{
//			left = mid + 1;
//		}
//		else  if (arr[mid] > c)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ����±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//		if (left > right)
//		{
//			printf("�Ҳ���");
//	     }
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int jx = 1;
//	int sum = 0;
//	for (a = 1; a <= 3; a++)
//	{
//		jx *= a;
//		sum += jx;
//	}
//	printf("%d\n", sum);
//	return 0;
//}//����1-3�׳˵ĺ�
//int main()
//{
//	char arr1[] = { "I love you" };
//	char arr2[] = {"# #### ###"};
//	int left = 0;
//	int right = strlen (arr1) -1;
//	while (left <= right)
//	{
//		arr2 [left] = arr1 [left];
//		arr2 [right] = arr1 [right];
//		
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��һ����
//		system("cls");//����
//		left++;
//		right--;	
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("������������>:");
//		scanf("%s", password);
//		//if( password =="123456")����д���Ƚϵ���������ַ
//		if (strcmp(password, "123456") == 0)//�����ַ����Ƚ���strcmp
//		{
//			printf("��¼�ɹ���\n");
//			break;
//		}
//		else
//		{
//			printf("������������\n");
//		}
//	}
//
//		if (i == 3)
//		{
//			printf("��ֹ��¼��\n");
//		}
//		return 0;
//	
//	
//}