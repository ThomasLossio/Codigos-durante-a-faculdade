/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gui;

import codigos.Aluno;
import codigos.Comissionado;
import codigos.Empregado;
import codigos.Fornecedor;
import codigos.Gerente;
import controle.Controle;
import java.text.DecimalFormat;
import java.util.ArrayList;
import javax.swing.table.DefaultTableModel;

/**
 *
 * @author ThomasJefferson
 */
public class Relatorios extends javax.swing.JFrame {
    private MenuPrincipal telaAnterior;    
    private double Total=0.0;
    private DecimalFormat df = new DecimalFormat("0.00");
    /**
     * Creates new form Relatorios
     */
    private Relatorios() {
        initComponents();
    }

    public Relatorios(MenuPrincipal telaAnterior) {
        this();
        this.telaAnterior = telaAnterior;
    }
    
    private void RelatorioPagar(String ordem){ 
        ArrayList<Empregado> ListaEmpregados = new ArrayList<>();
        ArrayList<Gerente> ListaGerentes = new ArrayList<>();
        ArrayList<Comissionado> ListaComissionados = new ArrayList<>();
        ArrayList<Fornecedor> ListaFornecedores = new ArrayList<>();
        this.Total = 0.0;
        
        ListaEmpregados = Controle.listaEmpregado(ordem);
        ListaGerentes = Controle.listaGerente(ordem);
        ListaComissionados = Controle.listaComissionado(ordem);
        ListaFornecedores = Controle.listaFornecedor(ordem);
        
        DefaultTableModel modelo = new DefaultTableModel(){ 
            @Override
            public boolean isCellEditable(int row, int column){
                    return false;
            }                
        };        
        
        modelo.addColumn("Item"); 
        modelo.addColumn("Despesa");   
        modelo.addColumn("Total a Pagar");  
        
        if(ListaComissionados.isEmpty() && ListaEmpregados.isEmpty() && ListaFornecedores.isEmpty() && ListaGerentes.isEmpty()){
            modelo.addRow(new String[]{"Nada de Despesa!", "0,00", "0,00"});
        } else {
            for(int i = 0; i < ListaEmpregados.size(); i++){
                String nome = ListaEmpregados.get(i).getNome();
                double valor = ListaEmpregados.get(i).getValor();
                Total += valor;
                modelo.addRow(new String[]{"Salário do Empregado: " + nome, String.valueOf(df.format(valor)), String.valueOf(df.format(Total))});
            }

            for(int i = 0; i < ListaGerentes.size(); i++){
                String nome = ListaGerentes.get(i).getNome();
                double valor = ListaGerentes.get(i).getValor();
                Total += valor;
                modelo.addRow(new String[]{"Salário do Gerente: " + nome, String.valueOf(df.format(valor)), String.valueOf(df.format(Total))});
            }

            for(int i = 0; i < ListaComissionados.size(); i++){
                String nome = ListaComissionados.get(i).getNome();
                double valor = ListaComissionados.get(i).getValor();
                Total += valor;
                modelo.addRow(new String[]{"Salário do Comissionado: " + nome, String.valueOf(df.format(valor)), String.valueOf(df.format(Total))});
            }

            for(int i = 0; i < ListaFornecedores.size(); i++){
                String nome = ListaFornecedores.get(i).getNome();
                double valor = ListaFornecedores.get(i).getValor();
                Total += valor;
                modelo.addRow(new String[]{"Contrato com Fornecedor: " + nome, String.valueOf(df.format(valor)), String.valueOf(df.format(Total))});
            }
        }
           
        jTable1.setModel(modelo);
        jTable1.getColumnModel().getColumn(0).setPreferredWidth(300);
        jTable1.getColumnModel().getColumn(1).setPreferredWidth(75);
        jTable1.getColumnModel().getColumn(2).setPreferredWidth(100);               
    }

    private void RelatorioReceber(String ordem){ 
        ArrayList<Aluno> ListaAlunos = new ArrayList<>();
        this.Total = 0.0;
        
        ListaAlunos = Controle.listaAluno(ordem);
        
        DefaultTableModel modelo = new DefaultTableModel(){ 
            @Override
            public boolean isCellEditable(int row, int column){
                    return false;
            }                
        };        
        
        modelo.addColumn("Item"); 
        modelo.addColumn("Receita");   
        modelo.addColumn("Total a Receber");  
        
        if(ListaAlunos.isEmpty()){
            modelo.addRow(new String[]{"Nada de Receitas!", "0,00", "0,00"});
        } else {
            for(int i = 0; i < ListaAlunos.size(); i++){
                String nome = ListaAlunos.get(i).getNome();
                double valor = ListaAlunos.get(i).getValor();
                Total += valor;
                modelo.addRow(new String[]{"Mesalidade de: " + nome, String.valueOf(df.format(valor)), String.valueOf(df.format(Total))});
            }
        }
           
        jTable1.setModel(modelo);
        jTable1.getColumnModel().getColumn(0).setPreferredWidth(300);
        jTable1.getColumnModel().getColumn(1).setPreferredWidth(75);
        jTable1.getColumnModel().getColumn(2).setPreferredWidth(100);               
    }
    
    private void RelatorioSaldo(String ordem){ 
        ArrayList<Aluno> ListaAlunos = new ArrayList<>();
        ArrayList<Empregado> ListaEmpregados = new ArrayList<>();
        ArrayList<Gerente> ListaGerentes = new ArrayList<>();
        ArrayList<Comissionado> ListaComissionados = new ArrayList<>();
        ArrayList<Fornecedor> ListaFornecedores = new ArrayList<>();
        this.Total = 0.0;
 
        ListaAlunos = Controle.listaAluno(ordem);        
        ListaEmpregados = Controle.listaEmpregado(ordem);
        ListaGerentes = Controle.listaGerente(ordem);
        ListaComissionados = Controle.listaComissionado(ordem);
        ListaFornecedores = Controle.listaFornecedor(ordem);
        
        DefaultTableModel modelo = new DefaultTableModel(){ 
            @Override
            public boolean isCellEditable(int row, int column){
                    return false;
            }                
        };        
        
        modelo.addColumn("Item"); 
        modelo.addColumn("Receita");   
        modelo.addColumn("Despesa");   
        modelo.addColumn("Saldo");  
        
        if(ListaAlunos.isEmpty() && ListaComissionados.isEmpty() && ListaEmpregados.isEmpty() && ListaFornecedores.isEmpty() && ListaGerentes.isEmpty()){
            modelo.addRow(new String[]{"Nada Cadastrado!", "0,00", "0,00", "0,00"});
        } else {
            for(int ia = 0; ia < ListaAlunos.size(); ia++){
                String nome = ListaAlunos.get(ia).getNome();
                double valor = ListaAlunos.get(ia).getValor();
                Total += valor;
                modelo.addRow(new String[]{"Mesalidade de: " + nome, String.valueOf(df.format(valor)), "", String.valueOf(df.format(Total))});
            }
                
            for(int ie = 0; ie < ListaEmpregados.size(); ie++){
                String nome = ListaEmpregados.get(ie).getNome();
                double valor = ListaEmpregados.get(ie).getValor();
                Total -= valor;
                modelo.addRow(new String[]{"Salário do Empregado: " + nome, "", String.valueOf(df.format(valor)), String.valueOf(df.format(Total))});
            }

            for(int ig = 0; ig < ListaGerentes.size(); ig++){
                String nome = ListaGerentes.get(ig).getNome();
                double valor = ListaGerentes.get(ig).getValor();
                Total -= valor;
                modelo.addRow(new String[]{"Salário do Gerente: " + nome, "", String.valueOf(df.format(valor)), String.valueOf(df.format(Total))});
            }

            for(int ic = 0; ic < ListaComissionados.size(); ic++){
                String nome = ListaComissionados.get(ic).getNome();
                double valor = ListaComissionados.get(ic).getValor();
                Total -= valor;
                modelo.addRow(new String[]{"Salário do Comissionado: " + nome, "", String.valueOf(df.format(valor)), String.valueOf(df.format(Total))});
            }

            for(int iF = 0; iF < ListaFornecedores.size(); iF++){
                String nome = ListaFornecedores.get(iF).getNome();
                double valor = ListaFornecedores.get(iF).getValor();
                Total -= valor;
                modelo.addRow(new String[]{"Contrato com Fornecedor: " + nome, "", String.valueOf(df.format(valor)), String.valueOf(df.format(Total))});
            }     
        }
        jTable1.setModel(modelo);
        jTable1.getColumnModel().getColumn(0).setPreferredWidth(300);
        jTable1.getColumnModel().getColumn(1).setPreferredWidth(75);
        jTable1.getColumnModel().getColumn(2).setPreferredWidth(75);               
        jTable1.getColumnModel().getColumn(3).setPreferredWidth(100);               
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jScrollPane1 = new javax.swing.JScrollPane();
        jTable1 = new javax.swing.JTable();
        EscolhaRelatorio = new javax.swing.JComboBox();
        JBConsultar = new javax.swing.JButton();
        JBLimpar = new javax.swing.JButton();
        JLTotal = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);
        setTitle("Relatórios");
        setResizable(false);
        addWindowListener(new java.awt.event.WindowAdapter() {
            public void windowClosed(java.awt.event.WindowEvent evt) {
                formWindowClosed(evt);
            }
            public void windowOpened(java.awt.event.WindowEvent evt) {
                formWindowOpened(evt);
            }
        });

        jTable1.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {
                {},
                {},
                {},
                {}
            },
            new String [] {

            }
        ));
        jScrollPane1.setViewportView(jTable1);

        EscolhaRelatorio.setModel(new javax.swing.DefaultComboBoxModel(new String[] { " ", "Contas a Pagar", "Contas a Receber", "Saldo" }));
        EscolhaRelatorio.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                EscolhaRelatorioActionPerformed(evt);
            }
        });

        JBConsultar.setText("Consultar");
        JBConsultar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                JBConsultarActionPerformed(evt);
            }
        });

        JBLimpar.setText("Limpar");
        JBLimpar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                JBLimparActionPerformed(evt);
            }
        });

        JLTotal.setFont(new java.awt.Font("Arial", 1, 14)); // NOI18N
        JLTotal.setText("Total: R$0,00");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 686, Short.MAX_VALUE)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(EscolhaRelatorio, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(JBConsultar)
                .addGap(18, 18, 18)
                .addComponent(JBLimpar)
                .addGap(45, 45, 45))
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addGap(0, 0, Short.MAX_VALUE)
                .addComponent(JLTotal, javax.swing.GroupLayout.PREFERRED_SIZE, 136, javax.swing.GroupLayout.PREFERRED_SIZE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(EscolhaRelatorio, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(JBConsultar)
                    .addComponent(JBLimpar))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 40, Short.MAX_VALUE)
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 349, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(JLTotal)
                .addGap(16, 16, 16))
        );

        pack();
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    private void JBLimparActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_JBLimparActionPerformed
        DefaultTableModel tableModel = (DefaultTableModel) jTable1.getModel();
        while(tableModel.getRowCount() > 0){
            tableModel.removeRow(0);
        }
        this.Total = 0.0;
        JLTotal.setText("Total: R$" + df.format(Total));
    }//GEN-LAST:event_JBLimparActionPerformed

    private void JBConsultarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_JBConsultarActionPerformed
        if(EscolhaRelatorio.getSelectedIndex()== 1){
            RelatorioPagar("id");
        } else if (EscolhaRelatorio.getSelectedIndex()== 2){
            RelatorioReceber("id");
        } else if (EscolhaRelatorio.getSelectedIndex()== 3){
            RelatorioSaldo("id");
        } 
        
        JLTotal.setText("Total: R$" + df.format(Total));        
    }//GEN-LAST:event_JBConsultarActionPerformed

    private void EscolhaRelatorioActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_EscolhaRelatorioActionPerformed
        JBConsultarActionPerformed(evt);
    }//GEN-LAST:event_EscolhaRelatorioActionPerformed

    private void formWindowClosed(java.awt.event.WindowEvent evt) {//GEN-FIRST:event_formWindowClosed
        telaAnterior.setVisible(true);
    }//GEN-LAST:event_formWindowClosed

    private void formWindowOpened(java.awt.event.WindowEvent evt) {//GEN-FIRST:event_formWindowOpened
        EscolhaRelatorio.setSelectedIndex(0);
        telaAnterior.setVisible(false);
    }//GEN-LAST:event_formWindowOpened

    /**
     * @param args the command line arguments
     */


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JComboBox EscolhaRelatorio;
    private javax.swing.JButton JBConsultar;
    private javax.swing.JButton JBLimpar;
    private javax.swing.JLabel JLTotal;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTable jTable1;
    // End of variables declaration//GEN-END:variables
}
