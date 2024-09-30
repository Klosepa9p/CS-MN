#include <stdio.h>

void inplace_swap(int *x, int *y) {
	*y = *x ^ *y;
	printf("Step 1\n");
	printf("x = %d, y = %d\n", *x,*y); 
	*x = *x ^ *y;
	printf("Step 2\n");
	printf("x = %d, y = %d\n", *x, *y);
	*y = *x ^ *y;
	printf("Step 3\n");
	printf("x = %d, y = %d\n", *x, *y);
	

}

void reverse_array(int a[], int cn){

	int first, last;
	for (first = 0, last = cn - 1;
	first <first / 2;
	first++, last--)
		inplace_swap(&a[first], &a[last]);
	
}


int main()
{
	int arr[4] = {1,2,3,4}; 
	int a = 5, b = 10;
    
//    	printf("Başlangıç değerleri:\n");
//    	printf("a = %d, b = %d\n", a, b);

	inplace_swap(&a,&b);

//	printf("Takas sonrası değerler:\n");
//	printf("a = %d, b= %d\n", a, b);	

//	inplace_swap(&a, &b);
//	printf("2.Takas sonrası değerler:\n");
//	printf("a = %d, b= %d\n", a, b);

	int i;
	printf("\nTakas öncesi dizi\n");
	for(i= 0; i < sizeof(arr)/sizeof(arr[0]); i++)
		printf("%d-",arr[i]);
	
	reverse_array(arr , sizeof(arr)/sizeof(arr[0]));
	printf("\nTakas sonrası dizi\n");
	for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) 
		printf("%d-",arr[i]);
}


