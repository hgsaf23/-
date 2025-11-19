#include <stdio.h>
int *find_middle(int a [], int n){
    if(n%2==0){
        return &a[n/2-1];
    } else {
        return &a[n/2];
    }
}
int main() {
    int n =4;
    int a[] = {1,2,3,4,5};
    int *p = find_middle(a,n);
    printf("%d\n",*p);
    return 0;
}