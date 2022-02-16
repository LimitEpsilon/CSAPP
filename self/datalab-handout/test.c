#include <stdio.h>
#include <stdlib.h>
typedef unsigned char *byte_pointer;
void read_byte(byte_pointer p, unsigned int s){
	while(--s != ~0){
		printf("%.2x", *(p + s));
	}
	printf("\n");
}

int isTmax(int x){
	int flip = ~x;
	int i = flip + flip;
	int j = !i & !!flip;
	return j;
}

int main(int argc, char *argv[]){
	int i = atoi(argv[1]);
	int minusi = ~i + 1;
  int sign = i >> 31;
	int j = ~i + ~i;
  int k = isTmax(2147483647);
	read_byte((byte_pointer) &k, sizeof(int));
	return 0;
}
