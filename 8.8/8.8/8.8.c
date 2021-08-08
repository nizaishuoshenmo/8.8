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
     //需要一个数组，这个数组可以存放4个函数的地址--函数指针的数组
    int (*p)(int, int) = Add;
    int (*parr[4])(int, int) = { Add,Sub, Mux, Div };//函数指针的数组
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
//    //&函数名与函数名都是函数的地址
//    int (*pa)(int, int) = &Add;
//    printf("%d", Add(2, 3));
//    printf("%d", (*Add)(2, 3));
// /*   printf("%d\n", &Add);
//    printf("%d\n", Add);*/
//    /*printf("%d\n", Add(a, b));*/
//    return 0;
//}
////二维数组的传参
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
////一维数组的传参
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//void test2(int* arr[20])//按照数组的方式
//{}
//void test2(int **arr)//按照数组的地址方式
//{}
//int main()
//{
//    //数组参数
//    int arr[10] = { 0 };
//    int* arr1[20] = { 0 };
//    test(arr);
//    test2(arr1);
//
//    return 0;
//}