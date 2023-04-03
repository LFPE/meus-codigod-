#include <iostream>
#include <chrono>

using namespace std;

int main() {
    bool continuar = true;

    while (continuar) {
        cout << "aperte enter para começar meu patrão";
        cin.ignore();

        auto inicio = chrono::steady_clock::now();

        cout << " ihh começou papai aperte enter se quiser parar";
        cin.ignore();

        auto fim = chrono::steady_clock::now();

        auto duracao = fim - inicio;

        cout << "Tempo decorrido: " << chrono::duration_cast<chrono::seconds>(duracao).count() << " segundos" << endl;

        cout << "boy se tu quiser iniciar denovo aperte s ou n ";
        char resposta;
        cin >> resposta;

        if (resposta == 'n' || resposta == 'N') {
            continuar = false;
        }
    }

    cout << "e morreu." << endl;

    return 0;
}
