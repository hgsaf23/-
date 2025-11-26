#include <stdio.h>
int main()
{ int a , b ;
int *p=a ,*q =b;
printf("请输入两个整数:");
scanf("%d,%d", p ,q);
printf("%d,%d\n",a ,b);
printf("%d,%d\n",*p,*q);
return 0;
}

//第四行错了，指针现在是空指针，需要指向某个变量对象