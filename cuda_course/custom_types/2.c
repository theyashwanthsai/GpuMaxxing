#include <stdio.h>

typedef struct {
  float x;
  float y;
} Point;

int main(){
  Point p = {1.1, 2.5};
  printf("Size of Point: %zu", sizeof(Point));
}
