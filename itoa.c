#include <stdio.h>
void itoa(int *n,char *s){
	int i=0;
	char a[10];
	
	while(*n!='\0'){
		a[i]=*n+48;
		n++;
		i++;
	}
	for(i=0;i<10;i++,s++)
		*s=a[i];
}
int main() {
	char s[10];
	int num[]={1,3,4,2};
	itoa(num,s);
	printf("%s",s);
}
