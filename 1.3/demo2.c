#include <stdio.h>
int main()
{ int i=1;
switch(i)
{ case 1:printf("%d\t",i++);
    break; //考虑如果此处增加 break; 会怎么样？
case 2:printf("%d\t",i++);
case 3:printf("%d\t",i++);
case 4:printf("%d\t",i++);
}
printf("\ni=%d\n",i); 
return 0;
}

//加上break应该下面三个就不加了，这个i就是2