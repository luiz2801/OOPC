#include <iostream>
using namespace std;

class elevador {
    private:
        int capacidade, totalAndares, atual, pessoas;
    public:
        // Construtor
        elevador(int totalAndares = 14, int capacidade = 6) {
            pessoas = 0;
            atual = 0;
            this->totalAndares = totalAndares;
            this->capacidade = capacidade;
        }

        // Método para mudar de andar
        int mudarAndar() {
            int maisGente, mudar, destino;
            std::cout << "Você deseja mudar de andar?\n"
                      << "1- Sim\n"
                      << "2- Não" << endl;
            cin >> mudar;

            if (mudar < 0 || mudar > 14) {
                std::cout << "Por favor, selecione um andar válido" << endl;
                return mudarAndar();
            };

            std::cout << "Quantas pessoas vão entrar no elevador? " << endl;
            cin >> maisGente;
            if (pessoas + maisGente > capacidade) {
                std::cout << "O elevador não consegue comportar esse número de pessoas a mais" << endl;
                return 0;
            }
            pessoas += maisGente;

            if (mudar == 1) {
                std::cout << "Para qual andar você vai? " << endl;
                cin >> destino;
                if (destino > 14) {
                    std::cout << "Por favor, escolha um andar menor que 14" << endl;
                    return 0;
                };
                atual = destino;
                std::cout << "Você chegou ao " << destino << " andar" << endl;
                return 1;
            }
            cout << "Por favor, caso não deseje mudar de andar deixe o elevador" << endl;
            return 0;
        }

        // Getters
        int getCapacidade() const { return capacidade; }
        int getTotalAndares() const { return totalAndares; }
        int getAtual() const { return atual; }
        int getPessoas() const { return pessoas; }

        // Setters
        void setCapacidade(int cap) {
            if (cap > 0) {
                capacidade = cap;
            } else {
                std::cout << "Capacidade inválida!" << endl;
            }
        }

        void setTotalAndares(int total) {
            if (total > 0) {
                totalAndares = total;
            } else {
                std::cout << "Total de andares inválido!" << endl;
            }
        }

        void setAtual(int andar) {
            if (andar >= 0 && andar <= totalAndares) {
                atual = andar;
            } else {
                std::cout << "Andar inválido!" << endl;
            }
        }

        void setPessoas(int qtd) {
            if (qtd >= 0 && qtd <= capacidade) {
                pessoas = qtd;
            } else {
                std::cout << "Número de pessoas inválido!" << endl;
            }
        }
};