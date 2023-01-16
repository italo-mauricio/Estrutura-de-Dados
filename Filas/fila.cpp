#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include <iostream>


using namespace std;

    fila::fila(){
        primeiro = 0;
        ultimo = 0;
        estrutura = new TipoItem[max_itens];
    }
    fila::~fila(){
        delete [] estrutura;
    }
    bool fila::estavazio(){
        return (primeiro == ultimo);
    }
    bool fila::estacheio(){
        return (ultimo-primeiro == max_itens);
    }
    void fila::inserir(TipoItem item){
        if (estacheio()){
            cout << "A fila está cheia!\n";
            cout << "Esse elemento não pôde ser inserido\n";
        }else{
            estrutura[ultimo % max_itens] = item;
            ultimo ++;
        } 
    }
    TipoItem fila::remover(){
        if (estavazio()){
            cout << "A fila está vazia!\n";
            cout << "Nenhum elemento foi removido!\n";
            return 0;

        }else{
            primeiro++;
            return estrutura[(primeiro - 1) % max_itens];
    
        }

    }
    void fila::imprimir(){
        cout << "Fila: [ ";
        for (int i = primeiro; i < ultimo; i++){
            cout << estrutura[i % max_itens] << " ";
        }
        cout << "]\n";
    }