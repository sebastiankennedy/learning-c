#include<stdio.h>

int main(int argc, char const *argv[])
{
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65536;
	long long verybig = 12345678908642;

	printf("un = %u and not %d\n",un,un);
	printf("end = %hd and not %d\n",end,end);
	printf("big = %ld and not %hd\n",big,big);
	printf("verybig = %lld and not %ld\n",verybig,verybig);

	return 0;}
