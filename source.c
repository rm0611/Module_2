#include <stdio.h>


int simple_multiply(void) {
  int a;
  int b;
  scanf("%d %d\n", &a, &b);
  int c = a * b;
  printf("%d", a);
  printf(" * ");
  printf("%d", b);
  printf(" = ");
  printf("%d\n", c);
  return 0;
}

void simple_math(void) {
  char ch;
  float i, j;
  scanf("%f %[+-*/] %f", &i, &ch, &j);

  switch(ch) {
  case '+':
    printf("%.1f" , i + j);
    break;
  case '-':
    printf("%.1f" , i - j);
    break;
  case '*':
    printf("%.1f" , i * j);
    break;
  case '/':
    printf("%.1f" , i / j);
    break;
  default:
    printf("ERR");
  }
}


int main(void) {
  simple_multiply();
  simple_math();
    return 0;
}