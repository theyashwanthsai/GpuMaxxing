#include <stdio.h>

void cpu_vecAdd(float* A_h, float* B_h, float* C_h, int n){
  for(int i = 0; i < n; i++){
    C_h[i] = A_h[i] + B_h[i];
  }
}

void gpu_vecAdd(float* A_h, float* B_h, float* C_h, int n){
  // Part 1: Initialize the device variables
  int size = n*sizeof(float);
  float* A_d;
  float* B_d;
  float* C_d;

  // Call the cudaMalloc api for each array
  cudaMalloc((void**)&A_d, size);
  cudaMalloc((void**)&B_d, size);
  cudaMalloc((void**)&C_d, size);

  // Copy the items in A_h and B_h to A_d, B_d
  cudaMemcpy(A_d, A_h, size, cudaMemcpyHostToDevice);
  cudaMemcpy(B_d, B_h, size, cudaMemcpyHostToDevice);


  // Part 2: Actual logic


  cudaMemcpy(C_h, C_d, size, cudaMemcpyDeviceToHost);
  cudaFree(A_d);
  cudaFree(B_d);
  cudaFree(C_d);

}



/* cudaError_t err = cudaMalloc((void**)&A_d, size); */
/**/
/* if(err!=cudaSuccess){ */
/*   //print the error */
/* } */



