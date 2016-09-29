#include <stdio.h>
#include <ctype.h>
/*5.3*/

void strcat(char *s, char *t){
	while(*s!='\0')
		  s++;
	while((*s++=*t++)!='\0'){
		;
	}
}

main(){
	char a[100]="aaa";
	char b[]="bbb";
	
	strcat(a,b);
	printf("%s",a);
}
