#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main() {
    srand(time(nullptr));
    vector<string> palavras = {"não tenha medo de não conseguir isso vai fazer vc mais forte,", "tenha a força de vontade de lutar contra seu eu todos os dias", "a persistencia e tudo e se você enxergar isso voê vai longe", "ñ desista dos seu sonhos pois so você pode realizar e nao deixe que a motivação seja o conbsutivel para isso tenha disciplina", "você e capaz de qualquer coisa acredite nisso eu acredito em você", " sem fé o ser humano ñ e nada e issso nao se tratando de religião sim de que vc tem que acreditar em vc que tem algo a mais destinado para vc entao tenha confiança nisso", " tenha o foco e nao desista", "so com a força de vontade de se levantar e ser melhor do que o ontem que vai te levar ao suscesso", "sem coragem o ser humano nao e nada por isso tenha animo", " voce e mais do que pensa"};
    bool continuar = true;

    while (continuar) {
        int indice = rand() % palavras.size();
        cout << "espero que fique que fique bem essa e a frase do dia : " << palavras[indice] << endl;

        cout << "se quiser ouvir outra frase aperte s ou n ";
        char resposta;
        cin >> resposta;

        if (resposta == 'n' || resposta == 'N') {
            continuar = false;
        }
    }

    cout << "que saia melho do que como entrou, ate a proxima." << endl;

    return 0;
}
