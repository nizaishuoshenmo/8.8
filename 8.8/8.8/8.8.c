#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Add(int x, int y)
{
    return x + y;
}
int Sub(int x, int y)
{
    return x - y;
}
int Mux(int x, int y)
{
    return x * y;
}
int Div(int x, int y)
{
    return x / y;
}
int main()
{
    /* int* arr[5];*/
     //��Ҫһ�����飬���������Դ��4�������ĵ�ַ--����ָ�������
    int (*p)(int, int) = Add;
    int (*parr[4])(int, int) = { Add,Sub, Mux, Div };//����ָ�������
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        printf("%d ", parr[i](2, 3));
    }
    return 0;
}
//int Add(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    //int arr[10] = { 0 };
//    //int(*p)[10] = &arr;
//    //  // &arr
//    //arr
//    //&�������뺯�������Ǻ����ĵ�ַ
//    int (*pa)(int, int) = &Add;
//    printf("%d", Add(2, 3));
//    printf("%d", (*Add)(2, 3));
// /*   printf("%d\n", &Add);
//    printf("%d\n", Add);*/
//    /*printf("%d\n", Add(a, b));*/
//    return 0;
//}
////��ά����Ĵ���
//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
//void test(int arr[][])//err
//{}
//void test(int (*arr)[5])
//{}
//int main()
//{
//    int arr[3][5] = { 0 };
//    test(arr);
//    return 0;
//}
////һά����Ĵ���
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//void test2(int* arr[20])//��������ķ�ʽ
//{}
//void test2(int **arr)//��������ĵ�ַ��ʽ
//{}
//int main()
//{
//    //�������
//    int arr[10] = { 0 };
//    int* arr1[20] = { 0 };
//    test(arr);
//    test2(arr1);
//
//    return 0;
//}