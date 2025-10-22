 #include <stdio.h>
int main()
{
int x,y,a;
scanf("%x,%x",&x,&y); 
a=(x+y)/2;
printf("The average is %d:\n", a); 
 return 0;
 }

//错误在第三行，这两个都应该是%x，而不是%y