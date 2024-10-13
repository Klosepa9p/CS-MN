#include <stdio.h>

int equivalent(int x, int y) {return !(x ^ y);}




int main()
{
	printf("\n x= 0x44, y = 0x44 %d\n",equivalent(0x44,0x44));
	printf("\n x= 0x69, y = 0x00 %d\n",equivalent(0x69,0x00));
}
