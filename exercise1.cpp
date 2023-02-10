#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
//练习5：模拟用户输入密码，最多只允许输入三次，三次内密码正确，则登录成功
//三次输入均错误，则明天再试
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>\n");
		scanf("%s", password);
		if (strcmp(password,"123456")==0)//==不能用来表示两个字符串相等，应该用库函数strcmp
		{
			printf("登录成功\n");
			break;
		}
		else
			printf("密码错误，请重新输入\n");
		Sleep(2000);
	}
	if (i == 3)
		printf("请明天再试\n");
	return 0;
}
//练习4：演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	char array2[] = "                   ";
//	char array1[] = "welcome to bit !!!!";
//	int left = 0;
//	int right = strlen(array1)-1;
//	while (left <= right)
//	{
//		array2[left] = array1[left];
//		array2[right] = array1[right];
//		left++;
//		right--;
//		Sleep(500);//等待0.5s
//		system("cls");//system执行系统命令的一个函数-cls-清空屏幕
//		printf("%s\n ", array2);
//	}
//	return 0;
//
//}
//练习3：在有序数字中查找一个数字
//方法一：属于逐个找，浪费时间
//int main()
//{
//	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 7;
//	int sz = sizeof(array) / sizeof(array[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k==array[i])
//		{
//			printf("找到了，下标是%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到");
//	return 0;
//}
//方法二：用二分法找，在n个有序数字中，如果数字存在最多找以2为底n为对数的对数；
//int main()
//{
//	int k = 15;
//	int left = 0;
//	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(array) / sizeof(array[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (array[mid] < k)
//		{
//			left = left + 1;
//		}
//		else if (array[mid] > k)
//		{
//			right = right - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}
//练习2：计算1!+2!+3!+.......+10!
//常见错误代码
//int main()
//{
//	int i = 0;
//	int n = 10;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		//要在这个for循环前或for循环的初识化部分上ret=1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	//ret=1*1=1
//	//ret=1*1*2=2
//	//ret=2*1*2*3=12
//	//ret的阶乘得到累积，并没有初始化
//	printf("sum=%d", sum);
//	return 0;
//}
//正确优化过后的代码
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//练习1：计算n的阶乘
//int main()
//{
//	int ret = 1;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d", ret);
//	return 0;
//}