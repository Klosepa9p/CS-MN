#include <stdio.h>
#include <string.h>


typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
       int i;
	for (i = 0; i < len; ++i)
	 	printf ("%.2x ",start[i]);
	printf("\n");
}

void show_int(int x) {
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(int *x) {
	show_bytes((byte_pointer) &x, sizeof(int *));
}

void test_show_bytes(int val) {
	int ival = val;
	float fval = (float) ival;
	int *pval = &ival;
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}


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

int main(){


int a = 0x12345678;

byte_pointer ap = (byte_pointer) &a;
show_bytes(ap, 1);
show_bytes(ap, 2);
show_bytes(ap, 3);

char * hex_str1 = "0x0027C8F8";
char * hex_str2 = "0x4A1F23E0";

printf("\n\nHex to Binary\n");

printf("\n%s -----> ", hex_str1);
show_binary(hex_str1);
printf("\n%s -----> ", hex_str2);
show_binary(hex_str2);

printf("-----------------------\n");

const char *m = "mnopqr";
show_bytes((byte_pointer) m, strlen(m));


printf("-----------------------------------\n");


}

