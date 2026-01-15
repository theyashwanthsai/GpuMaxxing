#include <stdio.h>
#include <stdlib.h>

int main(){
  int* ptr = NULL;
  printf("1. Initial ptr value: %p\n", (void*)ptr);

  if (ptr == NULL){
    printf("2. ptr is NULL, cannot dereference\n");
  }

  ptr = malloc(sizeof(int));
  if (ptr == NULL){
      printf("3. Memory allocation failed\n");
      return 1;
  }

  printf("4. After allocation, ptr value: %p\n", (void*)ptr);

  *ptr = 42;
  printf("5. Value at ptr: %d\n", *ptr);

  free(ptr);
  ptr = NULL;

  printf("6. After free, ptr value: %p\n", (void*)ptr);

  if (ptr == NULL){
    printf("7. ptr is NULL, safely avoided use after free\n");
  }

  return 0;

}
