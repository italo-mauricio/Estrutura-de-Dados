#include <iostream>
#include "pilha.h"

using namespace std;


int main(){

    pilha pilha1;
    TipoItem item;
    int op;
    cout << "Programa gerador de pilhas\n";

    do{
        cout << "Digite 0 para parar o programa\n";
        cout << "Digite 1 para inserir um elemento\n";
        cout << "Digite 2 para remover um elemento\n";
        cout << "Digite 3 para imprimir a pilha\n";
        cout << "Digite 4 para verificar o tamanho da pilha\n";
        cin >> op;
        if (op == 1){
            cout << "Digite o elemento a ser inserido: ";
            cin >> item;
            pilha1.inserir(item);
        }else if (op == 2){
            item = pilha1.remover();
            cout << "Elemento removido: " << item << endl;
        }else if (op == 3){
            pilha1.imprimir(); 
        }else if (op == 4){
            pilha1.qualtamanho();
        }
    }while (op != 0);
 
 

    return 0;
}