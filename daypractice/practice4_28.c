#include<stdio.h>
//int main()
//{
//	printf(" %d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//
//

//int facl(int n)
//{
//	int sum = 1;//当初始化sum=0;时，运行结果为0；原因待查
//	if (2 <= n)
//	{
//		sum = n;
//		sum *= facl(n - 1);
//
//	}
//	return sum;
//
//}
//
//int main()
//{
//	int a = 7;
//	int b = 0;
//	b = facl(a);
//	printf("%d ", b);
//	return 0;
//}




int facl(int n)
{
	if (2 <= n)
	{
		return n *= facl(n - 1);

	}

}

int main()
{
	int a = 7;
	int b = 0;
	b = facl(a);
	printf("%d ", b);
	return 0;
}