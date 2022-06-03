#include <iostream>

using namespace std;

void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main() {

    string transp[4] = {"carro", "moto", "onibus", "barco"};


    int res;
    res = soma2(190, 52);

    cout <<"Valor de res: " << res << "\n";

    tr(transp);

    soma(2, 50);
    return 0;
}

void texto() {
    cout << "Alanzoka\n";
}

void soma(int n1, int n2) {
    cout << "soma dos valores: " << n1+n2 << "\n";
}

int soma2(int n1, int n2) {
    return n1+n2;
}

void tr(string tra[4]) {
    for(int i = 0; i<4; i++) {
        cout << tra[i] << "\n";
    }

}