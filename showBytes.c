#include<stdio.h>
#include<string.h>

typedef unsigned char *char_byte_poionter;
typedef unsigned short *short_byte_poionter;



void testPrint(int x){
	printf("%d\n", x);
}

void showBytes(char_byte_poionter start,size_t len){
	size_t i;
	for(i = 0; i < len ;i++){
		printf("%.2x ", start[i]);
	}
	printf("\n");

}

void showInt(int x){
	showBytes((char_byte_poionter) &x, sizeof(int));
}

void showShort(short x){
	showBytes((char_byte_poionter) &x, sizeof(short));
}

void showLong(long x){
	showBytes((char_byte_poionter) &x, sizeof(long));
}
void showFloat(float x){
	showBytes((char_byte_poionter) &x, sizeof(float));
}
void showPointer(void *x){
	showBytes((char_byte_poionter) &x ,sizeof(void *));
}

void testShowBytes(int x){
	int val = x;
	float fval = (float)x;
	int *pval = &x;
	showInt(val);
	showFloat(fval);
	showPointer(pval);
}



int main(int argc, char const *argv[])
{
	// testPrint(111);
	// showInt(-1333423);
	//showLong((long)22);
	//showFloat(10.5);
   //showPointer();
	//testShowBytes(12345);
	// int a = 432234243;
	// char *pint = (char_byte_poionter)&a;
	// printf("%.2x\n", pint[1]);
	// printf("%d\n", sizeof(a));
	// printf("%d\n", a);

	const char *str = "abcdef";
	showBytes((char_byte_poionter) str,strlen(str));//61 62 63 64 65 66  hex
	printf("%c%c%c%c%c%c\n",0x61,0x62,0x63,0x64,0x65,0x66 );
	return 0;
}

