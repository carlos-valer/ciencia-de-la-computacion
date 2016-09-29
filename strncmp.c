#include <stdio.h>
/*5.5*/

int strncmp(char *s, char *t,int n){
	int i;
	
	for(i=0;*s!='\0' || *t!='\0' || n>0;s++,t++,n--){
		if(*s!=*t){
			i=*s-*t;
			break;
		}
	}
	return i;
}

/*void strncpy(char *s, char *t,int n){*/
/*	int i;*/
/*	i=0;*/
/*	while((*s++=*t++)!='\0'){*/
/*		i++;*/
/*		if(i==n)*/
/*		   break;*/
/*	}*/
/*}*/
/*void strncat(char *s, char *t,int n){*/
/*	int i;*/
/*	i=0;*/
/*	while(*s!='\0')*/
/*		s++;*/
/*	while((*s++=*t++)){*/
/*		i++;*/
/*		if(i==n)*/
/*			break;*/
/*	}*/
/*}*/
main() {
	char a[]="hola";
	char b[]="jo";
	
	/*	strncpy(a,b,2);*/
	/*	strncat(a,b,1);*/
	printf("%d",strncmp(a,b,2));
}
