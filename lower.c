#include <stdio.h>

/*problema 1*/

/*void lower(char a[]){a[0]+=32;}*/

void lower(char *a){*a+=32;}

main() {
	char s[]="H";
	lower(s);	
	printf(s);
}
