//1
/*

#include <stdio.h>

int main() {
    printf("*******************\n");
    printf("     very good!\n");
    printf("*******************\n");
    return 0;
}

*/

//2
/*
#include <stdio.h>

int main() {
    int a, b, sum, minus;
    a = 123;
    b = 456;
    sum = a+b;
    minus = a-b;
    printf("a+b=%d\na-b=%d\n",sum,minus);
    return 0;
}

*/

//第三题加个b = 2;第二小问加个area

//第四题错误在第三行，没有声明y这个变量就使用，应该为int x, y;



//5
/*
#include <stdio.h>

int main(){
    printf("          *          \n");
    printf("     *         *     \n");
    printf("    *                \n");
    printf("     *         *     \n");
    printf("          *          \n");
    return 0;
}

*/


//6


/*
#include <stdio.h>

int main(){
    printf("     *\n");
    printf("    * *\n");
    printf("   * * *\n");
    return 0;
}

*/

//7

#include <stdio.h>

int main() {
    int max(int x,int y);
    int a, b, c, num;
    printf("输入三个数 ");
    scanf("%d%d%d", &a, &b, &c);
    num = max(max(a,b),c);
    printf("最大数是: %d", num);
    return 0;
}

int max(int x, int y){
    if(x>y)
        return x;
    else
        return y;
}








