#include <stdio.h>

#include <stdarg.h>

void printValues(char * format, ...) {
  va_list argList;
  va_start(argList, format);

  printf("The values are: ");
  while ( * format != '\0') {
    if ( * format == 'd') {
      int val = va_arg(argList, int);
      printf("%d ", val);
    }
    format++;
  }
  printf("\n");
  va_end(argList);
}
int main() {
  int x = 10;
  int y = 20;
  int z = 30;
  printValues("ddd", x, y, z);
  return 0;
}
