#include <stdio.h>
void mystrcat(char *pa,char *pb)
{
 while(*pa!='\0')pa++;//pa 指向第一个字符串的尾部
while(*pb!='\0') 
{*pa++=*pb++; }
//把 pb 指向单元的内容
 
//连接在 pa 之后，可用一句或多句实现
*pa='\0';
}
int main()
{ char a[90],b[30]; 
gets(a);
gets(b);
mystrcat(a,b);
 //调用函数，实现两个字符串的连接。
 printf("\n 链接后的字符串是:%s\n",a);
 return 0;
}