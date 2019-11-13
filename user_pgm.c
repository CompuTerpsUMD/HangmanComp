#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void get_in(char* state, char* guesses, int* x) {
  state = malloc(63);
  guesses = malloc(63);

  scanf("%s", state);
  scanf("%s", guesses);
  scanf("%d", x);
}

void print_char(char to_send) {
  printf("%c", tolower(to_send));

  exit(0);
}

int main(void) {
  char *state, *guesses, to_send;
  int num_guesses;

  get_in(state, guesses, &num_guesses);

  /* YOUR CODE HERE */

  print_char(to_send);
  return 0;
}
