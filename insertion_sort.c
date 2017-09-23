#include <stdio.h>
  void insertion(int* lst, int size){
    for (int i = 1; i < size; i++){
      int key = lst[i];
      int j = i - 1;
      while (j >= 0 && lst[j] > key){
        lst[j+1] = lst[j];
        j -=1;
      lst[j+1] = key;
      }
    }
  }
 
  int main(){
    int a[3]  = {3,2,1};
    int size = 3;
    insertion(a,size);
    for (int i = 0; i < size; i++){
      printf("%d", a[i]);
    }
  }
