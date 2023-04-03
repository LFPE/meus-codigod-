#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));
    bool continuar = true;
    
    while (continuar) {
        int tamanho;
        cout << "vou te ajudar a criar uma senha, quantos caracteres a senha vai ter? ";
        cin >> tamanho;

        string senha = "";
        const string caracteres = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

        for (int i = 0; i < tamanho; i++) {
            int indice = rand() % caracteres.length();
            senha += caracteres[indice];
        }

        cout << "pronto, gerado aleatoriamente : " << senha << endl;

        cout << "quer outra senha? (s/n) ";
        char resposta;
        cin >> resposta;

        if (resposta == 'n' || resposta == 'N') {
            continuar = false;
        }
    }

    cout << "e ja que vc ja ta com sua nova senha eu vou pro discord lezar la, quiser me add, wojihk,*#1063.";

    return 0;
}
