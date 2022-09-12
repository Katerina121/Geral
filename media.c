#include <stdio.h>

main()
{
	int n; 
	
	printf("Quantos números?: ");
	scanf("%d", &n);
	printf("Escolha os números: \n");
	float numeros[n-1];
	float soma = 0;
	float media;
	int i;
	
	for (i = 0; i < n; ++i)
	{
		scanf("%f", &numeros[i]);
	}
	
	for(i = 0; i < n; ++i)
	{
		soma = soma + numeros[i];
	}
	
	media = soma/n;
	printf("A média é: %.2f\n", media);
}	 
		
