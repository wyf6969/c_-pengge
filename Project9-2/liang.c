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
//		printf("你还活着 %d\n" ,dafj);
//		dafj++;
//	}
//	if (dafj == 3000)
//	{
//		printf("精尽人亡 %d\n",dafj);
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
	 printf("请输入两个数");
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
//	struct stu s = { "李祺龙",20,89 };//结构体创建和初始化
//	printf("1: %s %d %lf\n",s.name,s.age,s.socre);//结构体变量.成员变量
//	struct stu* xs = &s;
//	printf("2: %s %d %lf\n",xs->name,xs->age,xs->socre);//结构体指针->成员变量名
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
//		printf("少年");
//	else if (a >= 18 && a <= 30)
//		printf("青年");
//	else if ( a <= 50)
//		printf("中年");
//	else
//		printf("老年");
//	
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("奇数");
//	else
//		printf("偶数");
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
//	switch (day)      //()里面放整型表达式
//	{
//		case 1:		//case后面放整型常量表达式 :
//	           printf("周一");
//			   break;    //跳出分支
//		case 2:
//			printf("周二");
//			break;
//		case 3:
//			printf("周三");
//			break;
//		default :       //默认其他选项
//			printf("错误选项");
//			break;
//	}
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)  //EOF文件结束标志=end of file  =  ctrl+z
//		putchar(ch); //输出一个字符
//	return 0;
//}
//int main()
//{
//	int a = 0; //初始化
//	while (a<=10) //判断部分
//	{
//		printf("%d",a);
//		a++;		 //调整部分
//	}
//	return 0;
//} //打印0到10
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
//}//计算m的阶乘
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
//			printf("找到了下标是：%d\n", mid);
//			break;
//		}
//	}
//		if (left > right)
//		{
//			printf("找不到");
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
//}//计算1-3阶乘的和
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
//		Sleep(1000);//睡眠一秒钟
//		system("cls");//清屏
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
//		printf("请您输入密码>:");
//		scanf("%s", password);
//		//if( password =="123456")错误写法比较的是两个地址
//		if (strcmp(password, "123456") == 0)//两个字符串比较用strcmp
//		{
//			printf("登录成功！\n");
//			break;
//		}
//		else
//		{
//			printf("请您重新输入\n");
//		}
//	}
//
//		if (i == 3)
//		{
//			printf("禁止登录！\n");
//		}
//		return 0;
//	
//	
//}