#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ݹ��ʵ������һ���޷��ŵ�������˳�����У����룺1234�����1 2 3 4
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
//    printf("��������\n");
//    scanf("%d", &price);
//    int change = 0;
//    change = 100 - price;
//    printf("�������%d", change);
//    return 0;
//}
//int main()
//{
//    printf("%d", printf("%d", printf("%d",43)));//4321�й�printf�ķ���ֵ
//    return 0;
//}
//�ö��ַ�����һ��������������ҳ���Ӧ����
                   //������arr��һ��ָ��
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
//	                        //���arr��ʵ�Ǵ��ݹ�ȥ�������һ����Ԫ�صĵ�ַ
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else {
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
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
//дһ�������ж�һ�����ǲ�������
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
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//����ָ��������ͬ�����һ��
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
//��ָ�����ı����
//int main()
//{
//	int a = 10;
//	 int *pa=&a;
//	 *pa = 20;
//	 printf("%d", a);
//	return 0;
//}
//���Զ��庯�������
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
//	int max=get_max(a, b);//������Լ�����ĺ���
//	printf("max=%d\n", max);
//	return 0;
//}