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

	int n;
	printf("Valor de n: ");
	scanf("%d", &n);

	float x[20];
	int i;
	for (i=0; i<n; i++) {
		x[i]=0;
	}

	float peguei;
//	peguei = media_aritmetica (n, x);
//	printf("Resultado da Média Aritmética = %.2f\n\n", peguei);

//	peguei = variancia (n, x);
//	printf("Resultado da Variância = %.2f\n\n", peguei);	

	peguei = desvio (n, x);
	printf("Resultado do Desvio Padrão = %.2f\n\n", peguei);	
	
	return 0;
}
