#include <stdio.h>

int ehprimo(int num){
	int div;
	for(div=2;div<num;div++){
		if(num%div==0)
			return 0;
	}
	return 1;
}

int main(){
	int num,quap=0,cont;
	printf("informe um numero: ");
	scanf("%d",&num);
	for(cont=1;cont<=num;cont++){
		if(ehprimo(cont)==1)
			quap++;
	}
	printf("quantidade de numeros primos entre 1 e %d: %d",num,quap);
	return 0;
}