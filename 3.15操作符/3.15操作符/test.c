#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h> 


int main()
{
	int c = 1;
	int d = c + --c;
	printf("%d", c);
	return 0;
}



//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//
//int main()
//{
//	struct stu s1 = {"jack",20,"11111111"};
//	/*printf("%s", s1.name);*/
//	struct stu* ps1 = &s1;
//	printf("%s", ps1->id);
//	printf("%d", (*ps1).age);
//	(*ps1).age = 21;
//	strncpy((*ps1).name, "lucy",3);
//	printf("%s", s1.name);
//	printf("%d", s1.age);
//	return 0;
//}




//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("%d%d%d%d", a, b, c, d);
// }







//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}





//int main()
//{
//	double a = 3.14;
//	printf("%lf", a);
//	return 0;
//}




//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//}




//int main()
//{
//	char arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int ret = sizeof(arr[0]);
//	printf("%d", ret);
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//}






//int main()
//{
//	int i = 1;
//	int sum = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d", sum);
//	return 0;
//}



//int main()
//{
//	int a = 3;
//	int b = 5;
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}





//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}





//int main()
//{
//	int a = 15;
//	int b = 2;
//	int c = 15 % 2;
//	printf("%d", c);
//	return 0;
//}



//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	int b = 5;
//	int c = a & b;
//	printf("%d", c);
//}




//int main()
//{
//	int a = 16;
//	int b = a >> 2;
//	printf("%d", b);
//	return 0;
//}





//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 1; i < sz; i++)
//	{
//		for (j = 0; j < sz - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}








//int main()
//{
//	char arr1[] = "welcome to my house";
//	char arr2[] = "*******************";
//	int sz = strlen(arr1);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(50);
//		system("cls");
//		printf("%s\n", arr2);
//	}
//	return 0;
//}








//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ",i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//int main()
//{
//	int a = 5 / 2.0;
//	printf("%d", a);
//}