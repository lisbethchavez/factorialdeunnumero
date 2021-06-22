#include <iostream>
// Se desea calcular el factorial de un numero entero
// El factorial de 5 es 5 x 4 x 3 x 2 x 1
// El factorial de 6 es 6 x 5 x 4 x 3 x 2 x 1
//El factorial de 4 es 1 x 2 x 3 x 4
using namespace std;

int main() {
    int numero, factorial = 1;

    cout<<"DIGITE UN NUMERO: "; cin>>numero;

    for(int i=1;i<=numero;i++){
        factorial = factorial * i;
    }
    cout<<"\nEL FACTORIAL DEL NUMERO ES: "<<factorial<<endl;
    return 0;
}
