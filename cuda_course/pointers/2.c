#include <stdio.h>

int main(){
  int value = 42;
  int* p1 = &value;
  int** p2 = &p1;
  int*** p3 = &p2;

  printf("Value: %d\n", ***p3);
}
