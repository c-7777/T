#include <stdio.h>

void print_GNU(int recursion_depth) {
  if (recursion_depth > 0) {
    print_GNU(recursion_depth - 1);
    printf("\'s Not Unix");
    return;
  }
  printf("GNU");
}

int main() {
  printf("Recursion depth?: ");
  int rd;
  scanf("%d", &rd);
  if (!rd) {
    return 0;
  }
  print_GNU(rd);
  printf("\n");
  return 0;
}
