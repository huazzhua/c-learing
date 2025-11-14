#include<stdio.h>

// // // // 1.字符指针
// // // int main(int argc, char const *argv[])
// // // {
// // //     // char ch = 'w';
// // //     // char* pc = &ch;
// // //     // printf("%c\n",*pc);
// // //     // *pc = 'b';
// // //     // printf("%c\n",*pc);

// // //     // const char* p = "abcdef";  //把字符串首字符a的地址，赋值给了p  "abcdef"是一个常量字符串，无法进行修改
// // //     // //等价于
// // //     // char arr[] = "abcdef";
// // //     // p = arr;
// // //     // printf("%s\n",arr); 
// // //     // printf("%s\n",p); 

// // //     // const char* p1 = "abcdef";   //由于 "abcdef"是被sonst修饰的常量字符串，无法进行修改，所以p1和p2都指向了，const常量字符串开辟的内存空间
// // //     // const char* p2 = "abcdef";

// // //     // char arr1[] = "abcdef";  //由于  arr1和arr2没有被const修饰，所以独立自行开辟空间 就算加上const变量，也还是开辟独立的空间
// // //     // char arr2[] = "abcdef";

// // //     // if (p1 == p2)
// // //     // {
// // //     //     printf("p1======p2\n");
// // //     // }else{
// // //     //     printf("p1 != p2");
// // //     // }

// // //     // if (arr1 == arr2)
// // //     // {
// // //     //     printf("arr1======arr2\n");
// // //     // }else{
// // //     //     printf("arr1 != arr2");
// // //     // }
    


// // //     return 0;
// // // }

// // // 2.指针数组  -是数组 用来存放指针的数组
// // int main(int argc, char const *argv[])
// // {
// //     int arr1[] = {1,2,3,4,5};
// //     int arr2[] = {2,3,4,5,6};
// //     int arr3[] = {3,4,5,6,7};

// //     int* parr[3] = {arr1,arr2,arr3};

// //     // printf("%d\n",*parr[2][3]);  //这样写是错的，这样写会被编译器认为是*(parr[2][3])的形式，这样的话就是对数字6进行解引用
// //     //正确的写法
// //     printf("%d\n",*(parr[2]+3)); //先取到arr3的首地址，然后+3,进行解引用
// //     for (int i = 0; i < 3; i++)
// //     {
// //         for (int j = 0; j < 5; j++)
// //         {
// //             printf("%d",*(parr[i]+j));
// //         }
// //         printf("\n");
// //     }
// //     //等价写法
// //     for (int i = 0; i < 3; i++)
// //     {
// //         for (int j = 0; j < 5; j++)
// //         {
// //             printf("%d",parr[i][j]);  // *(p+j) 等价于 p[j]
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }

// // 3.数组指针 -指向数组的指针

// void printf1(int arr[3][5],int r,int c){
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {   
//             //通过地址
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
    
// }


// void printf2(int (*p)[5],int r,int c){
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {   
//             //通过地址
//             printf("%d ",*(*(p+i)+j));
//         }
//         printf("\n");
//     }
    
// }
// int main(int argc, char const *argv[])
// {
//     //讨论数组名
//     // char* arr[5]={0};
//     // char* (*pc)[5] = &arr;

//     // int arr[10] = {0};
//     // int* p = arr;  //存放首元素地址
//     // int (*p2)[10] = &arr; //存放数组的地址    数组指针存放数组的地址
//     // printf("%p\n",arr);
//     // printf("%p\n",arr+1);

//     // printf("%p\n",&arr[0]);
//     // printf("%p\n",&arr[0]+1);

//     // printf("%p\n",&arr);
//     // printf("%p\n",&arr+1);

    
//     //求数组的字节大小
//     // int sz = sizeof(arr);
//     // printf("%d",sz);
//     //总结
//     //数组名通常表示的是数组首元素的地址
//     //但是有两个例外
//     //1.sizeof(数组名)，这里的数组名，表示整个数组，计算整个数组的大小
//     //2.&数组名，这里的数组名表示的是整个数组，所以&数组名，取的是整个数组

//     //此方法不常用
//     // int arr[] ={1,2,3,4,5,6,7,8,9,10};
//     // int (*p)[10] = &arr;
//     // int sz = sizeof(arr)/sizeof(arr[0]);
//     // for (int i = 0; i < sz; i++)
//     // {
//     //     printf("%d ",*(*p+i));   //p指向数组，所以*p相当于数组名。数组名又是数组首元素的地址，所以*p本质上是数组首元素的地址
//     // }
//     //数组指针的常用的方法
//     int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//     //通过地址实现
//     printf1(arr,3,5);
//     //通过数组指针
//     printf2(arr,3,5);
//     return 0;
// }

//  4.数组参数，指针参数

// void test(int arr[]){
//     printf("正确");
// }
// void test(int arr[10]){
//     printf("正确");
// }
// void test(int *arr){
//     printf("正确");
// }
// void test2(int *arr[20]){
//     printf("正确");
// }
// void test2(int **arr){
//     printf("正确");
// }
// void test3(int arr[3][5]){
//     printf("正确");
// }
// void test3(int arr[][]){
//     printf("错误");  //二维数组传参，行可以省略，列不能省略
// }
// void test3(int arr[][5]){
//     printf("正确");
// }
// void test3(int *arr){    
//     printf("错误");
// }
// void test3(int* arr[5]){     
//     printf("错误");
// }
// void test3(int (*arr)[5]){
//     printf("正确");
// }
// void test3(int **arr){
//     printf("错误");
// }
// void printf3(int *p,int sz){
//     for (int i = 0; i < sz; i++)
//     {
//         printf("%d ",*(p+i));
//     }
    
// }
// void test4(int **p){
//     **p = 20;
//     printf("%d\n",**p);
// }
// int main(int argc, char const *argv[])
// {
    // // 1.一维数组传参
    // int arr[10] = {0};
    // int *arr2[20] ={0};
    // test(arr);     //一维数组的数组名，表示的数组首元素的地址，表示一个元素 == &arr[0] 
    // test(arr2);
    // // 2.二维数组传参
    // int arr[3][5] = {0};
    // test3(arr);    //二维数组的数组名，表示第一行的一维数组的地址，也就是，将一整个数组传过去，而不是一个元素
    // // 3.一级指针传参
    // int arr3[10] = {1,2,3,4,5,6,7,8,9,10};
    // int *p = arr;
    // int sz = sizeof(arr)/sizeof(arr[0]);
    // //一级指针p，传递参数
    // printf2(p,sz);

    // 4.二级指针传参
    // int n = 10;
    // int *p  = &n;
    // int **pp = &p;
    // test4(pp);
    // test4(&p);
    // return 0;
// }

// 5.函数指针
int Add(int x,int y){
    return x+y;
}
void calc(int (*pf)(int,int)){
    int a = 3;
    int b = 5;
    int ret = pf(a,b);
    printf("%d\n",ret);
}
int main(int argc, char const *argv[])
{
    // int arr[5] = {0};
    // //&数组名 取的是数组的地址
    // int (*p)[5] = &arr;   //p是一个数组指针
    // //对于函数来说，&函数名和函数名都是函数的地址
    // printf("%p\n",&Add);
    // printf("%p\n",Add);
    // //如何存储
    // int (*pf)(int,int) = &Add;
    // int ret = (*pf)(2,3);
    // //也可以这样写
    // // int ret = pf(2,3);
    // printf("%d",ret);


    //案例
    calc(Add);
    return 0;
}
