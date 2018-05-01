#include<stdio.h>

int main(int argc, char const *argv[]){
	for (int i = 0; i < 0xff; i++){
		printf("%c ",i);
		if(i % 10 == 0){
			printf("%d\n",i);
		}
	}
	return 0;
}