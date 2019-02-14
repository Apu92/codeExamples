///
/// Author: MaAb
///

#include <stdio.h>
#include <string.h>

///
/// Entry point of program
///
int main(int argc, char** argv) {
  char password[] = "1234";
  char buffer[80];
  for (int i = 0; i < 3; i++) {
    printf ("Please enter the password:");
    fflush (stdout);
    scanf ("%79s", buffer);

    if (strcmp (password, buffer) == 0) {
      puts ("Logged in!");
      return 0;
    }
  }

  puts ("Invalid password!");
  return 1;
}

