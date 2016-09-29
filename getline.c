#include <stdio.h>
int getline(char *s){
	int i=0;
	while(*s!='\0'){
		i++;
		s++;
	}
	return i;
}
main(){
	char a[100];
	gets(a);
	printf("%d",getline(a));
}
