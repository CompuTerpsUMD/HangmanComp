#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void get_in(char* state, char* guesses, int* x) {
  scanf("%s", state);
  scanf("%s", guesses);
  scanf("%d", x);

  if (*x == 0) {
    *x = atoi(guesses);
    memset(&guesses[0], 0, sizeof(guesses));
  }
}

void print_char(char to_send) {
  printf("%c", tolower(to_send));

  exit(0);
}

/* 
 * This function should contain all of your code. It gets the strings state and guesses
 * and the int num_guesses as parameters. state is a string representing the current
 * state of the secret word. Any characters in the string that have not been correctly
 * guessed yet are represented as '_'. Example: if the word to be guessed is "apple",
 * and you have previously guessed 'a' and 'l', the string will be "a__l_" (ending with
 * a null terminating byte). guesses is a character array of the previously guessed
 * characters ending in a null terminating byte. The return value should be the
 * character that you want to guess.
 */
char user_func(char* state, char* guesses, int num_guesses) {
  /* YOUR CODE HERE */
}

int main(void) {
  char state[63], guesses[63], to_send;
  int num_guesses;

  get_in(state, guesses, &num_guesses);

  print_char(user_func(state, guesses, num_guesses));
  return 0;
}
