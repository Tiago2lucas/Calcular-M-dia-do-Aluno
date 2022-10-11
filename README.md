# Calcula a Média do Aluno
 Sistema escolar para coleta as nota dos alunos, e calculara média ao final da execução do programa, ele mostrara a média do Certo aluno



*Chamamos de “localizar” um programa quando fazemos a adaptação deste às
 características de uma determinado idioma ou de uma região.*
 <hr>
 incluímos a biblioteca locale para isso.
 
<hr>
:space_invader:include <stdio.h>
:space_invader:include <stdlib.h>
:space_invader:include <locale.h>

// Sistema escolar para calcular a média de aluno// 


int main (){
		
		setlocale(LC_ALL,"Portuguese");
	float nota1,nota2,nota3,media;
  
 Primeira Nota do Aluno
  
    printf("nota 1=\n\n");
    scanf("%f",&nota1);
    
   Segunda Nota do Aluno
	 
      printf("nota 2=\n\n");
      scanf("%f*%f",&nota2);
	
      Terceira Nota do Aluno
    
          printf("nota 3=\n");
          scanf("%f*%f",&nota3);
	
        Somando todas as notas, e dividindo ela pela média
  
            media=(nota1+nota2+nota3)/3;
	  
    Nessa função Programa vai mostra a média do aluno
              printf("media=%.2f",media);
              
			 abaixo código que determina se o aluno foi aprovado ou foi reprovado
       
		if(media>=7)
		
			printf("\nAluno Aprovado\n");
			
			else 
			printf("\nAluno Reprovado");
			
			return 0;
	
	
}
