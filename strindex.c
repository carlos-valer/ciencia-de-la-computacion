#include <stdio.h>
#include <ctype.h>

/*PROBLEMA 2*/
/*int strindex(char a[],char l[]){*/
/*	int i;*/
/*	for(i=strlen(a)-1;i>=0;i--){*/
/*		if(l[0]==a[i])*/
/*		   break;*/
/*	}*/
/*	return i;*/
/*}*/
int strindex(char *a,char *b){
	int i=0,c=0;
	
	while(*a++!='\0'){
		i++;
		if(*a==*b)
		   c=i;
	}
	return c;
}

main(){
	char x[]="halha";
	char y[]="a";
	printf("%d",strindex(x,y));
}
