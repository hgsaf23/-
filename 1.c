#include<stdio.h>
int array[] = {3,4,2,6,4,3};
int main(){
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++){
      int temp;
      if (array[j] > array[j-1]){
        temp = array[j];
        array[j] = array[j-1];
        array[j-1] = temp;
      }
    }
  }
  printf("排序后的数组为：");
  for (int i = 0; i < 6; i++) {
    printf("%d ", array[i]);
  }
  return 0;
  
}