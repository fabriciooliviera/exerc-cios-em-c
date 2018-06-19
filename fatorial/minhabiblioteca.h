#include<stdio.h>
#include<stdlib.h>

void fatorial (int numero){
	int i;
	int cont=1;
		for(i = numero; i>= 1; i--){
		cont=i*cont;
	}
	printf("%d",cont);		
}
