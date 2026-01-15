#include <stdio.h>

int main(){
  int num = 10;
  float fnum = 3.14;
  void* vptr;

  vptr = &num;
  printf("Integer: %d\n", *(int*)vptr);

  vptr = &fnum;
  printf("Float: %f\n", *(float*)vptr);
}
