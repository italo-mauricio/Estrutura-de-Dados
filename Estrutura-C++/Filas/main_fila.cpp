#include <iostream>
#include "fila.h"


using namespace std;


int main(){
    fila fila1;
    int op;
    TipoItem item;
    cout << "Programa gerador de filas\n";
    do{
        cout << "Digite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir um elemento: \n";
        cout << "Digite 2 para remover um elemento: \n";
        cout << "Digite 3 para imprimir a fila: \n";
        cin >> op;
        if (op == 1){
            cout << "Digite o elemento a ser inserido na fila: ";
            cin >> item;
            fila1.inserir(item);
        } else if (op == 2){
            item = fila1.remover();
            cout << "O elemento removido: " << item << endl;

        } else if (op == 3){
            fila1.imprimir();
        } else{
            cout << "Opção invalida!\n";
        }
    } while(op != 0);



    return 0;
}