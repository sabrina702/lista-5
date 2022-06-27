#include <stdio.h>

int fibo(quant){
	int atual=1,ant=1,cont,res;
	printf("%d\n",ant);
	res = atual;
	for(cont=1;res<quant;cont++){
		printf("%d\n",res);
		res = atual + ant;
		ant = atual;
		atual = res;
	}	
}

int main(){
	int quant,sequencia;
	printf("Informe ate que termo quer ver: ");
	scanf("%d",&quant);
	sequencia = fibo(quant);
	printf("%d\n",sequencia);
	return 0;
}
