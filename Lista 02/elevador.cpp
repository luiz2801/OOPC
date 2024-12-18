#include <iostream>
using namespace std;

class elevador{
    private:
        int capacidade, totalAndares, atual, pessoas;
    public:
        elevador(int totalAndares = 14, int capacidade = 6){
            pessoas = 0;
            atual = 0;
            this->totalAndares = totalAndares;
            this->capacidade = capacidade;
        }

        int mudarAndar(){
            int maisGente, mudar, destino;
            std::cout<<"Você deseja mudar de andar?\n"
            <<"1- Sim\n"
            <<"2- Não"<<endl;
            cin>>mudar;
            if (mudar < 0 || mudar > 14){
                std:cout<<"Por favor, selecione um andar válido"<<endl;
                return mudarAndar();
            };
            std::cout<<"Quantas pessoas vão entrar no elevador? "<<endl;
            cin>>maisGente;
            if (pessoas + maisGente > capacidade){
                std::cout<<"O elevador não consegue comportar esse número de pessoas a mais"<<endl;
                return 0;
            }
            pessoas += maisGente;
            if (mudar == 1){
                std::cout<<"Para qual andar você vai? "<<endl;
                cin>>destino;
                if (destino > 14){
                    std::cout<<"Por favor, escolha um andar menor que 14"<<endl;
                    return 0;
                };
                atual = destino;
                std::cout<<"Você chegou ao "<<destino<<" andar"<<endl;
                return 1;
            }
            cout<<"Por favor, caso não deseje mudar de andar deixe o elevador"<<endl;
            return 0;
        };

};