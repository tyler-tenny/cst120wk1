#include <stdio.h>

int main() {
  //set up continue loop
  char continu = 'y';
  while (continu == 'y' || continu == 'Y') {
    //print menu and collect choice
    int choice = 0;
    printf("Welcome!\nPlease choose a conversion option:\n (0): F to C \n (1): C to F\n");
    scanf("%d", &choice);
    //make sure choice is valid
    while (choice > 1 || choice < 0) {
      printf("Please enter either 1 or 0 to choose an option.\n");
      scanf("%d", &choice);
    }

    //farenheit to celsius. C = 5/9 (F - 32)
    if (choice == 0) {
      int F;
      printf("Please enter a temperature in farenheit: ");
      scanf("%d", &F);
      int C = (5 * (F - 32)) / 9;
      printf("%d degrees F is equal to %d degrees C. \n", F, C);
    }

    //celsius to farenheit. F = ((C * 9) / 5) + 32
    else if (choice == 1) {
      int C;
      printf("Please enter a temperature in celsius: ");
      scanf("%d", &C);
      int F = ((C *9) / 5) + 32;
      printf("%d degrees C is equal to %d degrees F. \n", C, F);
    }

    //ask for continue
    printf("Type y to continue program again: ");
    scanf(" %c", &continu);
  }
}
