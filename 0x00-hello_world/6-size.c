#include <stdio.h>
int main()
{
  char charType;
  int intType;
  long int lintType;
  long long int llintType;
  float floatType;
  
  printf("Size of a char: %ld byte(s)\n",sizeof(charType));
  printf("Size of an int: %d byte(s)\n",sizeof(intType));
  printf("Size of a long int: %ld byte(s)\n",sizeof(lintType));
  printf("Size of a long long int: %ld byte(s)\n",sizeof(llintType));
  printf("Size of a float: %ld byte(s)\n",sizeof(floatType));
  return 0;
}
