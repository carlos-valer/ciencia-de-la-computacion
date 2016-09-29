#include <stdio.h>
void reverse(char *a){
	int i=0;
	char s[10],*b=a;
	while(*b!='\0')
		  s[i++]=*b++;
		  i--;
		  while(i>=0)
				*a++=s[i--];
}

main() {
	char a[]="hola";
	reverse(a);
	printf("%s",a);
}
