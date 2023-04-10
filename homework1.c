#include <stdio.h>

//function to sum variables
int sum (const int * a, const int * b) {
  int result = (*a) + (*b);
  return result;
}

//function to multiply variables
int product (const int * a, const int * b) {
  int result = (*a) * (*b);
  return result;
}

//function to collect number of digits through division
int digits (int a) {
  int result = 0;
  while (a != 0) {
    a /= 10;
    ++result;
  }
  return result;
}

//function to get input from user, and reject if it is not positive
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
  //set up continue loop
  while (userCont == 'y') {
    int input1 = 0, input2 = 0;
    //collecting inputs from user
    collectInput (&input1);
    collectInput (&input2);

    //printing function results for user
    printf ("The sum of %d and %d is: %d \n", input1, input2, sum (&input1, &input2));
    int inputProduct = product (&input1, &input2);
    printf ("The product of %d and %d is: %d \n", input1, input2, inputProduct);
    printf ("%d has %d digits. \n", inputProduct, digits(inputProduct));

    //ask for and collect continue
    printf ("Please enter \'y\' to continue: ");
    scanf (" %c", &userCont);
  }
}
    
      
