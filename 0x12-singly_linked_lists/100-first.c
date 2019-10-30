#include<stdio.h>
/**
 * myStartupFun - Is a funtion to print
 * before the main print fucntion
 */
void myStartupFun(void) __attribute__ ((constructor));
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
