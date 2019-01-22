#include <stdio.h>
#include <ctype.h>

void ascii_chart(char min, char max) {

  char count;
    for(count=min; count<=max; count++) 
    {
      if (( count - min ) % 4 == 3 && isprint(count) == 0) {
      printf("%3d 0x%02x ?\n", count, count);
      } else if (( count - min ) % 4 == 3 ) {
      printf("%3d 0x%02x %c\n", count, count, count);
      } else if (isprint(count) != 0) {
      printf("%3d 0x%02x %c\t", count, count, count);
      } else {
      printf("%3d 0x%02x ?\t", count, count);
      }
    }
    
}

int main(void) {
  int min, max;
  scanf("%d %d", &min, &max);
  ascii_chart(min, max);
  return 0;
}