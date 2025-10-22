/*


#include <stdio.h>

void main()
{
int a = 5;
char c = 'a';
float f = 5.3;
double m = 13.65;
double result;
    printf("a + c = %d\n",a+c);
    printf("a + c = %c\n", a + c);
    printf("f + m = %f\n", f + m);

    printf("a + m = %f\n", a + m);
    printf("c + f = %f\n", c + f);

    result = a + c * (f + m);
    printf("double = %f\n",result);
}

*/
/*
#include <stdio.h>


void main()
{

printf("How are you?\n");
printf("I am fine.\n\n");

printf("How are you?\t");
printf("I am fine.\n\n");

printf("How are you?\n");
printf(" \bI am fine.\n\n");

printf("                 I am fine.");
printf("\rHow are your?\n\n");
}
*/

/*
#include <stdio.h>

int main(){
    int c1,c2;
    c1 = 321,c2 = 400;
    printf("%c%c",c1,c2);
    printf("%d%d\n",c1,c2);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{ float x,y;
 scanf("%f",&x);
 printf("\n2.4*x-1/2=%f",2.4*x-1.0/2);
 printf("\nx%%2/5-x=%f",(int)(x)%2/5-x);
 printf("\n(x-=x*10,x/=10)=%d\n",(x-=x*10,x/=10)); 
 return 0;
}
*/
/*

#include <stdio.h>

int main() 
{ 
int i,j,m,n ; 
i=8;j=10; 
m=i++; 
n=++j; 
printf("%d,%d,%d,%d\n",i,j,m,n); 
 return 0;
}
*/


/*

#include <stdio.h>

int main() 
{ int i , j , m=0 , n=0 ; 
i=8; j=10; 
m+=i++; 
n -= --j; 
printf("%d,%d,%d,%d\n",i,j,m,n); 
 return 0;
}
 


/* 

#include <stdio.h> 

int main(){
    char a,b;
    printf("请输入一个字符: ");
    scanf("%c", &a);
    b = (int)a;
    printf("\n\n%c的ASCII码为: %d\n",a,b);
    return 0;
}
*/
/*

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("\n%d(10),%o(8),%x(16)\n", a,a,a);
    return 0;
}
*/
/*
#include <stdio.h>
 int main( )
 { int u , v = 89;
 printf("u=%d,v=%d\n",u,v); 
 return 0;
 }
*/
 //错误在第3行，变量不可以用等号，只能用逗号
/*
 #include <stdio.h>
int main()
{
int x,y,a;
scanf("%x,%x",&x,&y); 
a=(x+y)/2;
printf("The average is %d:\n", a); 
 return 0;
 }*/

//错误在第三行，这两个都应该是%x，而不是%y。

/*

#include <stdio.h>

int main() {
    int a, b, c;
    float sum;
    a = 2;
    b = 3;
    c = 4;
    sum = 1.0/a + 1.0/b + 1.0/c;
    printf("结果是:  %f", sum);
}*/
/**/


#include <stdio.h>
#include <math.h>
int main() {
    printf("输入圆的半径: ");
    double r;
    scanf("%lf", &r);
    double pi = 3.14159265358979323846;
    double area = pi * r * r;
    double perimeter = 2 * pi * r;
    printf("面积: %lf\n", area);
    printf("周长: %lf\n", perimeter);
}