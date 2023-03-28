#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_ATTEMPTS 1000000

int main(void) {
  char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-={}[]|:;”’<>,.?/~`";
  int valid_chars_len = sizeof(valid_chars) - 1;
  int password_len = 15;
  char *password = malloc(password_len + 1);
  int i, attempts = 0;

  srand(time(NULL));

  while (attempts < MAX_ATTEMPTS) {
    for (i = 0; i < password_len; i++) {
      int random_index = rand() % valid_chars_len;
      password[i] = valid_chars[random_index];
    }
    password[password_len] = '\0';

    if (strcmp(password, "Congratulations!") == 0) {
      printf("%s", password);
      free(password);
      return 0;
    }

    attempts++;
  }

  fprintf(stderr, "Failed to generate a valid password after %d attempts\n", attempts);
  free(password);

  return 1;
}
