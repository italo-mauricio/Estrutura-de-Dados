#include <stdio.h>
#include "pilha.h"


using namespace std;
 
    pilha::pilha()   // função construtra tem que ser o mesmo nome da classe
    {
        tamanho 0;
        estrutura = new TipoItem[max_itens];
    }

    pilha::~pilha()   // função destrutora
    {
        delete [] estrutura;
    }

    bool pilha::estacheio()    // verifica se a pilha está cheia
    {
        return (tamanho == max_itens);
    }

    bool pilha::estavazia()    // verifica se a pilha está vazia
    {
        return (tamanho == 0);
    }

    void pilha::inserir(TipoItem item)      // push
    {}

    TipoItem pilha::remover()     // pop
    {}
    
    void pilha::imprimir()        // imprimir a pilha
    {}

    int pilha::qualtamanho()      // lenght
    {}
    
