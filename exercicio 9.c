#include <stdio.h>

int media(float N1,float N2,float N3,int fre){
	float media;
	media = N1+N2+N3/3;
	if(media>=6 && fre>=75){
		printf("Aprovado\n");
		return 1;
	}
	if(media<6 && media>=4 && fre>=75){
		printf("Prova Final\n");
		return 2;
	}
	if(media<4 && fre<75){
		printf("Reprovado\n");
		return 3;
	}
	
}

int main(){
	float N1,N2,N3,res;
	int fre;
	printf("Informe tres notas: ");
	scanf("%f%f%f",&N1,&N2,&N3);
	printf("Informe a sua frequencia: ");
	scanf("%d",&fre);
	res = media(N1,N2,N3,fre);
	printf("%d",res);
}