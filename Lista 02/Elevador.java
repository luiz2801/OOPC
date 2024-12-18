public class Elevador {
    private int capacidade;
    private int totalAndares;
    private int atual;
    private int pessoas;

    // Construtor
    public Elevador(int totalAndares, int capacidade) {
        this.pessoas = 0;
        this.atual = 0;
        this.totalAndares = totalAndares;
        this.capacidade = capacidade;
    }

    // Métodos para mudar andar
    public boolean mudarAndar(int destino, int maisGente) {
        if (destino < 0 || destino > totalAndares) {
            System.out.println("Por favor, escolha um andar válido.");
            return false;
        }
        if (pessoas + maisGente > capacidade) {
            System.out.println("O elevador não consegue comportar esse número de pessoas a mais.");
            return false;
        }
        pessoas += maisGente;
        atual = destino;
        System.out.println("Você chegou ao andar " + destino);
        return true;
    }

    // Getters
    public int getCapacidade() {
        return capacidade;
    }

    public int getTotalAndares() {
        return totalAndares;
    }

    public int getAtual() {
        return atual;
    }

    public int getPessoas() {
        return pessoas;
    }

    // Setters
    public void setCapacidade(int capacidade) {
        if (capacidade > 0) {
            this.capacidade = capacidade;
        } else {
            System.out.println("Capacidade inválida!");
        }
    }

    public void setTotalAndares(int totalAndares) {
        if (totalAndares > 0) {
            this.totalAndares = totalAndares;
        } else {
            System.out.println("Total de andares inválido!");
        }
    }

    public void setAtual(int atual) {
        if (atual >= 0 && atual <= totalAndares) {
            this.atual = atual;
        } else {
            System.out.println("Andar inválido!");
        }
    }

    public void setPessoas(int pessoas) {
        if (pessoas >= 0 && pessoas <= capacidade) {
            this.pessoas = pessoas;
        } else {
            System.out.println("Número de pessoas inválido!");
        }
    }
}
