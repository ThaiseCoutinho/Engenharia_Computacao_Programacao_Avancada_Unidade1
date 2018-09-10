

p = mat + 1; // É válida, pois p é um pontteiro que nesse caso aponta para a posição mat + 1 do vetor, ou seja a segunda posição.
p = mat++; // Não é válida, pois não posso espécificar posições no vetor utilizando o operador de incremento.
p = ++mat; // Não é válida, pois não posso incrementar dessa forma.
x = (*mat)++; // Não é válida, pois x não é um ponteiro.

