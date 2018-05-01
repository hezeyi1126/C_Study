#include<stdio.h>

int main(int argc, char const *argv[])
{
	char a = 0xfff;
	int b = 0;
	printf("%c\n", a);
	printf("%d\n", a);
	printf("%d\n", sizeof(a));//bytes
	printf("%d\n", sizeof(b));//bytes
	printf("%x\n", &b);
	printf("%d\n", &b);
	printf("%d,%d,%d\n", 0x61ff28 == 6422312,1 == 1,1 == 2);

	//char *p_char = 0x61ff28;

	printf("%d\n", p_char);

	if(1 == 1){//1
		printf(" this is 1 == 1\n");
	}
	if(1 == 2 ){//0
		printf(" this is 1 == 2\n");
	}

	//printf("%d\n", &b);
	return 0;
}