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
public class Listagem extends javax.swing.JFrame {
    private MenuPrincipal telaAnterior;
    private DecimalFormat df = new DecimalFormat("0.00");    

    
    /**
     * Creates new form Listagem
     */
    private Listagem() {
        initComponents();
    }

    public Listagem(MenuPrincipal telaAnterior) {
        this();
        this.telaAnterior = telaAnterior;
    }


    private void OrganizaListaAluno(String ordem){ 
        ArrayList<Aluno> Lista = new ArrayList<>();
        Lista = Controle.listaAluno(ordem);
        DefaultTableModel modelo = new DefaultTableModel(){ 
            @Override
            public boolean isCellEditable(int row, int column){
                    return false;
            }                
        };        
        modelo.addColumn("ID"); 
        modelo.addColumn("Nome"); 
        modelo.addColumn("CPF"); 
        modelo.addColumn("Matricula"); 
        modelo.addColumn("Mensalidade");   
        if(Lista.isEmpty()){ 
            modelo.addRow(new String[]{"", "", "", "", ""});
        } else { 
            for(int i = 0; i < Lista.size(); i++){
                int Codigo =  Lista.get(i).getId();
                String Nome = Lista.get(i).getNome();
                String cpf = Lista.get(i).getCpf();
                int matricula = Lista.get(i).getMatricula();
                double valor = Lista.get(i).getValor();
                modelo.addRow(new String[]{String.valueOf(Codigo), Nome, cpf, String.valueOf(matricula), String.valueOf(df.format(valor))});
            }
        }                
        jTable1.setModel(modelo);
        jTable1.getColumnModel().getColumn(0).setPreferredWidth(25);
        jTable1.getColumnModel().getColumn(1).setPreferredWidth(225);
        jTable1.getColumnModel().getColumn(2).setPreferredWidth(75);
        jTable1.getColumnModel().getColumn(3).setPreferredWidth(75);
        jTable1.getColumnModel().getColumn(4).setPreferredWidth(50);                
    }
    
    private void OrganizaListaEmpregado(String ordem){ 
        ArrayList<Empregado> Lista = new ArrayList<>();
        Lista = Controle.listaEmpregado(ordem);
        DefaultTableModel modelo = new DefaultTableModel(){ 
            @Override
            public boolean isCellEditable(int row, int column){
                    return false;
            }                
        };        
        modelo.addColumn("ID"); 
        modelo.addColumn("Nome"); 
        modelo.addColumn("CPF"); 
        modelo.addColumn("Salário"); 
        if(Lista.isEmpty()){ 
            modelo.addRow(new String[]{"", "", "", ""});
        } else { 
            for(int i = 0; i < Lista.size(); i++){
                int Codigo =  Lista.get(i).getId();
                String Nome = Lista.get(i).getNome();
                String cpf = Lista.get(i).getCpf();                
                double valor = Lista.get(i).getValor();
                modelo.addRow(new String[]{String.valueOf(Codigo), Nome, cpf, String.valueOf(df.format(valor))});
            }
        }                
        jTable1.setModel(modelo);
        jTable1.getColumnModel().getColumn(0).setPreferredWidth(25);
        jTable1.getColumnModel().getColumn(1).setPreferredWidth(225);
        jTable1.getColumnModel().getColumn(2).setPreferredWidth(75);
        jTable1.getColumnModel().getColumn(3).setPreferredWidth(75);       
    }
    
    private void OrganizaListaGerente(String ordem){ 
        ArrayList<Gerente> Lista = new ArrayList<>();
        Lista = Controle.listaGerente(ordem);
        DefaultTableModel modelo = new DefaultTableModel(){ 
            @Override
            public boolean isCellEditable(int row, int column){
                    return false;
            }                
        };        
        modelo.addColumn("ID"); 
        modelo.addColumn("Nome"); 
        modelo.addColumn("CPF"); 
        modelo.addColumn("Salário"); 
        modelo.addColumn("Gratificação");   
        modelo.addColumn("Total Salário");   
        if(Lista.isEmpty()){ 
            modelo.addRow(new String[]{"", "", "", "", "", ""});
        } else { 
            for(int i = 0; i < Lista.size(); i++){
                int Codigo =  Lista.get(i).getId();
                String Nome = Lista.get(i).getNome();
                String cpf = Lista.get(i).getCpf();
                double valor = Lista.get(i).getSalario();
                double valorg = Lista.get(i).getGratificacao();
                double valortotal = Lista.get(i).getValor();
                modelo.addRow(new String[]{String.valueOf(Codigo), Nome, cpf, String.valueOf(df.format(valor)), String.valueOf(df.format(valorg)), String.valueOf(df.format(valortotal))});
            }
        }                
        jTable1.setModel(modelo);
        jTable1.getColumnModel().getColumn(0).setPreferredWidth(25);
        jTable1.getColumnModel().getColumn(1).setPreferredWidth(225);
        jTable1.getColumnModel().getColumn(2).setPreferredWidth(80);
        jTable1.getColumnModel().getColumn(3).setPreferredWidth(75);
        jTable1.getColumnModel().getColumn(4).setPreferredWidth(75);                
        jTable1.getColumnModel().getColumn(5).setPreferredWidth(75);                
    }
    
    private void OrganizaListaComissionado(String ordem){ 
        ArrayList<Comissionado> Lista = new ArrayList<>();
        Lista = Controle.listaComissionado(ordem);
        DefaultTableModel modelo = new DefaultTableModel(){ 
            @Override
            public boolean isCellEditable(int row, int column){
                    return false;
            }                
        };        
        modelo.addColumn("ID"); 
        modelo.addColumn("Nome"); 
        modelo.addColumn("CPF"); 
        modelo.addColumn("Salário"); 
        modelo.addColumn("Percentual");   
        modelo.addColumn("Total Salário");    
        if(Lista.isEmpty()){
            modelo.addRow(new String[]{"", "", "", "", "", ""});
        } else {
            for(int i = 0; i < Lista.size(); i++){
                int Codigo =  Lista.get(i).getId();
                String Nome = Lista.get(i).getNome();
                String cpf = Lista.get(i).getCpf();
                double valor = Lista.get(i).getSalario();
                double valorp = Lista.get(i).getPercentual();
                double valortotal = Lista.get(i).getValor();
                modelo.addRow(new String[]{String.valueOf(Codigo), Nome, cpf, String.valueOf(df.format(valor)), String.valueOf(df.format(valorp)), String.valueOf(df.format(valortotal))});
            }
        }                
        jTable1.setModel(modelo);
        jTable1.getColumnModel().getColumn(0).setPreferredWidth(25);
        jTable1.getColumnModel().getColumn(1).setPreferredWidth(225);
        jTable1.getColumnModel().getColumn(2).setPreferredWidth(80);
        jTable1.getColumnModel().getColumn(3).setPreferredWidth(75);
        jTable1.getColumnModel().getColumn(4).setPreferredWidth(75);                
        jTable1.getColumnModel().getColumn(5).setPreferredWidth(75);                  
    }
    
    private void OrganizaListaFornecedor(String ordem){ 
        ArrayList<Fornecedor> Lista = new ArrayList<>();
        Lista = Controle.listaFornecedor(ordem);
        DefaultTableModel modelo = new DefaultTableModel(){ 
            @Override
            public boolean isCellEditable(int row, int column){
                    return false;
            }                
        };        
        modelo.addColumn("ID"); 
        modelo.addColumn("Nome"); 
        modelo.addColumn("CNPJ"); 
        modelo.addColumn("Valor Contrato"); 
        if(Lista.isEmpty()){
            modelo.addRow(new String[]{"", "", "", ""});
        } else {
            for(int i = 0; i < Lista.size(); i++){
                int Codigo =  Lista.get(i).getId();
                String Nome = Lista.get(i).getNome();
                String cnpj = Lista.get(i).getCnpj();
                double valor = Lista.get(i).getValor();
                modelo.addRow(new String[]{String.valueOf(Codigo), Nome, cnpj, String.valueOf(df.format(valor))});
            }
        }                
        jTable1.setModel(modelo);
        jTable1.getColumnModel().getColumn(0).setPreferredWidth(25);
        jTable1.getColumnModel().getColumn(1).setPreferredWidth(225);
        jTable1.getColumnModel().getColumn(2).setPreferredWidth(75);
        jTable1.getColumnModel().getColumn(3).setPreferredWidth(75);                    
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        EscolhaTipo = new javax.swing.JComboBox();
        jScrollPane1 = new javax.swing.JScrollPane();
        jTable1 = new javax.swing.JTable();
        jButton1 = new javax.swing.JButton();
        jButton2 = new javax.swing.JButton();
        EscolhaOrdem = new javax.swing.JComboBox();

        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);
        setTitle("Listagem");
        setResizable(false);
        addWindowListener(new java.awt.event.WindowAdapter() {
            public void windowClosed(java.awt.event.WindowEvent evt) {
                formWindowClosed(evt);
            }
            public void windowOpened(java.awt.event.WindowEvent evt) {
                formWindowOpened(evt);
            }
        });

        EscolhaTipo.setModel(new javax.swing.DefaultComboBoxModel(new String[] { "Aluno", "Empregado", "Gerente", "Comissionado", "Fornecedor" }));
        EscolhaTipo.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                EscolhaTipoActionPerformed(evt);
            }
        });

        jTable1.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null}
            },
            new String [] {
                "Title 1", "Title 2", "Title 3", "Title 4"
            }
        ) {
            boolean[] canEdit = new boolean [] {
                false, false, false, false
            };

            public boolean isCellEditable(int rowIndex, int columnIndex) {
                return canEdit [columnIndex];
            }
        });
        jScrollPane1.setViewportView(jTable1);

        jButton1.setText("Atualizar");
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });

        jButton2.setText("Limpar");
        jButton2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton2ActionPerformed(evt);
            }
        });

        EscolhaOrdem.setModel(new javax.swing.DefaultComboBoxModel(new String[] { "ID", "CPF", "NOME", "MATRICULA", "MENSALIDADE" }));
        EscolhaOrdem.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                EscolhaOrdemActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 675, Short.MAX_VALUE)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addComponent(EscolhaTipo, javax.swing.GroupLayout.PREFERRED_SIZE, 165, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(EscolhaOrdem, javax.swing.GroupLayout.PREFERRED_SIZE, 165, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(jButton1)
                        .addGap(18, 18, 18)
                        .addComponent(jButton2)))
                .addContainerGap())
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(EscolhaTipo, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jButton1)
                    .addComponent(jButton2)
                    .addComponent(EscolhaOrdem, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 383, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(44, 44, 44))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );

        pack();
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    private void formWindowOpened(java.awt.event.WindowEvent evt) {//GEN-FIRST:event_formWindowOpened
        EscolhaTipo.setSelectedIndex(0);
        EscolhaOrdem.setSelectedIndex(0);
        telaAnterior.setVisible(false);
    }//GEN-LAST:event_formWindowOpened

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
        if(EscolhaTipo.getSelectedIndex()== 0){
            EscolhaOrdemActionPerformed(evt);
        } else if (EscolhaTipo.getSelectedIndex()== 1){
            EscolhaOrdemActionPerformed(evt);
        } else if (EscolhaTipo.getSelectedIndex()== 2){
            EscolhaOrdemActionPerformed(evt);
        } else if (EscolhaTipo.getSelectedIndex()== 3){
            EscolhaOrdemActionPerformed(evt);
        } else if (EscolhaTipo.getSelectedIndex() == 4){
            EscolhaOrdemActionPerformed(evt);
        }
    }//GEN-LAST:event_jButton1ActionPerformed

    private void EscolhaTipoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_EscolhaTipoActionPerformed
        if(EscolhaTipo.getSelectedIndex()== 0){
            OrganizaListaAluno("id");
            EscolhaOrdem.removeAllItems();
            EscolhaOrdem.addItem("ID");
            EscolhaOrdem.addItem("NOME");
            EscolhaOrdem.addItem("CPF");
            EscolhaOrdem.addItem("MATRÍCULA");
            EscolhaOrdem.addItem("MENSALIDADE");
        } else if (EscolhaTipo.getSelectedIndex()== 1){
            OrganizaListaEmpregado("id");
            EscolhaOrdem.removeAllItems();
            EscolhaOrdem.addItem("ID");
            EscolhaOrdem.addItem("NOME");
            EscolhaOrdem.addItem("CPF");
            EscolhaOrdem.addItem("SALÁRIO");            
        } else if (EscolhaTipo.getSelectedIndex()== 2){
            OrganizaListaGerente("id");
            EscolhaOrdem.removeAllItems();
            EscolhaOrdem.addItem("ID");
            EscolhaOrdem.addItem("NOME");
            EscolhaOrdem.addItem("CPF");
            EscolhaOrdem.addItem("SALÁRIO");                       
            EscolhaOrdem.addItem("GRATIFICAÇÃO");                       
        } else if (EscolhaTipo.getSelectedIndex()== 3){
            OrganizaListaComissionado("id");
            EscolhaOrdem.removeAllItems();
            EscolhaOrdem.addItem("ID");
            EscolhaOrdem.addItem("NOME");
            EscolhaOrdem.addItem("CPF");
            EscolhaOrdem.addItem("SALÁRIO");                       
            EscolhaOrdem.addItem("PERCENTUAL");            
        } else if (EscolhaTipo.getSelectedIndex() == 4){
            OrganizaListaFornecedor("id");
            EscolhaOrdem.removeAllItems();
            EscolhaOrdem.addItem("ID");
            EscolhaOrdem.addItem("NOME");
            EscolhaOrdem.addItem("CNPJ");
            EscolhaOrdem.addItem("CONTRATO");                       

        }
    }//GEN-LAST:event_EscolhaTipoActionPerformed

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed
        DefaultTableModel tableModel = (DefaultTableModel) jTable1.getModel();
        while(tableModel.getRowCount() > 0){
            tableModel.removeRow(0);
        }
    }//GEN-LAST:event_jButton2ActionPerformed

    private void EscolhaOrdemActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_EscolhaOrdemActionPerformed
        String teste;
        try{
            if(EscolhaTipo.getSelectedIndex()== 0){
                teste = (String)EscolhaOrdem.getSelectedItem();
                teste = teste.replace("Í", "I");
                OrganizaListaAluno(teste.toLowerCase());
            } else if (EscolhaTipo.getSelectedIndex()== 1){
                teste = (String)EscolhaOrdem.getSelectedItem();
                teste = teste.replace("Á", "A");
                OrganizaListaEmpregado(teste.toLowerCase());           
            } else if (EscolhaTipo.getSelectedIndex()== 2){
                teste = (String)EscolhaOrdem.getSelectedItem();
                teste = teste.replace("Á", "A");
                teste = teste.replace("Ç", "C");
                teste = teste.replace("Ã", "A");
                OrganizaListaGerente(teste.toLowerCase());                    
            } else if (EscolhaTipo.getSelectedIndex()== 3){
                teste = (String)EscolhaOrdem.getSelectedItem();
                teste = teste.replace("Á", "A");
                OrganizaListaComissionado(teste.toLowerCase());        
            } else if (EscolhaTipo.getSelectedIndex()== 4){
                teste = (String)EscolhaOrdem.getSelectedItem();
                OrganizaListaFornecedor(teste.toLowerCase());
            }
        }catch (NullPointerException ex){
           ex.getMessage();
        }
    }//GEN-LAST:event_EscolhaOrdemActionPerformed

    private void formWindowClosed(java.awt.event.WindowEvent evt) {//GEN-FIRST:event_formWindowClosed
        telaAnterior.setVisible(true);
    }//GEN-LAST:event_formWindowClosed

    /**
     * @param args the command line arguments
     */


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JComboBox EscolhaOrdem;
    private javax.swing.JComboBox EscolhaTipo;
    private javax.swing.JButton jButton1;
    private javax.swing.JButton jButton2;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTable jTable1;
    // End of variables declaration//GEN-END:variables
}
