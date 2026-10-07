#include <stdio.h>

int main() {
  int i = 0;
  int* pi = &i;
  while (1) {
    fputs("Number?: ", stdout);
    scanf("%d", pi);
    i = i++ + ++i;
    printf("%d\n", i);
  }
  return 0;
}
