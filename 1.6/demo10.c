#include <stdio.h>
 void func ( float a , float b );
 int main()
 { float x , y ;
 float z;
 scanf("%f , % f",&x ,&y);
 func ( x , y ) ;
 printf ( "z=%f\n" ,z ) ; return 0;
 }
 void func ( float a , float b )
 { float c ;
 c = a * a + b * b ;
 return c ;
 }