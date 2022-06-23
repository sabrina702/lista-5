#include <stdio.h>

int alt(float alt,int sexo){
	float peso;
	switch(sexo){
	case 1: 
		peso = 62.1 * alt - 44.7;
		break;
	
	case 2:
		peso = 72.7 * alt - 58;
		break;
	}
	return peso;
}
 int main(){
 	int sexo;
 	float altura,ideal;
 	printf("qual seu genero 1-para feminino e 2-para masculino: ");
 	scanf("%d",&sexo);
 	printf("informe sua altura: ");
 	scanf("%f",&altura);
 	ideal = alt(altura,sexo);
 	printf("peso ideal: %.2f",ideal);
 	return 0;
 }
