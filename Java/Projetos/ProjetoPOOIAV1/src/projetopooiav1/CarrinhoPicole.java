package projetopooiav1;

import java.util.HashMap;


public class CarrinhoPicole {
    private int auxQntd, auxQntd2;
    static int quantidadeTotal, quantidadeTotalVendido;
    HashMap<String, Integer> sabor = new HashMap();
    HashMap<String, Integer> relatorioCarrinho = new HashMap();

    public void addSabor(String nome, int qntd) {
        if (sabor.containsKey(nome)) {
            this.auxQntd = sabor.get(nome);
            sabor.put(nome, this.auxQntd + qntd);
        } else {
            sabor.put(nome, qntd);
            relatorioCarrinho.put(nome, 0);
        }

    }

    public int decrementar(String nome, int qntd) {
            this.auxQntd = sabor.get(nome);
            this.auxQntd2 = relatorioCarrinho.get(nome);
            if (sabor.get(nome) >= qntd) {
                sabor.put(nome, this.auxQntd - qntd);
                relatorioCarrinho.put(nome, this.auxQntd2 + qntd);
                System.out.println("Venda feita com sucesso!\n");
                return 1;
            } else if ((sabor.size()) == 0) {
                System.out.println("Sabor escolhido não tem picolés!\n");
                return 0;
            } else {
                System.out.println("Quantidade informada é menor do que a quantidade cadastrada!\n");
                return -1;
            }
    }

    public void getSabor(int numero) {
        if ((sabor.size()) != 0) {
            System.out.println("==========================================================================\n");
            System.out.println("Carrinho de Codigo: " + numero);
            for (String nome : sabor.keySet()) {
                System.out.println("Sabor: " + nome + " | Quantidade: " + sabor.get(nome));
            }
            System.out.println("==========================================================================\n");
        } else {
            System.out.println("Nenhum picole adicionado a seu carrinho!\n");
        }
    }

    public void relatorio(int numero) {
        if ((relatorioCarrinho.size()) != 0) {
            System.out.println("==========================================================================\n");
            System.out.println("Carrinho de Codigo: " + numero);
            for (String nome : sabor.keySet()) {               
                System.out.println("Sabor: " + nome + " | Quantidade: " + sabor.get(nome) + " | Quantidade vendida: " + relatorioCarrinho.get(nome));
                quantidadeTotal += sabor.get(nome);
                quantidadeTotalVendido += relatorioCarrinho.get(nome);
                System.out.println("==========================================================================\n");              
            }
        } else {
            System.out.println("Nenhum picole adicionado a seu carrinho!\n");
        }
    }
   
    public boolean buscarSabor(String Sabor){
        if(sabor.containsKey(Sabor)){
            return true;
        } else {
            return false;
        }
    }
    
}
