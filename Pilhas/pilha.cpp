#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <iostream>


using namespace std;
 
    pilha::pilha()   // função construtra tem que ser o mesmo nome da classe
    {
        tamanho = 0;
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
    {
        if (estacheio()){
            cout << "A pilha está cheia!\n";
            cout << "Não é possível inserir este elemento\n";
        } else{
            estrutura[tamanho] = item;
            tamanho++;
        }
    }

    TipoItem pilha::remover()     // pop
    {
        if (estavazia()){
            cout << "A pilha está vazia!\n";
            cout << "Não existem elementos para remover!\n";
        } else{
            tamanho --;
            return estrutura[tamanho];
            
        }
    }
    
    void pilha::imprimir()        // imprimir a pilha
    {
        cout << "Pilha: [ ";
        for (int i = 0; i < tamanho; i++){
            cout << estrutura[i] << " ";
        }
        cout << "]\n";
    }

    int pilha::qualtamanho()      // lenght
    {
        return tamanho;
    }
    
