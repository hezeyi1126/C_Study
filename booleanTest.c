#include<stdio.h>

void inplace_swap(int *x,int *y){
	*y = *x ^ *y;//step1
	*x = *x ^ *y;//step2
	*y = *x ^ *y;//step3

}

void reverse_arr(int a[], int cnt){
	int fst = 0,lst =cnt - 1;
	for(;fst <= cnt;fst++,lst--){
		if(&a[fst] == &a[lst])break;
		inplace_swap(&a[fst], &a[lst]);
	}
}

void print_arr(int arr[],int cnt){
	int i=0;
	for(;i < cnt ; i ++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[]){
	// int arr[] = {1,2,3,4,5};
	// print_arr(arr,5);
	// printf("%x,%x\n", &arr[0],&arr[4]);
	// reverse_arr(arr,5);
	// print_arr(arr,5);
	// printf("%x, %x\n", &arr[0],&arr[4]);

	// int a = 111;
	// int b = 222;
	// inplace_swap(&a , &b);
	// printf("%d,%d\n", a , b);

	int x = 1;
	int y = 122;
	printf("%d\n", !x^y);


	return 0;
}