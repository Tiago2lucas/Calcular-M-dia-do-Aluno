#include <stdio.h>
#include <stdlib.h>
/*Chamamos de “localizar” um programa quando fazemos a adaptação deste às
 características de uma determinado idioma ou de uma região.*/
#include <locale.h>

// Sistema escolar para calcular a média de aluno// 


int main (){
		
		setlocale(LC_ALL,"Portuguese");
	float nota1,nota2,nota3,media;
	
	printf("nota 1=\n\n");
	scanf("%f",&nota1);
	
	printf("nota 2=\n\n");
	scanf("%f*%f",&nota2);
	
	printf("nota 3=\n");
	scanf("%f*%f",&nota3);
	
	media=(nota1+nota2+nota3)/3;
	
		printf("media=%.2f",media);
				
		if(media>=7)
		
			printf("\nAluno Aprovado\n");
			
			else 
			printf("\nAluno Reprovado");
			
			return 0;
	
	
}