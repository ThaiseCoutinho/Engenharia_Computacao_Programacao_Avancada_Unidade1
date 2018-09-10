#include <stdio.h>





int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d ",i); // Imprime o valor de i que varia de 0 a 4.
    printf("vet[%d] = %.1f ",i, vet[i]); // Imprime o valor de cada posição do vetor, mostrando sua referida posição (valor de i).
    printf("*(f + %d) = %.1f ",i, *(f+i)); // Imprime o ponteiro que aponta para o vetor, porém todos os valores que estão no vetor, pois o "ponteiro + i" remete as posições no vetor.
    printf("&vet[%d] = %X ",i, &vet[i]); // Imprime todos os endereços das posições do vetor, sendo "i" as referidas posições.
    printf("(f + %d) = %X ",i, f+i); //Imprime todos os endereços do "ponteiro + i" que apontam para o vetor.
  }
}



