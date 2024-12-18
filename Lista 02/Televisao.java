// Classe Televisao
public class Televisao {
    private int volume;
    private int canal;

    // Construtor
    public Televisao(int volumeInicial, int canalInicial) {
        this.volume = volumeInicial;
        this.canal = canalInicial;
    }

    // Getter para o volume
    public int getVolume() {
        return volume;
    }

    // Setter para o volume, com validação
    public void setVolume(int volume) {
        if (volume >= 0 && volume <= 100) { // Limita o volume entre 0 e 100
            this.volume = volume;
        } else {
            System.out.println("Volume fora do limite permitido!");
        }
    }

    // Getter para o canal
    public int getCanal() {
        return canal;
    }

    public void setCanal(int canal) {
        if (canal > 0) { 
            this.canal = canal;
        } else {
            System.out.println("Canal inválido!");
        }
    }
}
