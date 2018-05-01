#include <stdio.h>

int main(){
	printf("%x \n",0x503c + 0x8 );//5044
	printf("%x \n",0x503c - 0x40 );//4ffc
	printf("%x \n",0x503c + 64 );//507c
	printf("%x \n",0x50ea + 0x503c );//a126
	return 0;
}