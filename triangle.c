#include <stdio.h>

 void draw_triangle(unsigned int size) {
  int a = size;
  int x,y,z;

  for(x=0; x<a ; x++) {
      for(y=0; y<(a-x-1); y++) {
        printf(".");
      }
      for(z=0;z<x+1;z++){
        printf("#");
      }
    printf("\n");
    }
}

int main(void) {
  int row;
  scanf("%u", &row);
  draw_triangle(row);
  return 0;
}