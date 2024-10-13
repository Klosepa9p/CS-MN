#include <stdio.h>
#include <stdint.h>


void bit_operations(uint8_t x, uint8_t y) {
	printf("\n0x%2X\n", x & y);
	printf("\n0x%2X\n", x | y);
	printf("\n0x%2X\n",(uint8_t)(~x | ~y));
	printf("\n0x%2X\n", x & !y);
}

void logical_operations(uint8_t a, uint8_t b) {
	printf("\na && b = %d\n",   a && b);
       	printf("\na || b = %d\n",   a ||b );
	printf("\n!a || !b = %d\n", !a || !b);
	printf("\na && ~b = %d\n",  a && ~b);
 }


int main(){
	
	uint8_t a = 0x55;
	uint8_t b = 0x46;

	bit_operations(a,b);
	logical_operations(a,b);
	
}

