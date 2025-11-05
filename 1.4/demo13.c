#include <stdio.h>
int main()
 { int i =100;
 while( 1 )
 { i = i%100+1 ;
 printf( " %4d ," ,i ) ;
 if ( i%10==0 ) printf ( " \n ") ;
 if ( i>=100) break ;
}
return 0;
}

//错在第八行，要写=要不然就是无限循环