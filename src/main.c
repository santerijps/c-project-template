#include <stdio.h>
#include "include/validator.h"

int main(void) {

  int x = 1;
  printf("Is %d an even number?\n", x);

  if (is_even(x)) {
    printf("Yes it is!\n");
  }

  else {
    printf("No it isn't...\n");
  }

  return 0;
}
