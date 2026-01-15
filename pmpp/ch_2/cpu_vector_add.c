#include <stdio.h>

void vecAdd(float* A_h, float* B_h, float* C_h, int n){
  for(int i = 0; i < n; i++){
    C_h[i] = A_h[i] + B_h[i];
  }
}


