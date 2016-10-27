#include <stdio.h>
#include <stdbool.h>

/*PROBLEMA 3*/

double num(char n[]){
	int i,j,pto;
	double exp=0.0;	
	double num=0.0;
	
	for(i=0;n[i]!='e';i++){
		if(n[i]=='.')
		   pto=i;
		else if(n[i]>='0' && n[i]<='9')
				num=10.0*num+(n[i]-'0');
	}
	num/=pow(10,(i-1-pto));
	
	for(j=i+1;n[j]!='\0';j++){
		if(n[j]>='0' && n[j]<='9')
		   exp=10.0*exp+(n[j]-'0');
	}
	if(n[i+1]=='-')
	   exp=pow(10.0,exp*-1);
	else
		exp=pow(10.0,exp);
		
		return num*exp;
		/*	printf("%.9f",nro);*/
}

/*double num(char *a){*/
/*	bool neg=false;*/
/*	int i=0,p,exp=0;*/
/*	double n=0.0;*/

/*	while(*a!='e'){*/
/*		if(*a=='.')*/
/*			p=i;*/
/*		if(*a>='0' && *a<='9')*/
/*			n=10.0*n+(*a-'0');*/
/*		i++;*/
/*		a++;*/
/*	}*/
/*	n/=pow(10,i-p-1);*/
/*	while(*a!='\0'){*/
/*		if(*a=='-')*/
/*			neg=true;*/
/*		if(*a>='0' && *a<='9')*/
/*			exp=10*exp+(*a-'0');*/
/*		a++;*/
/*	}*/
/*	if(neg==true)*/
/*		exp*=(-1);*/
/*	return n*pow(10,exp);*/
/*}*/

main(){
	char s[]="323.45e-1";
	printf("%.10f",num(s));
}
