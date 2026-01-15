#include <stdio.h>


int main(){
  int arr[] = {12, 24, 36, 48, 60};

  int* ptr = arr;

  printf("Position one: %d\n", *ptr);

  for(int i = 0; i < 5; i++){
    printf("Value: %d\t", *ptr);
    printf("Address: %p\n", ptr);
    ptr++;
  }
}
