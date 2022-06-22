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
	int num;
	while(1){
		printf("informe um numero: ");
		scanf("%d",&num);
		if(ehprimo(num)==1)
			printf("%d e primo\n",num);
		else
		printf("%d nao e primo\n",num);
	}
	return 0;
}