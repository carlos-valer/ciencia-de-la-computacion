#include <stdio.h>

/*5.4*/
int strend(char *s,char *t)
{
	char *a=t;
	while(*s!='\0')s++;
	while(*a!='\0')a++;
	
	while(*a==*s){
		a--;
		s--;
	}	
	a++;
	if(*a==*t)
	   return 1;
	else 
		return 0;
}
main(){
	char a[]="hsaasola";
	char b[]="sola";
	printf("%d",strend(a,b));
}
