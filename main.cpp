#include <iostream>

using namespace std;

int main()
{
    int posicao, maior, numero, cont = 2;
    cin >> numero;
    maior = numero;
    posicao = 1;
    while (cont <= 100){
        cin >> numero;
        if (numero > maior){
            maior = numero;
            posicao = cont;
        }
        cont++;
    }
    cout << maior <<endl<< posicao <<endl;
    return 0;
}
