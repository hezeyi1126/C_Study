#include <stdio.h>
int main(){
	//printf("xxxx \n");
	int a = 1,b=300,c=400,d=500;
	printf("%d \n",a<<31);
	for(int i = 0; i < 10 ;i++){
		a = i ;
		printf("orignal is %d --- %d \n",a,a << 30);
	}
	return 0;
}

