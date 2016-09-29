#include <stdio.h>
int strindex(char *a,char *t){
	int i=0;
	while(*a!='\0'){
		if(*a++==*t)
		   break;
		i++;
	}
	return i;
}

main() {
	char a[]="hala";
	char b[]="l";
	printf("%d",strindex(a,b));
}
