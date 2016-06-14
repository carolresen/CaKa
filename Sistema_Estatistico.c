#include <stdio.h>
#include <math.h>

float media_aritmetica (int n, float *x) {
	int i;	
	float media=0;

	for (i=0; i<n; i++) {
		printf("Digite o valor do elemento %d: \n", i+1);
		scanf("%f", &x[i]);
		media+=x[i];

	}
	return (media/n);
}

float variancia (int n, float *x) {
	int i;
	float par_var = 0;
	float par_media = media_aritmetica (n, x);

	for(i=0; i<n; i++) {
		par_var+=((x[i]-par_media)*(x[i]-par_media));
	}

	return (par_var/(n-1));
}

float desvio (int n, float *x) {
	float par_variancia = variancia (n, x);
	return sqrt(par_variancia);
}

int main () {

	char r='x';
	int w =0;
	int n = 0;
	float x[20];
	float peguei = 0.0;

	int i;
	for (i=0; i<n; i++) {
		x[i]=0;
	}
	
	do {
		
		printf("\n	SISTEMA ESTATÍSTICO\n\n");
		printf("MENU:\n\n");
		printf("1 - Calcular Média Aritmética\n");
		printf("2 - Calcular Variância\n");
		printf("3 - Calcular Desvio Padrão\n");
		printf("4 - Sair\n\n");
		printf("Digite o valor correspondente a funcionalidade desejada: \n\n");
		scanf("%s" , &r);
		w=r-48;
		
		switch (w) {

			case 1:
				printf("Valor de n: ");
				scanf("%d", &n);
				while (n<2 || n>20) {
					printf("\nValor de n inválido!\nTente Novamente!\n");
					printf("Valor de n: ");
					scanf("%d", &n);
				}
				peguei = media_aritmetica (n, x);
				printf("Resultado da Média Aritmética = %.2f\n\n", peguei);
				break;

			case 2:
				printf("Valor de n: ");
				scanf("%d", &n);
				while (n<2 || n>20) {
					printf("\nValor de n inválido!\nTente Novamente!\n");
					printf("Valor de n: ");
					scanf("%d", &n);
				}
				peguei = variancia (n, x);
				printf("Resultado da Variância = %.2f\n\n", peguei);	
				break;

			case 3:
				printf("Valor de n: ");
				scanf("%d", &n);
				while (n<2 || n>20) {
					printf("\nValor de n inválido!\nTente Novamente!\n");
					printf("Valor de n: ");
					scanf("%d", &n);
				}
				peguei = desvio (n, x);
				printf("Resultado do Desvio Padrão = %.2f\n\n", peguei);	
				break;
			case 4:
				break;
			
			default:
				printf("Opção inválida! Tente novamente!\n\n");
				break;

		}
	}while (w!=4);

	printf("\nSistema Estatísco Finalizado!\n\n");

	return 0;
}
