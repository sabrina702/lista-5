#include <stdio.h>

int epar(int num){
	if(num%2==0)
		return 1;
	else
		return 0;
}
int main(){
	int n,cont,soma=0;
	printf("quantidade de valores: ");
	scanf("%d",&n);
	for(cont=1;cont<=n;cont++){
		printf("valor %d:",cont);
		scanf("%d",&n);
		if(epar(n)==1)
			soma=soma+n;
	}
	printf("soma dos pares: %d\n",soma);
}
