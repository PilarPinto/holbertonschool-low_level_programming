#include <stdio.h>
int main(void)
{
  char charT;
  int intT;
  long int lintT;
  long long int llintT;
  float floatT;
  
  printf("Size of a char: %ld byte(s)\n",sizeof(charT));
  printf("Size of an int: %ld byte(s)\n",sizeof(intT));
  printf("Size of a long int: %ld byte(s)\n",sizeof(lintT));
  printf("Size of a long long int: %ld byte(s)\n",sizeof(llintT));
  printf("Size of a float: %ld byte(s)\n",sizeof(floatT));
  return 0;
}
