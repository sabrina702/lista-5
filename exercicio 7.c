#include <stdio.h>

int soma(int N){
	int soma=0,cont,valor;
	for(cont=1;cont<=N;cont++){
		printf("informe o valor: ");
		scanf("%d",&valor);
		soma+=valor;
	}
	return soma;
}

int main(){
	int N,res;
	printf("Informe a quantidade de valores a ser lido: ");
	scanf("%d",&N);
	res = soma(N);
	printf("total da soma dos valores: %d",res);
	return 0;
}
