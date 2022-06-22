 #include <stdio.h>
 
 int pot(int base,int exp){
 	int cont,resultado=1;
 	for(cont=1;cont<=exp;cont++){
 		resultado *= base;
	 }
	 return resultado;
 }
 int main(){
 	int base,exp,potencia;
 	printf("informe a base: ");
 	scanf("%d",&base);
 	printf("informe o expoente: ");
 	scanf("%d",&exp);
 	potencia = pot(base,exp);
 	printf("resultado: %d",potencia);
 	return 0;
 }