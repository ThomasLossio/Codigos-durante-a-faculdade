package jogocomvector;

import cartas.Carta;
import cartas.Baralho;
import java.util.Vector;

public class Jogocomvector {

    public static void main(String[] args) {
        Baralho monte = new Baralho();
        Carta c;
        Carta aux;
        int i = 0;
        Vector jog1 = new Vector();
        Vector jog2 = new Vector();
        monte.baralhar();
        monte.pegaCarta();

        while (true) {
            if (monte.numeroDeCartas() > 0) {
                c = monte.pegaCarta();
                System.out.println("Jogador 1: " + c);
                if (jog1.contains(c.getValor())) {
                    jog1.removeElement(c.getValor());
                } else {
                    jog1.addElement(c.getValor());
                }
//                if (jog1.isEmpty()) {
//                    break;
//                }
                c = monte.pegaCarta();
                if (c != null) {
                    System.out.println("Jogador 2: " + c);
                    if (jog2.contains(c.getValor())) {
                        jog2.removeElement(c.getValor());
                    } else {
                        jog1.addElement(c.getValor());
                    }
//                    if (jog2.isEmpty()) {
//                        break;
//                    }
                }
            } else {
                if (jog1.isEmpty() || jog2.isEmpty()) {
                    break;
                } else {
                    jog1.addElement(jog2.get(i));
                    System.out.println("Jogador 1: " + jog2.get(i));
                    jog2.remove(i);
                }
                if (jog1.isEmpty() || jog2.isEmpty()) {
                    break;
                } else {
                    jog2.addElement(jog2.get(i));
                    System.out.println("Jogador 2: " + jog1.get(i));
                    jog1.remove(i);
                }
            }
        }
        System.out.println("PLACAR " + jog1.size() + "X" + jog2.size());
        if (jog1.size() < jog2.size()) {
            System.out.println("Jogador um venceu de ");
        } else if (jog2.size() < jog1.size()) {
            System.out.println("Jogador dois venceu de ");
        } else {
            System.out.println("Jogo Empatado");
        }
    }
}