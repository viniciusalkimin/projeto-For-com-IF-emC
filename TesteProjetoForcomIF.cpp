#include <stdio.h>
main(){
	float nota1,nota2,nota3,med;
	int cont,qtdaluno;
	
	printf("\nDigite quantos alunos serao analisados: \n");
	scanf("%d",&qtdaluno);
		
	for(cont=1;cont<=qtdaluno;cont++)
	{
		
	printf("\nDigite a nota1 do aluno: \n");
	scanf("%f",&nota1);	
	printf("\nDigite a nota2 do aluno: \n");
	scanf("%f",&nota2);
	printf("\nDigite a nota3 do aluno: \n");
	scanf("%f",&nota3);
	med=(nota1+nota2+nota3)/3;
	if(med>=7)
	{printf("Aluno aprovado! com media:%.2f \n",med);
	}
	else{printf("Aluno reprovado! com media:%.2f \n",med);
		
	}
	}
	
	
}
