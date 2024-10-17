#include <stdio.h>
#include <stdint.h>
unsigned short conversiont2_u4(short number)
{
	unsigned short us = (unsigned short) number;
	return number;

}

int main(){
short int v = -12345;
unsigned short uv = (unsigned short) v;

long a = -1234;
unsigned long b = (unsigned long)a;

printf("a = %d, b = %d\n", a, b);


printf("v = %d, uv = %u\n", v, uv);


printf("%d\n",conversiont2_u4(-1));
printf("%d\n",conversiont2_u4(-5));
printf("%d\n",conversiont2_u4(-6));
printf("%d\n",conversiont2_u4(-4));
printf("%d\n",conversiont2_u4(1));
printf("%d\n",conversiont2_u4(8));



//////////////////////////////////
int x = -1;
unsigned u = 2147483648; /* 2 to the 31st */

printf("x = %u = %d\n", x, x);
printf("u = %u = %d\n", u, u);

}
