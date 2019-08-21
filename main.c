#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define CHARMAX 50

int main() 
{
  // We need a place to put our selection id
  char select[1];

  // select as an int
  int demo;

  // function prototype
  void Pythag();

  //Ask user what they want to do
  printf("Choose your demo. 1 for Pythagorean Theorem, 2 for multiples of previous triples");
  demo = atoi(fgets(select, CHARMAX, stdin));
  if (demo == 1)
  {
    Pythag();
  }
  return 0;
}

void Pythag()
{
  double a, b, c;
  int result;
  char aValue[CHARMAX];
  char bValue[CHARMAX];
  char cValue[CHARMAX];
  char buffer[50];

  printf("Pythagorean Theorem:\n\n");

  printf("Enter a value for a.\n\n");
  a = atof(fgets(aValue, CHARMAX, stdin));

  printf("Enter a value for b.\n\n");
  b = atof(fgets(bValue, CHARMAX, stdin));

  c = sqrt(pow(a, 2) + pow(b, 2));
  printf("The value of c is: %f", c);
}
