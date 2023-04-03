#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2, resultado;
    char operacao;
    bool continuar = true;

    while (continuar) {
        cout << "Qual operacao voce deseja realizar?" << endl;
        cout << "+ para adicao" << endl;
        cout << "- para subtracao" << endl;
        cout << "* para multiplicacao" << endl;
        cout << "/ para divisao" << endl;
        cout << "p para potencia" << endl;
        cout << "z para raiz quadrada" << endl;
        cin >> operacao;

        switch (operacao) {
            case '+':
                cout << "quer dizer que tu auer soma ne, coloca um n ai : ";
                cin >> num1;
                cout << "digite outro meu bom : ";
                cin >> num2;
                resultado = num1 + num2;
                break;
            case '-':
                cout << "sera possivel mano digite ai boy um numero: ";
                cin >> num1;
                cout << "coloque o segundo numero: ";
                cin >> num2;
                resultado = num1 - num2;
                break;
            case '*':
                cout << "aopa digite ai o 1 numero: ";
                cin >> num1;
                cout << "faz favor digite o segundo ai: ";
                cin >> num2;
                resultado = num1 * num2;
                break;
            case '/':
                cout << "esse e dboa mas coloque ai o primeiro numero: ";
                cin >> num1;
                cout << "ponhe o segundo : ";
                cin >> num2;
                if (num2 != 0) {
                    resultado = num1 / num2;
                } else {
                    cout << "qual foi menor isso e foda: divisao por zero" << endl;
                    return 1;
                }
                break;
            case 'p':
                cout << "Digite a base: ";
                cin >> num1;
                cout << "Digite o expoente: ";
                cin >> num2;
                resultado = pow(num1, num2);
                break;
            case 'z':
                cout << "Digite o numero: ";
                cin >> num1;
                if (num1 >= 0) {
                    resultado = sqrt(num1);
                } else {
                    cout << "olha as ideia dos ome isso aqui e indice 2 pcr : raiz quadrada de numero negativo" << endl;
                    return 1;
                }
                break;
            default:
                cout << "ERRO: e muito e burro kkkkkkk" << endl;
                return 1;
        }

        cout << "O resultado da operacao e: " << resultado << endl;

        char resposta;
        cout << "esse e mais profiosional kkkk, tu quer ir dnv boy ? (s/n) ";
        cin >> resposta;
        if (resposta == 'n' || resposta == 'N') {
            continuar = false;
        }
    }

    cout << "mano ate a proxima mas vai aprender a fazer sem calculadora ne pae nos tem que ser inteligente tlgd nao ? " << endl;

    return 0;
}
