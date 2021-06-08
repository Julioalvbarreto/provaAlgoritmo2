#include <stdio.h>

int main(){
	
	float n1,n2,g2,m;
	
	printf("Informe nota 1: ");
	scanf("%f",&n1);
	printf("Informe nota 2: ");
	scanf("%f",&n2);
	
	m=(n1+n2)/2;
	
	if(m>=7){
		printf("Aprovado em G1.");
	}else
	if(m>4&&m<7){
		printf("Informe nota de G2: ");
		scanf("%f",&g2);
		m=(m+g2)/2;
		if(m<5){
			printf("Reprovado.");
		}else{
			printf("Aprovado.");
		}
	}else if(m<=4){
		printf("Reprovado direto.");
	}

	return 0;
}
