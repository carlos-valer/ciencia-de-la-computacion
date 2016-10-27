#include <stdio.h>
#include <ctype.h>
/*PROBLEMA 4*/

int i=0;
/*char convert(char s[],int tam){*/
/*	char temp[1];*/
/*	if(i==strlen(s)/2)*/
/*		return;*/
/*	else*/
/*		temp[0]=s[i];*/
/*		s[i]=s[tam-1];*/
/*		s[tam-1]=temp[0];*/
/*		i++;*/
/*		convert(s,tam-1);*/
/*}*/

void convert(char *s,int tam){
	char p[100];
	while(*s!='\0')s++;
	s--;
	for(i=0;i<tam;i++,s--)
		p[i]=*s;
		s++;
		for(i=0;i<tam;i++,s++)
			*s=p[i];
}

main(){
	char a[]="hola";
	convert(a,4);
	printf("%s",a);
}
