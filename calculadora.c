#include <stdio.h>
#include <stdlib.h>

float n1;
float n2;

float main()
{
	int escolha;
	
	float escn();
		
	n1 = 0;
	n2 = 0;
	
	printf("\n");
	printf("-------------------------------------------\n");
	printf("\n");
	
	printf("[1] Soma\n");
	printf("[2] Subtração\n");
	printf("[3] Multiplicação\n");
	printf("[4] Divisão\n\n");
	
	printf("Escolha uma operação: ");
	scanf("%i", &escolha);
	
	
	if (escolha == 1)
	{
		escn();
		float soma = n1 + n2;
		printf("Resultado: %f\n", soma);
		main();
	}
	
	else if (escolha == 2)
	{
		escn();
		float subt = n1 - n2;
		printf("Resultado: %f\n", subt);
		main();
	}
	
	else if (escolha == 3)
	{
		escn();
		float mult = n1 * n2;
		printf("Resultado: %f\n", mult);
		main();
	}
	
	else if (escolha == 4)
	{
		escn();
		float div = n1 / n2;
		printf("Resultado: %f\n", div);
		main();
	}
	
	else
	{
		printf("Insira uma operação válida!\n");
	}
	
}

float escn() 
{
	printf("\nEscolha o primeiro número: ");
	scanf("%f", &n1);
	printf("Escolha o segundo número ");
	scanf("%f", &n2);
	return n1;
	return n2;
}
