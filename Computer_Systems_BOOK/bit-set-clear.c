#include <stdio.h>

//VAX Bilgisayarlarinin ozel talimatlari ile bitwise islemleri

int bis(int x, int m);
int bic (int x, int m);


int bool_or(int x, int y) {

	int result = bis(x,y);
	return result;
}

int bool_xor(int x, int y) {
	//int result = x ^ y;
	int result = bis(bic(x,y), bic(y,x)); // XOR meali (mantik)
	
	return result;
}


int main(){
}
