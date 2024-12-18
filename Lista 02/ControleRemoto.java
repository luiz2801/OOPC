// Classe ControleRemoto
public class ControleRemoto {
    private Televisao televisao;

    // Construtor que associa o controle à televisão
    public ControleRemoto(Televisao televisao) {
        this.televisao = televisao;
    }

    // Método para aumentar o volume
    public void aumentarVolume() {
        int volumeAtual = televisao.getVolume();
        televisao.setVolume(volumeAtual + 1); // Incrementa o volume
        System.out.println("Volume aumentado para: " + televisao.getVolume());
    }

    // Método para diminuir o volume
    public void diminuirVolume() {
        int volumeAtual = televisao.getVolume();
        televisao.setVolume(volumeAtual - 1); // Decrementa o volume
        System.out.println("Volume diminuído para: " + televisao.getVolume());
    }

    // Método para aumentar o canal
    public void aumentarCanal() {
        int canalAtual = televisao.getCanal();
        televisao.setCanal(canalAtual + 1); // Incrementa o canal
        System.out.println("Canal aumentado para: " + televisao.getCanal());
    }

    // Método para diminuir o canal
    public void diminuirCanal() {
        int canalAtual = televisao.getCanal();
        televisao.setCanal(canalAtual - 1); // Decrementa o canal
        System.out.println("Canal diminuído para: " + televisao.getCanal());
    }

    // Método para trocar para um canal específico
    public void trocarCanal(int novoCanal) {
        televisao.setCanal(novoCanal); // Define o novo canal
        System.out.println("Canal trocado para: " + televisao.getCanal());
    }

    // Método para consultar o volume atual
    public void consultarVolume() {
        System.out.println("Volume atual: " + televisao.getVolume());
    }

    // Método para consultar o canal atual
    public void consultarCanal() {
        System.out.println("Canal atual: " + televisao.getCanal());
    }
}
