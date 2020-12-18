#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int authen(char *k);

int main() {
  char key[10]; //A string to be filled by user.
  int x; //Should be assigned a digit depending on authen() return.

  printf("========================================\n");
  printf("Welcome user.\n");

  while(x != 1) { //Loop until correct password is entered.
  printf("Please, enter your password: ");
  scanf("%s", &key);

    x = authen(key);

    if(x == 1)
      printf("Access Granted!\n");
    else
      printf("Access Denied!\n");
    }
    
  printf("========================================\n");

  return 0;
}

//A function that authenticates user input (key) from main.
//Returns 1 if password is correct.
//Returns 0 if password is incorrect.
int authen(char *k) {
  int i , c; //This is the authentication signal.
  char password[] = "tooMuch"; //This is the password.

  c = strcmp(password, k);

  if(c != 0)
    i = 0;
  else
    i = 1;

  return i;
}
