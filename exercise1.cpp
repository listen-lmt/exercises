#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
//��ϰ5��ģ���û��������룬���ֻ�����������Σ�������������ȷ�����¼�ɹ�
//�����������������������
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>\n");
		scanf("%s", password);
		if (strcmp(password,"123456")==0)//==����������ʾ�����ַ�����ȣ�Ӧ���ÿ⺯��strcmp
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
			printf("�����������������\n");
		Sleep(2000);
	}
	if (i == 3)
		printf("����������\n");
	return 0;
}
//��ϰ4����ʾ����ַ��������ƶ������м���
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
//		Sleep(500);//�ȴ�0.5s
//		system("cls");//systemִ��ϵͳ�����һ������-cls-�����Ļ
//		printf("%s\n ", array2);
//	}
//	return 0;
//
//}
//��ϰ3�������������в���һ������
//����һ����������ң��˷�ʱ��
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
//			printf("�ҵ��ˣ��±���%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���");
//	return 0;
//}
//���������ö��ַ��ң���n�����������У�������ִ����������2Ϊ��nΪ�����Ķ�����
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}
//��ϰ2������1!+2!+3!+.......+10!
//�����������
//int main()
//{
//	int i = 0;
//	int n = 10;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		//Ҫ�����forѭ��ǰ��forѭ���ĳ�ʶ��������ret=1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	//ret=1*1=1
//	//ret=1*1*2=2
//	//ret=2*1*2*3=12
//	//ret�Ľ׳˵õ��ۻ�����û�г�ʼ��
//	printf("sum=%d", sum);
//	return 0;
//}
//��ȷ�Ż�����Ĵ���
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
//��ϰ1������n�Ľ׳�
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