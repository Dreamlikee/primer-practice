#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d  ",i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while (i<100)
//	{
//		if(i % 2 == 1)
//		printf("%d  ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//			printf("%d  ", i);
//		i+=2;
//	}
//	return 0;
//}

int compare(const void* e1,const void* e2)
{
	return((int)(*(float*)e1 - *(float*)e2));
}
int main()
{
	float arr[] = { 4.5,6.7,4.3,5.7,8.6,6.4 };
	int sz = (sizeof(arr) / sizeof(arr[0]));
	qsort(arr, sz, sizeof(arr[0]), compare);
	int i = 0;
	for (i = 0;i < sz; i++)
		printf("%f  ", arr[i]);
	 return 0;
}


 