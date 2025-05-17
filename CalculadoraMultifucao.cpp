#include <iostream>
#include <cmath>
#include <locale>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    do {
        // Menu principal
        system("cls");
        cout << " _____________________________________ \n";
        cout << "|                                     |\n";
        cout << "|      Calculadora Multifuncional     |\n";
        cout << "|_____________________________________|\n";
        cout << "| 1. Geometria                        |\n";
        cout << "| 2. Funções Matemáticas              |\n";
        cout << "| 3. Conversão                        |\n";
        cout << "| 4. Sair                             |\n";
        cout << "|_____________________________________|\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                int escolha;
                do {
                    system("cls");
                    cout << " _____________________________ \n";
                    cout << "|                             |\n";
                    cout << "|          Geometria          |\n";
                    cout << "|_____________________________|\n";
                    cout << "| 1. Cubo                     |\n";
                    cout << "| 2. Paralelepípedo           |\n";
                    cout << "| 3. Esfera                   |\n";
                    cout << "| 4. Cone                     |\n";
                    cout << "| 5. Voltar                   |\n";
                    cout << "|_____________________________|\n";
                    cout << "Escolha uma figura: ";
                    cin >> escolha;

                    switch (escolha) {
                        case 1: { // Cubo
                            double lado;
                            cout << "Digite o lado do cubo: ";
                            cin >> lado;

                            cout << "\nResultados para o Cubo:\n";
                            cout << "Área Superficial: " << fixed << setprecision(2) << 6 * lado * lado << " unidades quadradas\n";
                            cout << "Volume: " << fixed << setprecision(2) << lado * lado * lado << " unidades cúbicas\n";
                            break;
                        }
                        case 2: { // Paralelepípedo
                            double largura, altura, profundidade;
                            cout << "Digite a largura do paralelepípedo: ";
                            cin >> largura;
                            cout << "Digite a altura do paralelepípedo: ";
                            cin >> altura;
                            cout << "Digite a profundidade do paralelepípedo: ";
                            cin >> profundidade;

                            cout << "\nResultados para o Paralelepípedo:\n";
                            cout << "Área Superficial: " << fixed << setprecision(2) << 2 * (largura * altura + largura * profundidade + altura * profundidade) << " unidades quadradas\n";
                            cout << "Volume: " << fixed << setprecision(2) << largura * altura * profundidade << " unidades cúbicas\n";
                            break;
                        }
                        case 3: { // Esfera
                            double raio;
                            cout << "Digite o raio da esfera: ";
                            cin >> raio;

                            cout << "\nResultados para a Esfera:\n";
                            cout << "Área Superficial: " << fixed << setprecision(2) << 4 * 3.14159 * raio * raio << " unidades quadradas\n";
                            cout << "Volume: " << fixed << setprecision(2) << (4.0 / 3.0) * 3.14159 * pow(raio, 3) << " unidades cúbicas\n";
                            break;
                        }
                        case 4: { // Cone
                            double raio, altura;
                            cout << "Digite o raio da base do cone: ";
                            cin >> raio;
                            cout << "Digite a altura do cone: ";
                            cin >> altura;

                            cout << "\nResultados para o Cone:\n";
                            cout << "Área Superficial: " << fixed << setprecision(2) << 3.14159 * raio * (raio + sqrt(altura * altura + raio * raio)) << " unidades quadradas\n";
                            cout << "Volume: " << fixed << setprecision(2) << (1.0 / 3.0) * 3.14159 * raio * raio * altura << " unidades cúbicas\n";
                            break;
                        }
                        case 5: {
                            cout << "Voltando ao menu principal...\n";
                            break;
                        }
                        default:
                            cout << "Opção inválida.\n";
                    }

                    // Espera o usuário pressionar Enter para continuar, exceto quando escolher "Voltar"
                    if (escolha != 5) {
                        cout << "Pressione Enter para continuar...";
                        cin.ignore();
                        cin.get();
                    }
                } while (escolha != 5);
                break;
            }
            case 2: {
                int escolha;
                do {
                    system("cls");
                    cout << " _____________________________ \n";
                    cout << "|                             |\n";
                    cout << "|    Funções Matemáticas      |\n";
                    cout << "|_____________________________|\n";
                    cout << "| 1. Bhaskara                 |\n";
                    cout << "| 2. Logaritmo                |\n";
                    cout << "| 3. Juros Compostos          |\n";
                    cout << "| 4. Média Aritmética         |\n";
                    cout << "| 5. Fatorial                 |\n";
                    cout << "| 6. MDC e MMC                |\n";
                    cout << "| 7. Porcentagem              |\n";
                    cout << "| 8. Voltar                   |\n";
                    cout << "|_____________________________|\n";
                    cout << "Escolha uma operação: ";
                    cin >> escolha;

                    switch (escolha) {
                        case 1: { // Bhaskara
                            double a, b, c;
                            cout << "Digite os coeficientes a, b e c da equação ax^2 + bx + c = 0\n";
                            cout << "a: ";
                            cin >> a;
                            cout << "b: ";
                            cin >> b;
                            cout << "c: ";
                            cin >> c;

                            double delta = b * b - 4 * a * c;

                            // Concavidade
                            string concavidade = (a > 0) ? "Para cima" : "Para baixo";
                            cout << "Concavidade da parábola: " << concavidade << endl;

                            // Vértice
                            double xv = -b / (2 * a);
                            double yv = -delta / (4 * a);
                            cout << "Vértice: (" << fixed << setprecision(2) << xv << ", " << yv << ")\n";

                            // Soluções
                            if (delta < 0) {
                                cout << "Não há soluções reais para essa equação.\n";
                            } else {
                                double x1 = (-b + sqrt(delta)) / (2 * a);
                                double x2 = (-b - sqrt(delta)) / (2 * a);
                                cout << "Soluções: x1 = " << fixed << setprecision(2) << x1 << ", x2 = " << x2 << endl;
                            }

                            break;
                        }

                        case 2: { // Logaritmo
                            double base, numero;
                            cout << "Digite a base do logaritmo: ";
                            cin >> base;
                            cout << "Digite o número: ";
                            cin >> numero;

                            if (base <= 0 || base == 1 || numero <= 0) {
                                cout << "Base inválida ou número não permitido.\n";
                            } else {
                                double resultado = log(numero) / log(base);
                                cout << "Log_" << base << "(" << numero << ") = " << fixed << setprecision(2) << resultado << endl;
                            }
                            break;
                        }
                        case 3: { // Juros Compostos
                            double capital, taxa, tempo;
                            string unidadeTaxa, unidadeTempo;

                            cout << "Digite o capital inicial: ";
                            cin >> capital;

                            cout << "Digite a taxa de juros (em %): ";
                            cin >> taxa;
                            cout << "A taxa está em dias, meses ou anos? ";
                            cin >> unidadeTaxa;

                            cout << "Digite o tempo: ";
                            cin >> tempo;
                            cout << "O tempo está em dias, meses ou anos? ";
                            cin >> unidadeTempo;

                            // Conversão da taxa para base anual
                            if (unidadeTaxa == "dias") {
                                taxa = taxa * 365;
                            } else if (unidadeTaxa == "meses") {
                                taxa = taxa * 12;
                            }

                            taxa = taxa / 100; // Convertendo para decimal

                            // Conversão do tempo para anos
                            if (unidadeTempo == "dias") {
                                tempo = tempo / 365.0;
                            } else if (unidadeTempo == "meses") {
                                tempo = tempo / 12.0;
                            }

                            double montante = capital * pow(1 + taxa, tempo);
                            cout << "Montante: " << fixed << setprecision(2) << montante << endl;

                            break;
                        }
                        case 4: { // Média Aritmética
                            int n;
                            cout << "Digite o número de valores: ";
                            cin >> n;

                            double soma = 0;
                            for (int i = 0; i < n; i++) {
                                double valor;
                                cout << "Digite o valor " << (i + 1) << ": ";
                                cin >> valor;
                                soma += valor;
                            }
                            cout << "Média Aritmética: " << fixed << setprecision(2) << soma / n << endl;
                            break;
                        }
                        case 5: { // Fatorial
                            int num;
                            cout << "Digite o número para calcular o fatorial: ";
                            cin >> num;

                            long long fatorial = 1;
                            for (int i = 1; i <= num; i++) {
                                fatorial *= i;
                            }
                            cout << "Fatorial de " << num << " é " << fatorial << endl;
                            break;
                        }
                        case 6: {
                            int a, b;
                            cout << "Digite dois números inteiros: ";
                            cin >> a >> b;

                            // Cálculo do MDC
                            int mdc;
                            int num1 = a, num2 = b;
                            while (num2 != 0) {
                                int temp = num2;
                                num2 = num1 % num2;
                                num1 = temp;
                            }
                            mdc = num1;

                            // Cálculo do MMC
                            int mmc = (a * b) / mdc;

                            cout << "MDC: " << mdc << "\n";
                            cout << "MMC: " << mmc << "\n";
                            break;
                        }
                        case 7: { // Porcentagem
                            double valor, porcentagem;
                            cout << "Digite o valor: ";
                            cin >> valor;
                            cout << "Digite a porcentagem (%): ";
                            cin >> porcentagem;

                            double resultado = (valor * porcentagem) / 100.0;
                            cout << porcentagem << "% de " << valor << " é " << fixed << setprecision(2) << resultado << endl;

                            break;
                        }
                        case 8: {
                            cout << "Voltando ao menu principal...\n";
                            break;
                        }
                        default:
                            cout << "Opção inválida.\n";
                    }

                    // Espera o usuário pressionar Enter para continuar, exceto quando escolher "Voltar"
                    if (escolha != 8) {
                        cout << "Pressione Enter para continuar...";
                        cin.ignore();
                        cin.get();
                    }
                } while (escolha != 8);
                break;
            }
            case 3: {
                int escolha;
                do {
                    system("cls");
                    cout << " _____________________________________________ \n";
                    cout << "|                                             |\n";
                    cout << "|           Conversão de Unidades             |\n";
                    cout << "|_____________________________________________|\n";
                    cout << "| 1. Metros <-> Centímetros                   |\n";
                    cout << "| 2. Quilômetros <-> Metros                   |\n";
                    cout << "| 3. Gramas <-> Quilogramas                   |\n";
                    cout << "| 4. Celsius <-> Fahrenheit                   |\n";
                    cout << "| 5. Segundos <-> Minutos <-> Horas           |\n";
                    cout << "| 6. Metros² <-> Centímetros² <-> Hectares    |\n";
                    cout << "| 7. Litros <-> Mililitros <-> Metros³        |\n";
                    cout << "| 8. Voltar                                   |\n";
                    cout << "|_____________________________________________|\n";
                    cout << "Escolha uma conversão: ";
                    cin >> escolha;

                    switch (escolha) {
                        case 1: {
                            double valor;
                            int tipo;
                            cout << "1 - Metros para Centímetros\n2 - Centímetros para Metros\nEscolha: ";
                            cin >> tipo;
                            cout << "Digite o valor: ";
                            cin >> valor;
                            if (tipo == 1)
                                cout << valor << " metros = " << valor * 100 << " centímetros\n";
                            else if (tipo == 2)
                                cout << valor << " centímetros = " << valor / 100 << " metros\n";
                            else
                                cout << "Opção inválida.\n";
                            break;
                        }
                        case 2: {
                            double valor;
                            int tipo;
                            cout << "1 - Quilômetros para Metros\n2 - Metros para Quilômetros\nEscolha: ";
                            cin >> tipo;
                            cout << "Digite o valor: ";
                            cin >> valor;
                            if (tipo == 1)
                                cout << valor << " km = " << valor * 1000 << " metros\n";
                            else if (tipo == 2)
                                cout << valor << " metros = " << valor / 1000 << " km\n";
                            else
                                cout << "Opção inválida.\n";
                            break;
                        }
                        case 3: {
                            double valor;
                            int tipo;
                            cout << "1 - Gramas para Quilogramas\n2 - Quilogramas para Gramas\nEscolha: ";
                            cin >> tipo;
                            cout << "Digite o valor: ";
                            cin >> valor;
                            if (tipo == 1)
                                cout << valor << " g = " << valor / 1000 << " kg\n";
                            else if (tipo == 2)
                                cout << valor << " kg = " << valor * 1000 << " g\n";
                            else
                                cout << "Opção inválida.\n";
                            break;
                        }
                        case 4: {
                            double valor;
                            int tipo;
                            cout << "1 - Celsius para Fahrenheit\n2 - Fahrenheit para Celsius\nEscolha: ";
                            cin >> tipo;
                            cout << "Digite o valor: ";
                            cin >> valor;
                            if (tipo == 1)
                                cout << valor << " °C = " << (valor * 9/5) + 32 << " °F\n";
                            else if (tipo == 2)
                                cout << valor << " °F = " << (valor - 32) * 5/9 << " °C\n";
                            else
                                cout << "Opção inválida.\n";
                            break;
                        }
                        case 5: {
                            double valor;
                            int tipo;
                            cout << "1 - Segundos para Minutos\n2 - Minutos para Segundos\n3 - Minutos para Horas\n4 - Horas para Minutos\nEscolha: ";
                            cin >> tipo;
                            cout << "Digite o valor: ";
                            cin >> valor;
                            if (tipo == 1)
                                cout << valor << " segundos = " << valor / 60 << " minutos\n";
                            else if (tipo == 2)
                                cout << valor << " minutos = " << valor * 60 << " segundos\n";
                            else if (tipo == 3)
                                cout << valor << " minutos = " << valor / 60 << " horas\n";
                            else if (tipo == 4)
                                cout << valor << " horas = " << valor * 60 << " minutos\n";
                            else
                                cout << "Opção inválida.\n";
                            break;
                        }
                        case 6: {
                            double valor;
                            int tipo;
                            cout << "1 - Metros² para Centímetros²\n2 - Centímetros² para Metros²\n3 - Metros² para Hectares\n4 - Hectares para Metros²\nEscolha: ";
                            cin >> tipo;
                            cout << "Digite o valor: ";
                            cin >> valor;
                            if (tipo == 1)
                                cout << valor << " m² = " << valor * 10000 << " cm²\n";
                            else if (tipo == 2)
                                cout << valor << " cm² = " << valor / 10000 << " m²\n";
                            else if (tipo == 3)
                                cout << valor << " m² = " << valor / 10000 << " hectares\n";
                            else if (tipo == 4)
                                cout << valor << " hectares = " << valor * 10000 << " m²\n";
                            else
                                cout << "Opção inválida.\n";
                            break;
                        }
                        case 7: {
                            double valor;
                            int tipo;
                            cout << "1 - Litros para Mililitros\n2 - Mililitros para Litros\n3 - Litros para Metros cúbicos\n4 - Metros cúbicos para Litros\nEscolha: ";
                            cin >> tipo;
                            cout << "Digite o valor: ";
                            cin >> valor;
                            if (tipo == 1)
                                cout << valor << " litros = " << valor * 1000 << " mililitros\n";
                            else if (tipo == 2)
                                cout << valor << " mililitros = " << valor / 1000 << " litros\n";
                            else if (tipo == 3)
                                cout << valor << " litros = " << valor / 1000 << " metros cúbicos\n";
                            else if (tipo == 4)
                                cout << valor << " metros cúbicos = " << valor * 1000 << " litros\n";
                            else
                                cout << "Opção inválida.\n";
                            break;
                        }
                        case 8:
                            cout << "Voltando ao menu principal...\n";
                            break;
                        default:
                            cout << "Opção inválida.\n";
                    }
                    if (escolha != 8) {
                        cout << "Pressione Enter para continuar...";
                        cin.ignore();
                        cin.get();
                    }
                } while (escolha != 8);
                break;
            }
            case 4:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opção inválida.\n";
        }

        // Espera o usuário pressionar Enter antes de retornar ao menu principal
        if (opcao != 4) {
            cout << "Pressione Enter para voltar ao menu principal...";
            cin.ignore();
            cin.get();
        }

    } while (opcao != 4);

    return 0;
}
