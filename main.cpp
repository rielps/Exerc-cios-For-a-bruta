#include <iostream>

//---------------------questão 1-----------------------//
bool soma_pares(int lista[], int size, int value){ //declaração da função com os parametros, respectivamente ponteiro que aponta pra o primeiro indice da lista; quantidade de elementos da lista; valor que vai ser comparadao com a soma dos elementos da lista.
  if (size == 0){
    return false; // verificando se a lista está vazia 
  }
  else {
    int i, j; //contadores
    for (i = 0; i<size; i++){ //percorre toda a lista, esse laço vai ser executado n vezes
      for (j = i+1; j<size; j++){ //percorre toda alista comparando a soma do primeiro elemento com os demais, esse laço tambem será executado n vezes, ambos totalizando O(n2)
        if (lista[i]+lista[j] == value) //compara o valor passado como parametro, com os elementos somados, um por um.
          return true;
    }
  }
  }
  return false; 
}
