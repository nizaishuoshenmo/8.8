#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//递归的实例，用一个无符号的整数来顺序排列，输入：1234输出：1 2 3 4
void print(int n) 
{
    if (n > 9)
    {
        print(n/10);
    }
    printf("%d ", n % 10);
 }
int main()
{
    unsigned int num = 0;
    scanf("%d", &num);
    print(num);
    return 0;
}
//int main()
//{
//    int price = 0;
//    printf("请输入金额\n");
//    scanf("%d", &price);
//    int change = 0;
//    change = 100 - price;
//    printf("找您金额%d", change);
//    return 0;
//}
//int main()
//{
//    printf("%d", printf("%d", printf("%d",43)));//4321有关printf的返回值
//    return 0;
//}
//用二分法来在一个有序的数组中找出相应的数
                   //本质上arr是一个指针
//binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}	
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	                        //这个arr其实是传递过去的数组第一个首元素的地址
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else {
//		printf("找到了，下表是；%d\n", ret);
//	}
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//
//}
//int main()
//{
//	int year = 0;
//		for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		printf("%d ", year);
//	}
//	return 0;
//}
//写一个函数判断一个数是不是素数
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
// }
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//采用指针来处理同下面的一样
//void swap( int*pa, int*pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a=%d,b=%d\n" ,a, b);
//
//	return 0;
//}
//用指针来改变变量
//int main()
//{
//	int a = 10;
//	 int *pa=&a;
//	 *pa = 20;
//	 printf("%d", a);
//	return 0;
//}
//用自定义函数来解决
// int get_max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a = 10;
//	int b= 20;
//	int max=get_max(a, b);//这个是自己定义的函数
//	printf("max=%d\n", max);
//	return 0;
//}