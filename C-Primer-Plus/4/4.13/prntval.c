/* prntval.c -- 发现 printf() 函数的返回值 */
#include<stdio.h>

int main(int argc, char const *argv[])
{
	int bph2o = 212;
	int rv;
	rv = printf("%d F is water's boiling point. \n",bph2o);
	printf("The printf() function printed %d characters.\n",rv);
	return 0;
}
