#include <stdio.h>
#include <string.h>
#include <stdint.h>
void show_binary(char *hex_str) {
	
	int i;
	i = strlen(hex_str) - 1;
	while(hex_str[i] != 'x'){
		switch(hex_str[i]){
		case '0':
            		printf("0000");
            		break;
        	case '1':
            		printf("0001");
            		break;
        	case '2':
            		printf("0010");
            		break;
        	case '3':
            		printf("0011");
            		break;
        	case '4':
            		printf("0100");
            		break;
        	case '5':
            		printf("0101");
            		break;
        	case '6':
            		printf("0110");
            		break;
        	case '7':
            		printf("0111");
            		break;
        	case '8':
            		printf("1000");
            		break;
        	case '9':
            		printf("1001");
            		break;
        	case 'A':
        	case 'a':
            		printf("1010");
            		break;
        	case 'B':
        	case 'b':
            		printf("1011");
            		break;
        	case 'C':
        	case 'c':
            		printf("1100");
            		break;
        	case 'D':
        	case 'd':
            		printf("1101");
            		break;
        	case 'E':
        	case 'e':
			printf("1110");
            		break;
        	case 'F':
        	case 'f':
            		printf("1111");
            		break;
        	case '.':
            		printf(".");
            		break;
        	default:
            		 printf("\nInvalid hexadecimal digit"); 
        	}
		printf(" ");
		--i;
	}
}

void printBinary(int n) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

uint8_t left_shift(int x, int i) {
	return (uint8_t)(x << i);
}

uint8_t right_shift(int x, int i) {
	return (uint8_t)(x >> i);
}


void printHex(uint8_t x) { printf("%2X\n",x);} 



int main()
{
	uint8_t a = 0xD4;
	uint8_t a_l2 = left_shift(a,2);
	uint8_t a_r3 = right_shift(a,3);

	uint8_t b = 0x64;
	uint8_t b_l2 = left_shift(b,2);
	uint8_t b_r3 = left_shift(b,3);


	uint8_t c = 0x72;
	uint8_t c_l2= left_shift(c,2);
	uint8_t c_r3= right_shift(c,3);

	uint8_t d = 0x44;
	uint8_t d_l2 = left_shift(d,2);
	uint8_t d_r3 = right_shift(d,3);

	printBinary(a);
	printBinary(a_l2);
	printHex(a_l2);
	printBinary(a_r3);
	printHex(a_r3);

	printBinary(b);
	printBinary(b_l2);
	printHex(b_l2);
	printBinary(c_r3);
	printHex(c_r3);

	printBinary(c);
	printBinary(c_l2);
	printHex(c_l2);
	printBinary(c_r3);
	printHex(c_r3);

	printBinary(d);
	printBinary(d_l2);
	printHex(d_l2);
	printBinary(d_r3);
	printHex(d_r3);
		
}
