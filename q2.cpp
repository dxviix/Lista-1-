#include <conio.h>
#include <stdio.h>

int main()
{

	int i= 0;
	printf("Digite um numero de 1 a 10: \n");
	scanf("%d", i);
	
	while(i!=0)
	{
		if(i<=10 && i>=1)
			printf("Sua escolha foi %d\n", i);
		else
			printf("Invalido.\n");		
			scanf("%d", &i);
	}
	
	printf("Até a proxima!\n");
	
	int n=0;
	printf("Digite um numero para verificar se ele e par ou impar: \n");
	scanf("%d", &n);
	

	getch();
}

