#include <stdio.h>

int fatorial (int num){
	int cont, fat = 1;
	for(cont=1; cont<=num; cont++)
		fat = fat * cont;
	return fat;	
}

int main(){
	int num,resultado;
	printf("Informe um numero: ");
	scanf("%d",&num);
	resultado = fatorial(num);
	printf("Fatorial de %d = %d",num,resultado);
}
