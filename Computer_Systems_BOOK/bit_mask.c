#include <stdio.h>
#include <stdint.h>



uint32_t get_least_significant_byte(uint32_t x) {
	return x & 0xFF;
}

uint32_t complete_byte_without_changing_least_significant_byte(uint32_t x, uint32_t y){
	return x | y;
}

uint32_t set_least_significant_byte(uint32_t x, uint32_t y)
{
	uint32_t a = (x ^ y) | 0xFF;
	return a;
}

int main()
{
	uint32_t x = 0x87654321;
	uint32_t y = 0x789ABC21;
	uint32_t result = get_least_significant_byte(x);

	printf("Original x: 0x%08X\n" , x);
	printf("Least significant byte: 0x%08X\n", result);

	uint32_t result2= complete_byte_without_changing_least_significant_byte(result,y);
	printf("Complteted left byte: 0x%08X\n", result2);

	uint32_t result3= set_least_significant_byte(result, x);
	printf("Changed least significant byte: 0x%08X\n", result3);
}



