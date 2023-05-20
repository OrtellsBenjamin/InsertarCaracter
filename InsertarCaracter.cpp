#include<bits/stdc++.h>
using namespace std;

string InsertarCaracter(string frase , char caracter);

int main() {
    string frase;
    char caracter;
    cout << "Ingrese una frase: ";
    getline(cin, frase);
    cout << "Ingrese un caracter: ";
    cin >> caracter;
    string resultado = InsertarCaracter(frase, caracter);
    cout << "El resultado es: " << resultado << endl;
    return 0;
}

string InsertarCaracter(string frase, char caracter) {
    string nuevaFrase;
    for (int i = 0; i < frase.size(); i++) {
        nuevaFrase += frase[i];
         nuevaFrase += caracter;
    }
    return nuevaFrase;
}

