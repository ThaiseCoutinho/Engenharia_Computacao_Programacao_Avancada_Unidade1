#include <stdio.h>
#include <stdlib.h>

void multiplicacaoMatriz(int **A, int **B, int **C, int nlA, int ncA, int ncB){
	int i, j, k, soma=0;
	for(i=0; i<nlA; i++){
		for (j=0;j<ncB; j++){
			C[i][j]=0;
		}
	}
	for(i=0; i<nlA; i++){
		for (j=0;j<ncB; j++){
			soma=0;
			for(k=0; k<ncA;k++){
				soma+=(A[i][k]*B[k][j]);
			}
			C[i][j]= soma;
		}
	}

}

int main(){
	int **A, **B, **C;
	int i, j, nlA, ncA, ncB;
	printf("Informe o número de linhas de A: \n");
	scanf("%d", &nlA);
	printf("Informe o número de colunas de A: \n");
	scanf("%d", &ncA);
	printf("Informe o número de colunas de B: \n");
	scanf("%d", &ncB);

	A=(int **)malloc(nlA*sizeof(int *));
	B=(int **)malloc(ncA*sizeof(int *));
	C=(int **)malloc(nlA*sizeof(int *));

	for (i = 0; i < nlA; i++)
	{
		A[i]=(int *)malloc(ncA*sizeof(int *));
	}
	for (i = 0; i < ncA; i++)
	{
		B[i]=(int *)malloc(ncB*sizeof(int *));
	}
	for (i = 0; i < ncA; i++)
	{
		C[i]=(int *)malloc(ncB*sizeof(int *));
	}
	printf("Matriz A:\n");
	for (i = 0; i < nlA; i++)
	{
		for (j = 0; j < ncA; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	printf("Matriz B:\n");
	for (i = 0; i < ncA; i++)
	{
		for (j = 0; j < ncB; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}
	multiplicacaoMatriz(A, B, C, nlA, ncA, ncB);

	printf("Matriz resultante AxB:\n");
	for (i = 0; i < nlA; i++)
	{
		for (j = 0; j < ncB; j++)
		{
			printf("%d", &C[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < nlA; i++)
	{
		free(A[i]);
	}
	free(A);
	for (i = 0; i < ncA; i++)
	{
		free(B[i]);
	}
	free(B);
	for (i = 0; i < nlA; i++)
	{
		free(C[i]);
	}
	free(C);

	return 0;

}