#include <stdio.h>
#include <stdlib.h>
#include "lista_din.h"


int main(){
    Lista l;
    
    l.inicio = NULL;
    // Inserir elementos
    printf("Inserindo elementos...\n");
    insere_ordenada(&l, 10);
    insere_ordenada(&l, 20);
    insere_ordenada(&l, 15);
    insere_ordenada(&l, 5);
    insere_ordenada(&l, 44);

    // Mostrar lista
    printf("Lista após inserções:\n");
    mostrar_lista(&l);

    // Remover elementos
    printf("Removendo o início da lista...\n");
    int removed_value = remove_inicio(&l);
    printf("Valor removido: %d\n", removed_value);

    printf("Lista após remoção do início:\n");
    mostrar_lista(&l);

    printf("Removendo o valor 15 da lista...\n");
    removed_value = remove_valor(&l, 15);
    printf("Valor removido: %d\n", removed_value);

    printf("Lista após remoção do valor 15:\n");
    mostrar_lista(&l);

    printf("Removendo o fim da lista...\n");
    removed_value = remove_fim(&l);
    printf("Valor removido: %d\n", removed_value);

    printf("Lista após remoção do fim:\n");
    mostrar_lista(&l);

    return 0;
}
