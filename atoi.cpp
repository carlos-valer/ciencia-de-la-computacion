#include <stdio.h>
#include <stdbool.h>
int atoi(char *s){
	bool neg=false;
	int num=0;
	
	while(*s!='\0'){
		if(isspace(*s))
		   ;
		if(*s=='-')
		   neg=true;
		else if(*s>='0' && *s<='9')
				num=10*num+(*s-'0');
				s++;
	}
	if(neg)
	   num*=-1;
	return num;
}

main(){
	char a[]="-123";
	printf("%d",atoi(a));
}
