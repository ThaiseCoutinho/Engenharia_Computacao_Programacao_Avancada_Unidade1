#include <stdio.h>

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
  return 0;
}
// O programa acima mostra todos os valores/elementos que estão contidos no vetor (4, 9, 13).



int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
  }
}

// O programa acima mostra os endereços na base hexadeciamal onde estão os valores/elementos (4, 9, 13) no vetor.
