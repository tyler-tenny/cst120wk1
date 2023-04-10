#include <stdio.h>

int sum (const int * a, const int * b) {
  int result = (*a) + (*b);
  return result;
}

int product (const int * a, const int * b) {
  int result = (*a) * (*b);
  return result;
}

int digits (int a) {
  int result = 0;
  while (a != 0) {
    a /= 10;
    ++result;
  }
  return result;
}

void collectInput (int * input) {
  printf ("Please enter a positive integer: ");
  scanf ("%d", input);
  
  while (*input < 0) {
    printf ("Entered number is not positive, please reenter a positive integer: ");
    scanf ("%d", input);
  }
}

int main() {
  char userCont = 'y';
  while (userCont == 'y') {
    int input1 = 0, input2 = 0;
    collectInput (&input1);
    collectInput (&input2);

    printf ("The sum of %d and %d is: %d \n", input1, input2, sum (&input1, &input2));
    int inputProduct = product (&input1, &input2);
    printf ("The product of %d and %d is: %d \n", input1, input2, inputProduct);
    printf ("%d has %d digits. \n", inputProduct, digits(inputProduct));

    printf ("Please enter \'y\' to continue: ");
    scanf (" %c", &userCont);
  }
}
    
      
