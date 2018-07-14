/* 
 * File:   SuperLan.c
 * Author: Thomas Jefferson Lossio Alencar e Vinicius Batista Brandão
 *
 * Created on 29 de Abril de 2014, 23:49
 */

#include <stdio.h>
#include <stdlib.h>
#include "../string.h"

#define CAD(nomeitem,fornecedor,qntd_item,valcompra,valvenda,nomitemcad,fornecedorcad,qntd_itemcad,valcompracad,valvendacad){\
	       strcpy(nomitemcad,nomeitem);\
	       strcpy(fornecedorcad,fornecedor);\
               qntd_itemcad = qntd_item;\
               valcompracad = valcompra;\
               valvendacad = valvenda;\
               system("clear");\
               printf("Item \"%s\" cadastrado com sucesso!\n", nomitemcad);\
               }

#define EXC(nomitemexc,fornecedorexc,qntd_itemexc,valcompraexc,valvendaexc){\
               strcpy(nomitemexc, "");\
               strcpy(fornecedorexc, "");\
               qntd_itemexc = 0;\
               valcompraexc = 0.0;\
               valvendaexc = 0.0;\
               system("clear");\
               printf("Item excluido com sucesso\n");\
               }

int main() {
    char login[16] = "", senha[16] = "", useradm[16] = "admin", senhaadm[16] = "adm1234", userusu[16] = "Francisco", senhausu[16] = "user123";
    char nomeitem[50] = "", nomitem1[50] = "", nomitem2[50] = "", nomitem3[50] = "", nomitem4[50] = "", nomitem5[50] = "", nomitem6[50] = "", nomitem7[50] = "", nomitem8[50] = "", nomitem9[50] = "", nomitem10[50] = "";
    
    char fornecedor[50] = "", fornecedor1[50] = "", fornecedor2[50] = "", fornecedor3[50] = "", fornecedor4[50] = "", fornecedor5[50] = "", fornecedor6[50] = "", fornecedor7[50] = "", fornecedor8[50] = "", fornecedor9[50] = "", fornecedor10[50] = "";
    char nomeitem_alt[50] = "", fornecedor_alt[50] = "", cpf[16] = "", cpf1[16] = "", cpf2[16] = "", cpf3[16] = "", cpf4[16] = "", cpf5[16] = "", itemma[50] = "";

    int qntd_item_alt = 0, qntd_item1 = 0, qntd_item2 = 0, qntd_item3 = 0, qntd_item4 = 0, qntd_item5 = 0, qntd_item6 = 0, qntd_item7 = 0, qntd_item8 = 0, qntd_item9 = 0, qntd_item10 = 0;
    int erro = 0, estoquetotal = 0, flag_prim = 0;
    int pas = 0, exc = 0, altera = 0, altera1 = 0, menu = 0, menu1 = 0;

    int pagamento = 0, nov = 2, nov1 = 0, venda = 0, qntd_item = 0, qntd_total = 0, cart = 0, dotzc = 0;
    int cpf1_p = 0, cpf2_p = 0, cpf3_p = 0, cpf4_p = 0, cpf5_p = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    int perm = 0, lista = 0, listanov = 1;

    int item1 = 0, item2 = 0, item3 = 0, item4 = 0, item5 = 0, item6 = 0, item7 = 0, item8 = 0, item9 = 0, item10 = 0, dotz = 0, cont = 1;
    int vend1 = 0, vend2 = 0, vend3 = 0, vend4 = 0, vend5 = 0, vend6 = 0, vend7 = 0, vend8 = 0, vend9 = 0, vend10 = 0, rankma = 0;

    float valcompra_alt = 0.0, valcompra = 0.0, valcompra1 = 0.0, valcompra2 = 0.0, valcompra3 = 0.0, valcompra4 = 0.0, valcompra5 = 0.0, valcompra6 = 0.0, valcompra7 = 0.0, valcompra8 = 0.0, valcompra9 = 0.0, valcompra10 = 0.0;
    float valvenda = 0.0, valvenda_alt = 0.0, valvenda1 = 0.0, valvenda2 = 0.0, valvenda3 = 0.0, valvenda4 = 0.0, valvenda5 = 0.0, valvenda6 = 0.0, valvenda7 = 0.0, valvenda8 = 0.0, valvenda9 = 0.0, valvenda10 = 0.0;
    float valortot = 0.0, dinheiro = 0.0, troco = 0.0;

    if (flag_prim++ == 0) {
        printf("Bem Vindo ao SuperLan\n");
    }
    while ((erro < 5) && (pas != 1)) {
        printf("Login: ");
        scanf("%s", login);
        if (strcmp(login, useradm) == 0 || strcmp(login, userusu) == 0) {
            if (strcmp(login, useradm) == 0) {
                printf("Senha: ");
                scanf("%s", senha);
                if (strcmp(senha, senhaadm) == 0) {
                    system("clear");
                    printf("Acesso Liberado!\n");
                    printf("Bem Vindo %s!\n\n", login);
                    pas = 1;
                    perm = 2;
                } else {
                    system("clear");
                    printf("Acesso Negado!\n");
                    printf("Numero Tentativas Restantes: %i\n\n", 4 - erro);
                    pas = 0;
                    erro++;
                }
            } else {
                if (strcmp(login, userusu) == 0) {
                    printf("Senha: ");
                    scanf("%s", senha);
                    if (strcmp(senha, senhausu) == 0) {
                        system("clear");
                        printf("Acesso Liberado!\n");
                        printf("Bem Vindo %s!\n\n", login);
                        pas = 1;
                        perm = 1;
                    } else {
                        system("clear");
                        printf("Acesso Negado!\n");
                        printf("Numero Tentativas Restantes: %i\n\n", 4 - erro);
                        pas = 0;
                        erro++;
                    }
                }
            }
        } else {
            system("clear");
            printf("Usuário Não Cadastrado, tente outra vez...\n");
            printf("Numero Tentativas Restantes: %i\n\n", 4 - erro);
            pas = 0;
            erro++;
        }
    }
    if (pas == 1) {
        while (pas == 1) {
            system("clear");
            printf("ESCOLHA [1]ITENS  [2]CAIXA  [3]LISTAGENS/RELATORIOS  [0]SAIR\n");
            scanf("%i", &menu);
            switch (menu) {
                case 1:{
                    while (menu == 1) {
                        system("clear");
                        printf("Escolha [1]ADICIONAR [2]EXCLUIR [3]ALTERAR [0] MENU PRINCIPAL\n\n");
                        scanf("%i", &menu1);
                        switch (menu1) {
                            case 1:{
                                system("clear");
                                printf("NOME DO ITEM: ");
                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", nomeitem);
                                printf("NOME FORNECEDOR: ");
                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", fornecedor);
                                printf("QUANTIDADE TOTAL: ");
                                scanf("%i", &qntd_item);
                                printf("VALOR DE COMPRA/ITEM: ");
                                scanf("%f", &valcompra);
                                printf("VALOR DE VENDA/ITEM: ");
                                scanf("%f", &valvenda);
                                if (item1 == 0) {
                                    CAD(nomeitem, fornecedor, qntd_item, valcompra, valvenda, nomitem1, fornecedor1, qntd_item1, valcompra1, valvenda1);
                                    estoquetotal = estoquetotal + qntd_item1;
                                    item1 = 1;
                                } else {
                                    if (item2 == 0) {
                                        CAD(nomeitem, fornecedor, qntd_item, valcompra, valvenda, nomitem2, fornecedor2, qntd_item2, valcompra2, valvenda2);
                                        estoquetotal = estoquetotal + qntd_item2;
                                        item2 = 1;
                                    } else {
                                        if (item3 == 0) {
                                            CAD(nomeitem, fornecedor, qntd_item, valcompra, valvenda, nomitem3, fornecedor3, qntd_item3, valcompra3, valvenda3);
                                            estoquetotal = estoquetotal + qntd_item3;
                                            item3 = 1;
                                        } else {
                                            if (item4 == 0) {
                                                CAD(nomeitem, fornecedor, qntd_item, valcompra, valvenda, nomitem4, fornecedor4, qntd_item4, valcompra4, valvenda4);
                                                estoquetotal = estoquetotal + qntd_item4;
                                                item4 = 1;
                                            } else {
                                                if (item5 == 0) {
                                                    CAD(nomeitem, fornecedor, qntd_item, valcompra, valvenda, nomitem5, fornecedor5, qntd_item5, valcompra5, valvenda5);
                                                    estoquetotal = estoquetotal + qntd_item5;
                                                    item5 = 1;
                                                } else {
                                                    if (item6 == 0) {
                                                        CAD(nomeitem, fornecedor, qntd_item, valcompra, valvenda, nomitem6, fornecedor6, qntd_item6, valcompra6, valvenda6);
                                                        estoquetotal = estoquetotal + qntd_item6;
                                                        item6 = 1;
                                                    } else {
                                                        if (item7 == 0) {
                                                            CAD(nomeitem, fornecedor, qntd_item, valcompra, valvenda, nomitem7, fornecedor7, qntd_item7, valcompra7, valvenda7);
                                                            estoquetotal = estoquetotal + qntd_item7;
                                                            item7 = 1;
                                                        } else {
                                                            if (item8 == 0) {
                                                                CAD(nomeitem, fornecedor, qntd_item, valcompra, valvenda, nomitem8, fornecedor8, qntd_item8, valcompra8, valvenda8);
                                                                estoquetotal = estoquetotal + qntd_item8;
                                                                item8 = 1;
                                                            } else {
                                                                if (item9 == 0) {
                                                                    CAD(nomeitem, fornecedor, qntd_item, valcompra, valvenda, nomitem9, fornecedor9, qntd_item9, valcompra9, valvenda9);
                                                                    estoquetotal = estoquetotal + qntd_item9;
                                                                    item9 = 1;
                                                                } else {
                                                                    if (item10 == 0) {
                                                                        CAD(nomeitem, fornecedor, qntd_item, valcompra, valvenda, nomitem10, fornecedor10, qntd_item10, valcompra10, valvenda10);
                                                                        estoquetotal = estoquetotal + qntd_item10;
                                                                        item10 = 1;
                                                                    } else {
                                                                        printf("\nNão é possível cadastrar um novo item!\n");
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            break;}
                            case 2:{
                                system("clear");
                                if (perm > 1) {
                                    printf("QUAL ITEM VOCE DESEJA EXCLUIR?\n");
                                    printf(" [1] %s\n [2] %s\n [3] %s\n [4] %s\n [5] %s\n [6] %s\n [7] %s\n [8] %s\n [9] %s\n [10] %s\n", nomitem1, nomitem2, nomitem3, nomitem4, nomitem5, nomitem6, nomitem7, nomitem8, nomitem9, nomitem10);
                                    scanf("%i", &exc);
                                    if ((exc == 1) && (item1 == 1)) {
                                        estoquetotal = estoquetotal - qntd_item1;
                                        EXC(nomitem1, fornecedor1, qntd_item1, valcompra1, valvenda1);
                                        item1 = 0;
                                    } else {
                                        if ((exc == 2) && (item2 == 1)) {
                                            estoquetotal = estoquetotal - qntd_item2;
                                            EXC(nomitem2, fornecedor2, qntd_item2, valcompra2, valvenda2);
                                            item2 = 0;
                                        } else {
                                            if ((exc == 3) && (item3 == 1)) {
                                                estoquetotal = estoquetotal - qntd_item3;
                                                EXC(nomitem3, fornecedor3, qntd_item3, valcompra3, valvenda3);
                                                item3 = 0;
                                            } else {
                                                if ((exc == 4) && (item4 == 1)) {
                                                    estoquetotal = estoquetotal - qntd_item4;
                                                    EXC(nomitem4, fornecedor4, qntd_item4, valcompra4, valvenda4);
                                                    item4 = 0;
                                                } else {
                                                    if ((exc == 5) && (item5 == 1)) {
                                                        estoquetotal = estoquetotal - qntd_item5;
                                                        EXC(nomitem5, fornecedor5, qntd_item5, valcompra5, valvenda5);
                                                        item5 = 0;
                                                    } else {
                                                        if ((exc == 6) && (item6 == 1)) {
                                                            estoquetotal = estoquetotal - qntd_item6;
                                                            EXC(nomitem6, fornecedor6, qntd_item6, valcompra6, valvenda6);
                                                            item6 = 0;
                                                        } else {
                                                            if ((exc == 7) && (item7 == 1)) {
                                                                estoquetotal = estoquetotal - qntd_item7;
                                                                EXC(nomitem7, fornecedor7, qntd_item7, valcompra7, valvenda7);
                                                                item7 = 0;
                                                            } else {
                                                                if ((exc == 8) && (item8 == 1)) {
                                                                    estoquetotal = estoquetotal - qntd_item8;
                                                                    EXC(nomitem8, fornecedor8, qntd_item8, valcompra8, valvenda8);
                                                                    item8 = 0;
                                                                } else {
                                                                    if ((exc == 9) && (item9 == 1)) {
                                                                        estoquetotal = estoquetotal - qntd_item9;
                                                                        EXC(nomitem9, fornecedor9, qntd_item9, valcompra9, valvenda9);
                                                                        item9 = 0;
                                                                    } else {
                                                                        if ((exc == 10) && (item10 == 1)) {
                                                                            estoquetotal = estoquetotal - qntd_item10;
                                                                            EXC(nomitem10, fornecedor10, qntd_item10, valcompra10, valvenda10);
                                                                            item10 = 0;
                                                                        } else {
                                                                            printf("Item Invalido ou Não Cadastrado!\n");
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    printf("Você não tem permissão suficiente!\nFaça o Login com um Usuario Administrador para poder excluir!\n");
                                }
                            break;}
                            case 3:{
                                system("clear");
                                if (perm > 1) {
                                    printf("QUAL ITEM VOCE DESEJA ALTERAR\n");
                                    printf(" 1- %s\n 2- %s\n 3- %s\n 4- %s\n 5- %s\n 6- %s\n 7- %s\n 8- %s\n 9- %s\n 10- %s\n", nomitem1, nomitem2, nomitem3, nomitem4, nomitem5, nomitem6, nomitem7, nomitem8, nomitem9, nomitem10);
                                    scanf("%d", &altera);
                                    if ((altera == 1) && (item1 == 1)) {
                                        printf("O QUE VOCÊ DESEJA ALTERAR DO ITEM:\n\n [1] NOME DO ITEM: %s \n [2] FORNECEDOR: %s \n [3] ESTOQUE: %d \n [4] VALOR DA COMPRA/ITEM:%.2f \n [5] VALOR DA VENDA/ITEM: %.2f \n", nomitem1, fornecedor1, qntd_item1, valcompra1, valvenda1);
                                        scanf("%d", &altera1);
                                        system("clear");
                                        switch (altera1) {
                                            case 1:{
                                                printf("QUAL NOVO NOME DO ITEM?\n");
                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", nomeitem_alt);
                                                strcpy(nomitem1, nomeitem_alt);
                                                printf("Nome do item alterado com sucesso\n");
                                            break;}
                                            case 2:{
                                                printf("QUAL NOVO NOME DO FORNECEDOR?\n");
                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", fornecedor_alt);
                                                strcpy(fornecedor1, fornecedor_alt);
                                                printf("Fornecedor alterado com sucesso\n");
                                            break;}
                                            case 3:{
                                                printf("DESEJA ADCIONAR MAIS QUANTOS NO ESTOQUE?\n");
                                                scanf("%d", &qntd_item_alt);
                                                qntd_item1 = qntd_item1 + qntd_item_alt;
                                                estoquetotal = estoquetotal + qntd_item_alt;
                                                printf("Quantidade no estoque alterada com sucesso\n");
                                            break;}
                                            case 4:{
                                                printf("QUAL SERA O PREÇO DE COMPRA/ITEM?\n");
                                                scanf("%f", &valcompra_alt);
                                                valcompra1 = valcompra_alt;
                                                printf("Preço alterado com sucesso\n");
                                            break;}
                                            case 5:{
                                                printf("QUAL SERA O PREÇO DE VENDA/ITEM?\n");
                                                scanf("%f", &valvenda_alt);
                                                valvenda1 = valvenda_alt;
                                                printf("Preço alterado com sucesso\n");
                                            break;}
                                            default: printf("Não foi selecionada nenhuma opcao");
                                        }
                                    } else {
                                        if ((altera == 2) && (item2 == 1)) {
                                            printf("O QUE VOCÊ DESEJA ALTERAR DO ITEM:\n\n [1] NOME DO ITEM: %s \n [2] FORNECEDOR: %s \n [3] ESTOQUE: %d \n [4] VALOR DA COMPRA/ITEM:%.2f \n [5] VALOR DA VENDA/ITEM: %.2f \n", nomitem2, fornecedor2, qntd_item2, valcompra2, valvenda2);
                                            scanf("%d", &altera1);
                                            system("clear");
                                            switch (altera1) {
                                                case 1:{
                                                    printf("QUAL NOVO NOME DO ITEM?\n");
                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", nomeitem_alt);
                                                    strcpy(nomitem2, nomeitem_alt);
                                                    printf("Nome do item alterado com sucesso\n");
                                                break;}
                                                case 2:{
                                                    printf("QUAL NOVO NOME DO FORNECEDOR?\n");
                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", fornecedor_alt);
                                                    strcpy(fornecedor2, fornecedor_alt);
                                                    printf("Fornecedor alterado com sucesso\n");
                                                break;}
                                                case 3:{
                                                    printf("DESEJA ADCIONAR MAIS QUANTOS NO ESTOQUE?\n");
                                                    scanf("%d", &qntd_item_alt);
                                                    qntd_item2 = qntd_item2 + qntd_item_alt;
                                                    estoquetotal = estoquetotal + qntd_item_alt;
                                                    printf("Quantidade no estoque alterada com sucesso\n");
                                                break;}
                                                case 4:{
                                                    printf("QUAL SERA O PREÇO DE COMPRA/ITEM?\n");
                                                    scanf("%f", &valcompra_alt);
                                                    valcompra2 = valcompra_alt;
                                                    printf("Preço alterado com sucesso\n");
                                                break;}
                                                case 5:{
                                                    printf("QUAL SERA O PREÇO DE VENDA/ITEM?\n");
                                                    scanf("%f", &valvenda_alt);
                                                    valvenda2 = valvenda_alt;
                                                    printf("Preço alterado com sucesso\n");
                                                break;}
                                                default: printf("Não foi selecionada nenhuma opcao");
                                            }
                                        } else {
                                            if ((altera == 3) && (item3 == 1)) {
                                                printf("O QUE VOCÊ DESEJA ALTERAR DO ITEM:\n\n [1] NOME DO ITEM: %s \n [2] FORNECEDOR: %s \n [3] ESTOQUE: %d \n [4] VALOR DA COMPRA/ITEM:%.2f \n [5] VALOR DA VENDA/ITEM: %.2f \n", nomitem3, fornecedor3, qntd_item3, valcompra3, valvenda3);
                                                scanf("%d", &altera1);
                                                system("clear");
                                                switch (altera1) {
                                                    case 1:{
                                                        printf("QUAL NOVO NOME DO ITEM?");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", nomeitem_alt);
                                                        strcpy(nomitem3, nomeitem_alt);
                                                        printf("Nome do item alterado com sucesso");
                                                    break;}
                                                    case 2:{
                                                        printf("QUAL NOVO NOME DO FORNECEDOR?\n");
                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", fornecedor_alt);
                                                        strcpy(fornecedor3, fornecedor_alt);
                                                        printf("Fornecedor alterado com sucesso\n");
                                                    break;}
                                                    case 3:{
                                                        printf("DESEJA ADCIONAR MAIS QUANTOS NO ESTOQUE?\n");
                                                        scanf("%d", &qntd_item_alt);
                                                        qntd_item3 = qntd_item3 + qntd_item_alt;
                                                        estoquetotal = estoquetotal + qntd_item_alt;
                                                        printf("Quantidade no estoque alterada com sucesso\n");
                                                    break;}
                                                    case 4:{
                                                        printf("QUAL SERA O PREÇO DE COMPRA/ITEM?\n");
                                                        scanf("%f", &valcompra_alt);
                                                        valcompra3 = valcompra_alt;
                                                        printf("Preço alterado com sucesso\n");
                                                    break;}
                                                    case 5:{
                                                        printf("QUAL SERA O PREÇO DE VENDA/ITEM?\n");
                                                        scanf("%f", &valvenda_alt);
                                                        valvenda3 = valvenda_alt;
                                                        printf("Preço alterado com sucesso\n");
                                                    break;}
                                                    default: printf("Não foi selecionada nenhuma opcao");
                                                }
                                            } else {
                                                if ((altera == 4) && (item4 == 1)) {
                                                    printf("O QUE VOCÊ DESEJA ALTERAR DO ITEM:\n\n [1] NOME DO ITEM: %s \n [2] FORNECEDOR: %s \n [3] ESTOQUE: %d \n [4] VALOR DA COMPRA/ITEM:%.2f \n [5] VALOR DA VENDA/ITEM: %.2f \n", nomitem4, fornecedor4, qntd_item4, valcompra4, valvenda4);
                                                    scanf("%d", &altera1);
                                                    system("clear");
                                                    switch (altera1) {
                                                        case 1:{
                                                            printf("QUAL NOVO NOME DO ITEM?\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", nomeitem_alt);
                                                            strcpy(nomitem4, nomeitem_alt);
                                                            printf("Nome do item alterado com sucesso\n");
                                                        break;}
                                                        case 2:{
                                                            printf("QUAL NOVO NOME DO FORNECEDOR?\n");
                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", fornecedor_alt);
                                                            strcpy(fornecedor4, fornecedor_alt);
                                                            printf("Fornecedor alterado com sucesso\n");
                                                        break;}
                                                        case 3:{
                                                            printf("DESEJA ADCIONAR MAIS QUANTOS NO ESTOQUE?\n");
                                                            scanf("%d", &qntd_item_alt);
                                                            qntd_item4 = qntd_item4 + qntd_item_alt;
                                                            estoquetotal = estoquetotal + qntd_item_alt;
                                                            printf("Quantidade no estoque alterada com sucesso\n");
                                                        break;}
                                                        case 4:{
                                                            printf("QUAL SERA O PREÇO DE COMPRA/ITEM?\n");
                                                            scanf("%f", &valcompra_alt);
                                                            valcompra4 = valcompra_alt;
                                                            printf("Preço alterado com sucesso\n");
                                                        break;}
                                                        case 5:{
                                                            printf("QUAL SERA O PREÇO DE VENDA/ITEM?\n");
                                                            scanf("%f", &valvenda_alt);
                                                            valvenda4 = valvenda_alt;
                                                            printf("Preço alterado com sucesso\n");
                                                        break;}
                                                        default: printf("Não foi selecionada nenhuma opcao");
                                                    }
                                                } else {
                                                    if ((altera == 5) && (item5 == 1)) {
                                                        printf("O QUE VOCÊ DESEJA ALTERAR DO ITEM:\n\n [1] NOME DO ITEM: %s \n [2] FORNECEDOR: %s \n [3] ESTOQUE: %d \n [4] VALOR DA COMPRA/ITEM:%.2f \n [5] VALOR DA VENDA/ITEM: %.2f \n", nomitem5, fornecedor5, qntd_item5, valcompra5, valvenda5);
                                                        scanf("%d", &altera1);
                                                        system("clear");
                                                        switch (altera1) {
                                                            case 1:{
                                                                printf("QUAL NOVO NOME DO ITEM?\n");
                                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", nomeitem_alt);
                                                                strcpy(nomitem5, nomeitem_alt);
                                                                printf("Nome do item alterado com sucesso\n");
                                                            break;}
                                                            case 2:{
                                                                printf("QUAL NOVO NOME DO FORNECEDOR?\n");
                                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", fornecedor_alt);
                                                                strcpy(fornecedor5, fornecedor_alt);
                                                                printf("Fornecedor alterado com sucesso\n");
                                                            break;}
                                                            case 3:{
                                                                printf("DESEJA ADCIONAR MAIS QUANTOS NO ESTOQUE?\n");
                                                                scanf("%d", &qntd_item_alt);
                                                                qntd_item5 = qntd_item5 + qntd_item_alt;
                                                                estoquetotal = estoquetotal + qntd_item_alt;
                                                                printf("Quantidade no estoque alterada com sucesso\n");
                                                            break;}
                                                            case 4:{
                                                                printf("QUAL SERA O PREÇO DE COMPRA/ITEM?\n");
                                                                scanf("%f", &valcompra_alt);
                                                                valcompra5 = valcompra_alt;
                                                                printf("Preço alterado com sucesso\n");
                                                            break;}
                                                            case 5:{
                                                                printf("QUAL SERA O PREÇO DE VENDA/ITEM?\n");
                                                                scanf("%f", &valvenda_alt);
                                                                valvenda5 = valvenda_alt;
                                                                printf("Preço alterado com sucesso\n");
                                                            break;}
                                                            default: printf("Não foi selecionada nenhuma opcao");
                                                        }
                                                    } else {
                                                        if ((altera == 6) && (item6 == 1)) {
                                                            printf("O QUE VOCÊ DESEJA ALTERAR DO ITEM:\n\n [1] NOME DO ITEM: %s \n [2] FORNECEDOR: %s \n [3] ESTOQUE: %d \n [4] VALOR DA COMPRA/ITEM:%.2f \n [5] VALOR DA VENDA/ITEM: %.2f \n", nomitem6, fornecedor6, qntd_item6, valcompra6, valvenda6);
                                                            scanf("%d", &altera1);
                                                            system("clear");
                                                            switch (altera1) {
                                                                case 1:{
                                                                    printf("QUAL NOVO NOME DO ITEM?\n");
                                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", nomeitem_alt);
                                                                    strcpy(nomitem6, nomeitem_alt);
                                                                    printf("Nome do item alterado com sucesso\n");
                                                                break;}
                                                                case 2:{
                                                                    printf("QUAL NOVO NOME DO FORNECEDOR?\n");
                                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", fornecedor_alt);
                                                                    strcpy(fornecedor6, fornecedor_alt);
                                                                    printf("Fornecedor alterado com sucesso\n");
                                                                break;}
                                                                case 3:{
                                                                    printf("DESEJA ADCIONAR MAIS QUANTOS NO ESTOQUE?\n");
                                                                    scanf("%d", &qntd_item_alt);
                                                                    qntd_item6 = qntd_item6 + qntd_item_alt;
                                                                    estoquetotal = estoquetotal + qntd_item_alt;
                                                                    printf("Quantidade no estoque alterada com sucesso\n");
                                                                break;}
                                                                case 4:{
                                                                    printf("QUAL SERA O PREÇO DE COMPRA/ITEM?\n");
                                                                    scanf("%f", &valcompra_alt);
                                                                    valcompra6 = valcompra_alt;
                                                                    printf("Preço alterado com sucesso\n");
                                                                break;}
                                                                case 5:{
                                                                    printf("QUAL SERA O PREÇO DE VENDA/ITEM?\n");
                                                                    scanf("%f", &valvenda_alt);
                                                                    valvenda6 = valvenda_alt;
                                                                    printf("Preço alterado com sucesso\n");
                                                                break;}
                                                                default: printf("Não foi selecionada nenhuma opcao");
                                                            }
                                                        } else {
                                                            if ((altera == 7) && (item7 == 1)) {
                                                                printf("O QUE VOCÊ DESEJA ALTERAR DO ITEM:\n\n [1] NOME DO ITEM: %s \n [2] FORNECEDOR: %s \n [3] ESTOQUE: %d \n [4] VALOR DA COMPRA/ITEM:%.2f \n [5] VALOR DA VENDA/ITEM: %.2f \n", nomitem7, fornecedor7, qntd_item7, valcompra7, valvenda7);
                                                                scanf("%d", &altera1);
                                                                system("clear");
                                                                switch (altera1) {
                                                                    case 1:{
                                                                        printf("QUAL NOVO NOME DO ITEM?\n");
                                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", nomeitem_alt);
                                                                        strcpy(nomitem7, nomeitem_alt);
                                                                        printf("Nome do item alterado com sucesso\n");
                                                                    break;}
                                                                    case 2:{
                                                                        printf("QUAL NOVO NOME DO FORNECEDOR?\n");
                                                                        scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", fornecedor_alt);
                                                                        strcpy(fornecedor7, fornecedor_alt);
                                                                        printf("Fornecedor alterado com sucesso\n");
                                                                    break;}
                                                                    case 3:{
                                                                        printf("DESEJA ADCIONAR MAIS QUANTOS NO ESTOQUE?\n");
                                                                        scanf("%d", &qntd_item_alt);
                                                                        qntd_item7 = qntd_item7 + qntd_item_alt;
                                                                        estoquetotal = estoquetotal + qntd_item_alt;
                                                                        printf("Quantidade no estoque alterada com sucesso\n");
                                                                    break;}
                                                                    case 4:{
                                                                        printf("QUAL SERA O PREÇO DE COMPRA/ITEM?\n");
                                                                        scanf("%f", &valcompra_alt);
                                                                        valcompra7 = valcompra_alt;
                                                                        printf("Preço alterado com sucesso\n");
                                                                    break;}
                                                                    case 5:{
                                                                        printf("QUAL SERA O PREÇO DE VENDA/ITEM?\n");
                                                                        scanf("%f", &valvenda_alt);
                                                                        valvenda7 = valvenda_alt;
                                                                        printf("Preço alterado com sucesso\n");
                                                                    break;}
                                                                    default: printf("Não foi selecionada nenhuma opcao");
                                                                }
                                                            } else {
                                                                if ((altera == 8) && (item8 == 1)) {
                                                                    printf("O QUE VOCÊ DESEJA ALTERAR DO ITEM:\n\n [1] NOME DO ITEM: %s \n [2] FORNECEDOR: %s \n [3] ESTOQUE: %d \n [4] VALOR DA COMPRA/ITEM:%.2f \n [5] VALOR DA VENDA/ITEM: %.2f \n", nomitem8, fornecedor8, qntd_item8, valcompra8, valvenda8);
                                                                    scanf("%d", &altera1);
                                                                    system("clear");
                                                                    switch (altera1) {
                                                                        case 1:{
                                                                            printf("QUAL NOVO NOME DO ITEM?\n");
                                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", nomeitem_alt);
                                                                            strcpy(nomitem8, nomeitem_alt);
                                                                            printf("Nome do item alterado com sucesso\n");
                                                                        break;}
                                                                        case 2:{
                                                                            printf("QUAL NOVO NOME DO FORNECEDOR?\n");
                                                                            scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", fornecedor_alt);
                                                                            strcpy(fornecedor8, fornecedor_alt);
                                                                            printf("Fornecedor alterado com sucesso\n");
                                                                        break;}
                                                                        case 3:{
                                                                            printf("DESEJA ADCIONAR MAIS QUANTOS NO ESTOQUE?\n");
                                                                            scanf("%d", &qntd_item_alt);
                                                                            qntd_item8 = qntd_item8 + qntd_item_alt;
                                                                            estoquetotal = estoquetotal + qntd_item_alt;
                                                                            printf("Quantidade no estoque alterada com sucesso\n");
                                                                        break;}
                                                                        case 4:{
                                                                            printf("QUAL SERA O PREÇO DE COMPRA/ITEM?\n");
                                                                            scanf("%f", &valcompra_alt);
                                                                            valcompra8 = valcompra_alt;
                                                                            printf("Preço alterado com sucesso\n");
                                                                        break;}
                                                                        case 5:{
                                                                            printf("QUAL SERA O PREÇO DE VENDA/ITEM?\n");
                                                                            scanf("%f", &valvenda_alt);
                                                                            valvenda8 = valvenda_alt;
                                                                            printf("Preço alterado com sucesso\n");
                                                                        break;}
                                                                        default: printf("Não foi selecionada nenhuma opcao");
                                                                    }
                                                                } else {
                                                                    if ((altera == 9) && (item9 == 1)) {
                                                                        printf("O QUE VOCÊ DESEJA ALTERAR DO ITEM:\n\n [1] NOME DO ITEM: %s \n [2] FORNECEDOR: %s \n [3] ESTOQUE: %d \n [4] VALOR DA COMPRA/ITEM:%.2f \n [5] VALOR DA VENDA/ITEM: %.2f \n", nomitem9, fornecedor9, qntd_item9, valcompra9, valvenda9);
                                                                        scanf("%d", &altera1);
                                                                        system("clear");
                                                                        switch (altera1) {
                                                                            case 1:{
                                                                                printf("QUAL NOVO NOME DO ITEM?\n");
                                                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", nomeitem_alt);
                                                                                strcpy(nomitem9, nomeitem_alt);
                                                                                printf("Nome do item alterado com sucesso\n");
                                                                            break;}
                                                                            case 2:{
                                                                                printf("QUAL NOVO NOME DO FORNECEDOR?\n");
                                                                                scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", fornecedor_alt);
                                                                                strcpy(fornecedor9, fornecedor_alt);
                                                                                printf("Fornecedor alterado com sucesso\n");
                                                                            break;}
                                                                            case 3:{
                                                                                printf("DESEJA ADCIONAR MAIS QUANTOS NO ESTOQUE?\n");
                                                                                scanf("%d", &qntd_item_alt);
                                                                                qntd_item9 = qntd_item9 + qntd_item_alt;
                                                                                estoquetotal = estoquetotal + qntd_item_alt;
                                                                                printf("Quantidade no estoque alterada com sucesso\n");
                                                                            break;}
                                                                            case 4:{
                                                                                printf("QUAL SERA O PREÇO DE COMPRA/ITEM?\n");
                                                                                scanf("%f", &valcompra_alt);
                                                                                valcompra9 = valcompra_alt;
                                                                                printf("Preço alterado com sucesso\n");
                                                                            break;}
                                                                            case 5:{
                                                                                printf("QUAL SERA O PREÇO DE VENDA/ITEM?\n");
                                                                                scanf("%f", &valvenda_alt);
                                                                                valvenda9 = valvenda_alt;
                                                                                printf("Preço alterado com sucesso\n");
                                                                            break;}
                                                                            default: printf("Não foi selecionada nenhuma opcao");
                                                                        }
                                                                    } else {
                                                                        if ((altera == 10) && (item10 == 1)) {
                                                                            printf("O QUE VOCÊ DESEJA ALTERAR DO ITEM:\n\n [1] NOME DO ITEM: %s \n [2] FORNECEDOR: %s \n [3] ESTOQUE: %d \n [4] VALOR DA COMPRA/ITEM:%.2f \n [5] VALOR DA VENDA/ITEM: %.2f \n", nomitem10, fornecedor10, qntd_item10, valcompra10, valvenda10);
                                                                            scanf("%d", &altera1);
                                                                            system("clear");
                                                                            switch (altera1) {
                                                                                case 1:{
                                                                                    printf("QUAL NOVO NOME DO ITEM?\n");
                                                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", nomeitem_alt);
                                                                                    strcpy(nomitem10, nomeitem_alt);
                                                                                    printf("Nome do item alterado com sucesso\n");
                                                                                break;}
                                                                                case 2:{
                                                                                    printf("QUAL NOVO NOME DO FORNECEDOR?\n");
                                                                                    scanf("%*c%[A-Z a-z 0-9 < > , . ; : ) ( ' \" \\ / - Ç ç á Á à À ã Ã â Â ê Ê é É Í í ô Ô õ Õ ú Ú]s", fornecedor_alt);
                                                                                    strcpy(fornecedor10, fornecedor_alt);
                                                                                    printf("Fornecedor alterado com sucesso\n");
                                                                                break;}
                                                                                case 3:{
                                                                                    printf("DESEJA ADCIONAR MAIS QUANTOS NO ESTOQUE?\n");
                                                                                    scanf("%d", &qntd_item_alt);
                                                                                    qntd_item10 = qntd_item10 + qntd_item_alt;
                                                                                    estoquetotal = estoquetotal + qntd_item_alt;
                                                                                    printf("Quantidade no estoque alterada com sucesso\n");
                                                                                break;}
                                                                                case 4:{
                                                                                    printf("QUAL SERA O PREÇO DE COMPRA/ITEM?\n");
                                                                                    scanf("%f", &valcompra_alt);
                                                                                    valcompra10 = valcompra_alt;
                                                                                    printf("Preço alterado com sucesso\n");
                                                                                break;}
                                                                                case 5:{
                                                                                    printf("QUAL SERA O PREÇO DE VENDA/ITEM?\n");
                                                                                    scanf("%f", &valvenda_alt);
                                                                                    valvenda10 = valvenda_alt;
                                                                                    printf("Preço alterado com sucesso\n");
                                                                                break;}
                                                                                default: printf("Não foi selecionada nenhuma opcao");
                                                                            }
                                                                        } else {
                                                                            printf("Item Invalido ou Não Cadastrado!\n");
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    printf("Você não tem permissão suficiente!\nFaça o Login com um Usuario Administrador para poder alterar!\n");
                                }
                            break;}
                            case 0:{
                                menu = 0;
                            break;}
                            default: printf("Opção Invalida\n");
                        }
                        if (menu1 != 0) {
                            printf("\nDeseja continuar? [1]S/[2]N\n");
                            scanf("%d", &menu);
                        }
                    }
                break;}
                case 2:{
                    while (nov1 == 0) {
                        valortot=0.0;
                        while (nov == 2) {
                            system("clear");
                            printf("Frente de Caixa\n");
                            if (item1 == 1) {
                                printf("[01]%s\n", nomitem1);
                            } else {
                                printf("[01]\n");
                            }
                            if (item2 == 1) {
                                printf("[02]%s\n", nomitem2);
                            } else {
                                printf("[02] \n");
                            }
                            if (item3 == 1) {
                                printf("[03]%s\n", nomitem3);
                            } else {
                                printf("[03] \n");
                            }
                            if (item4 == 1) {
                                printf("[04]%s\n", nomitem4);
                            } else {
                                printf("[04] \n");
                            }
                            if (item5 == 1) {
                                printf("[05]%s\n", nomitem5);
                            } else {
                                printf("[05] \n");
                            }
                            if (item6 == 1) {
                                printf("[06]%s\n", nomitem6);
                            } else {
                                printf("[06] \n");
                            }
                            if (item7 == 1) {
                                printf("[07]%s\n", nomitem7);
                            } else {
                                printf("[07] \n");
                            }
                            if (item8 == 1) {
                                printf("[08]%s\n", nomitem8);
                            } else {
                                printf("[08] \n");
                            }
                            if (item9 == 1) {
                                printf("[09]%s\n", nomitem9);
                            } else {
                                printf("[09] \n");
                            }
                            if (item10 == 1) {
                                printf("[10]%s\n", nomitem10);
                            } else {
                                printf("[10] \n");
                            }
                            printf("\nDigite Numero do Item: ");
                            scanf("%d", &venda);
                            if (venda == 1 || venda == 2 || venda == 3 || venda == 4 || venda == 5 || venda == 6 || venda == 7 || venda == 8 || venda == 9 || venda == 10) {
                                printf("Quantidade: ");
                                scanf("%d", &qntd_item);
                            } else {
                                printf("\nItem Inválido\n");
                            }
                            if (venda == 1) {
                                if (qntd_item <= qntd_item1) {
                                    qntd_item1 = qntd_item1 - qntd_item;
                                    valortot = valortot + (qntd_item * valvenda1);
                                    qntd_total = qntd_total + qntd_item;
                                    vend1 = vend1 + qntd_item;
                                    estoquetotal = estoquetotal - qntd_item;
                                    if (qntd_item1 < 20) {
                                        printf("\nPouco Estoque de %s, por favor reponha seu estoque!\n", nomitem1);
                                    }
                                } else {
                                    printf("\nQuantidade do Item é Maior do que o Estoque!\n");
                                }
                            } else {
                                if (venda == 2) {
                                    if (qntd_item <= qntd_item2) {
                                        qntd_item2 = qntd_item2 - qntd_item;
                                        valortot = valortot + (qntd_item * valvenda2);
                                        qntd_total = qntd_total + qntd_item;
                                        vend2 = vend2 + qntd_item;
                                        estoquetotal = estoquetotal - qntd_item;
                                        if (qntd_item2 < 20) {
                                            printf("\nPouco Estoque de %s, por favor reponha seu estoque!\n", nomitem2);
                                        }
                                    } else {
                                        printf("\nQuantidade do Item é Maior do que o Estoque!\n");
                                    }
                                } else {
                                    if (venda == 3) {
                                        if (qntd_item <= qntd_item3) {
                                            qntd_item3 = qntd_item3 - qntd_item;
                                            valortot = valortot + (qntd_item * valvenda3);
                                            qntd_total = qntd_total + qntd_item;
                                            vend3 = vend3 + qntd_item;
                                            estoquetotal = estoquetotal - qntd_item;
                                            if (qntd_item3 < 20) {
                                                printf("\nPouco Estoque de %s, por favor reponha seu estoque!\n", nomitem3);
                                            }
                                        } else {
                                            printf("\nQuantidade do Item é Maior do que o Estoque!\n");
                                        }
                                    } else {
                                        if (venda == 4) {
                                            if (qntd_item <= qntd_item4) {
                                                qntd_item4 = qntd_item4 - qntd_item;
                                                valortot = valortot + (qntd_item * valvenda4);
                                                qntd_total = qntd_total + qntd_item;
                                                vend4 = vend4 + qntd_item;
                                                estoquetotal = estoquetotal - qntd_item;
                                                if (qntd_item4 < 20) {
                                                    printf("\nPouco Estoque de %s, por favor reponha seu estoque!\n", nomitem4);
                                                }
                                            } else {
                                                printf("\nQuantidade do Item é Maior do que o Estoque!\n");
                                            }
                                        } else {
                                            if (venda == 5) {
                                                if (qntd_item <= qntd_item5) {
                                                    qntd_item5 = qntd_item5 - qntd_item;
                                                    valortot = valortot + (qntd_item * valvenda5);
                                                    qntd_total = qntd_total + qntd_item;
                                                    vend5 = vend5 + qntd_item;
                                                    estoquetotal = estoquetotal - qntd_item;
                                                    if (qntd_item5 < 20) {
                                                        printf("\nPouco Estoque de %s, por favor reponha seu estoque!\n", nomitem5);
                                                    }
                                                } else {
                                                    printf("\nQuantidade do Item é Maior do que o Estoque!\n");
                                                }
                                            } else {
                                                if (venda == 6) {
                                                    if (qntd_item <= qntd_item6) {
                                                        qntd_item6 = qntd_item6 - qntd_item;
                                                        valortot = valortot + (qntd_item * valvenda6);
                                                        qntd_total = qntd_total + qntd_item;
                                                        vend6 = vend6 + qntd_item;
                                                        estoquetotal = estoquetotal - qntd_item;
                                                        if (qntd_item6 < 20) {
                                                            printf("\nPouco Estoque de %s, por favor reponha seu estoque!\n", nomitem6);
                                                        }
                                                    } else {
                                                        printf("\nQuantidade do Item é Maior do que o Estoque!\n");
                                                    }
                                                } else {
                                                    if (venda == 7) {
                                                        if (qntd_item <= qntd_item7) {
                                                            qntd_item7 = qntd_item7 - qntd_item;
                                                            valortot = valortot + (qntd_item * valvenda7);
                                                            qntd_total = qntd_total + qntd_item;
                                                            vend7 = vend7 + qntd_item;
                                                            estoquetotal = estoquetotal - qntd_item;
                                                            if (qntd_item7 < 20) {
                                                                printf("\nPouco Estoque de %s, por favor reponha seu estoque!\n", nomitem7);
                                                            }
                                                        } else {
                                                            printf("\nQuantidade do Item é Maior do que o Estoque!\n");
                                                        }
                                                    } else {
                                                        if (venda == 8) {
                                                            if (qntd_item <= qntd_item8) {
                                                                qntd_item8 = qntd_item8 - qntd_item;
                                                                valortot = valortot + (qntd_item * valvenda8);
                                                                qntd_total = qntd_total + qntd_item;
                                                                vend8 = vend8 + qntd_item;
                                                                estoquetotal = estoquetotal - qntd_item;
                                                                if (qntd_item8 < 20) {
                                                                    printf("\nPouco Estoque de %s, por favor reponha seu estoque!\n", nomitem8);
                                                                }
                                                            } else {
                                                                printf("\nQuantidade do Item é Maior do que o Estoque!\n");
                                                            }
                                                        } else {
                                                            if (venda == 9) {
                                                                if (qntd_item <= qntd_item9) {
                                                                    qntd_item9 = qntd_item9 - qntd_item;
                                                                    valortot = valortot + (qntd_item * valvenda9);
                                                                    qntd_total = qntd_total + qntd_item;
                                                                    vend9 = vend9 + qntd_item;
                                                                    estoquetotal = estoquetotal - qntd_item;
                                                                    if (qntd_item9 < 20) {
                                                                        printf("\nPouco Estoque de %s, por favor reponha seu estoque!\n", nomitem9);
                                                                    }
                                                                } else {
                                                                    printf("\nQuantidade do Item é Maior do que o Estoque!\n");
                                                                }
                                                            } else {
                                                                if (venda == 10) {
                                                                    if (qntd_item <= qntd_item10) {
                                                                        qntd_item10 = qntd_item10 - qntd_item;
                                                                        valortot = valortot + (qntd_item * valvenda10);
                                                                        qntd_total = qntd_total + qntd_item;
                                                                        vend10 = vend10 + qntd_item;
                                                                        estoquetotal = estoquetotal - qntd_item;
                                                                        if (qntd_item10 < 20) {
                                                                            printf("\nPouco Estoque de %s, por favor reponha seu estoque!\n", nomitem10);
                                                                        }
                                                                    } else {
                                                                        printf("\nQuantidade do Item é Maior do que o Estoque!\n");
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            printf("Terminar Compra? 1[S]/2[N]\n");
                            scanf("%d", &nov);
                        }
                        nov = 2;
                        if ((venda == 1 || venda == 2 || venda == 3 || venda == 4 || venda == 5 || venda == 6 || venda == 7 || venda == 8 || venda == 9 || venda == 10) || valortot > 0.0) {
                            system("clear");
                            printf("Escolha como pagar: [1] DINHEIRO / [2] CARTAO\n");
                            scanf("%d", &pagamento);
                            if (pagamento == 1) {
                                while (dinheiro < valortot) {
                                    system("clear");
                                    printf("Valor Total = %.2f", valortot);
                                    printf("\nDinheiro Recebido: ");
                                    scanf("%f", &dinheiro);
                                    if (dinheiro < valortot) {
                                        printf("\nValor total é Maior!\n");
                                    } else {
                                        troco = dinheiro - valortot;
                                        printf("\nTROCO: R$ %.2f", troco);
                                    }
                                }
                            }
                            if (pagamento == 2) {
                                system("clear");
                                printf("Valor Total = %.2f", valortot);
                                printf("\n[1] CREDITO\\[2] DEBITO\n");
                                scanf("%d", &cart);
                                printf("\nPAGAMENTO PELO CARTÃO EFETUADO COM SUCESSO!\n");
                            }
                        }
                        printf("\nDeseja Cadastrar Dotzlan? [1]S/[2]N\n");
                        scanf("%d", &dotzc);
                        if (dotzc == 1) {
                            system("clear");
                            printf("Digite o CPF: \n");
                            scanf("%*c%[0-9 . -]s", cpf);
                            if (c1 == 0) {
                                strcpy(cpf1, cpf);
                                c1 = 1;
                            } else {
                                if ((c2 == 0) && ((strcmp(cpf, cpf1) != 0) && (c1 != 0))) {
                                    strcpy(cpf2, cpf);
                                    c2 = 1;
                                } else {
                                    if ((c3 == 0) && (((strcmp(cpf, cpf1) != 0) && (strcmp(cpf, cpf2) != 0)) && ((c1 != 0) && (c2 != 0)))) {
                                        strcpy(cpf3, cpf);
                                        c3 = 1;
                                    } else {
                                        if ((c4 == 0) && (((strcmp(cpf, cpf1) != 0) && (strcmp(cpf, cpf2) != 0) && (strcmp(cpf, cpf3) != 0) && ((c1 != 0) && (c2 != 0) && (c3 != 0))))) {
                                            strcpy(cpf4, cpf);
                                            c4 = 1;
                                        } else {
                                            if ((c5 == 0) && (((strcmp(cpf, cpf1) != 0) && (strcmp(cpf, cpf2) != 0) && (strcmp(cpf, cpf3) != 0) && (strcmp(cpf, cpf4) != 0) && ((c1 != 0) && (c2 != 0) && (c3 != 0) && (c4 != 0))))) {
                                                strcpy(cpf5, cpf);
                                                c5 = 1;
                                            } else {
                                                if (((c1 = 1) && (c2 = 1) && (c3 = 1) && (c4 = 1) && (c5 = 1)) && ((strcmp(cpf, cpf1) != 0) && (strcmp(cpf, cpf2) != 0) && (strcmp(cpf, cpf3) != 0) && (strcmp(cpf, cpf4) != 0) && (strcmp(cpf, cpf5) != 0))) {
                                                    printf("NÃO É MAIS POSSIVEL CADASTRAR.\n");
                                                } else {
                                                    printf("CPF já cadastrado, os pontos serão adicionados!\n");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((strcmp(cpf, cpf1) == 0)) {
                                dotz = valortot / 2;
                                cpf1_p = cpf1_p + dotz;
                                printf("Voce tem %d Pontos no DOTZLAN\n\n", cpf1_p);
                            } else {
                                if (strcmp(cpf, cpf2) == 0) {
                                    dotz = valortot / 2;
                                    cpf2_p = cpf2_p + dotz;
                                    printf("Voce tem %d Pontos no DOTZLAN\n\n", cpf2_p);
                                } else {
                                    if (strcmp(cpf, cpf3) == 0) {
                                        dotz = valortot / 2;
                                        cpf3_p = cpf3_p + dotz;
                                        printf("Voce tem %d Pontos no DOTZLAN\n\n", cpf3_p);
                                    } else {
                                        if (strcmp(cpf, cpf4) == 0) {
                                            dotz = valortot / 2;
                                            cpf4_p = cpf4_p + dotz;
                                            printf("Voce tem %d Pontos no DOTZLAN\n\n", cpf4_p);
                                        } else {
                                            if (strcmp(cpf, cpf5) == 0) {
                                                dotz = valortot / 2;
                                                cpf5_p = cpf5_p + dotz;
                                                printf("Voce tem %d Pontos no DOTZLAN\n\n", cpf5_p);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        printf("[1] MENU PRINCIPAL\n");
                        scanf("%d", &nov1);
                        nov = 2;
                    }
                    nov1 = 0;
                break;}
                case 3:{
                    while (listanov == 1) {
                        system("clear");
                        printf("Escolha o que listar: \n");
                        printf("[1]Itens [2]Estoque [3]Mais Vendidos [4]DotzLan\n");
                        scanf("%d", &lista);
                        switch (lista) {
                            case 1:{
                                printf("Nº   Nome\t\tFornecedor\tCompra/Item\tVenda/Item\n");
                                if (item1 == 1) {
                                    printf("[01] %s\t\t%s\t\t   %5.2f\t   %5.2f\n", nomitem1, fornecedor1, valcompra1, valvenda1);
                                } else {
                                    printf("[01] (vazio)\t\n");
                                }
                                if (item2 == 1) {
                                    printf("[02] %s\t\t%s\t\t   %5.2f\t   %5.2f\n", nomitem2, fornecedor2, valcompra2, valvenda2);
                                } else {
                                    printf("[02] (vazio)\n");
                                }
                                if (item3 == 1) {
                                    printf("[03] %s\t\t%s\t\t   %5.2f\t   %5.2f\n", nomitem3, fornecedor3, valcompra3, valvenda3);
                                } else {
                                    printf("[03] (vazio)\n");
                                }
                                if (item4 == 1) {
                                    printf("[04] %s\t\t%s\t\t   %5.2f\t   %5.2f\n", nomitem4, fornecedor4, valcompra4, valvenda4);
                                } else {
                                    printf("[04] (vazio)\n");
                                }
                                if (item5 == 1) {
                                    printf("[05] %s\t\t%s\t\t   %5.2f\t   %5.2f\n", nomitem5, fornecedor5, valcompra5, valvenda5);
                                } else {
                                    printf("[05] (vazio)\n");
                                }
                                if (item6 == 1) {
                                    printf("[06] %s\t\t%s\t\t   %5.2f\t   %5.2f\n", nomitem6, fornecedor6, valcompra6, valvenda6);
                                } else {
                                    printf("[06] (vazio)\n");
                                }
                                if (item7 == 1) {
                                    printf("[07] %s\t\t%s\t\t   %5.2f\t   %5.2f\n", nomitem7, fornecedor7, valcompra7, valvenda7);
                                } else {
                                    printf("[07] (vazio)\n");
                                }
                                if (item8 == 1) {
                                    printf("[08] %s\t\t%s\t\t   %5.2f\t   %5.2f\n", nomitem8, fornecedor8, valcompra8, valvenda8);
                                } else {
                                    printf("[08] (vazio)\n");
                                }
                                if (item9 == 1) {
                                    printf("[09] %s\t\t%s\t\t   %5.2f\t   %5.2f\n", nomitem9, fornecedor9, valcompra9, valvenda9);
                                } else {
                                    printf("[09] (vazio)\n");
                                }
                                if (item10 == 1) {
                                    printf("[10] %s\t\t%s\t\t   %5.2f\t   %5.2f\n", nomitem10, fornecedor10, valcompra10, valvenda10);
                                } else {
                                    printf("[10] (vazio)\n");
                                }

                            break;}
                            case 2:{
                                printf("Itens em Estoque:\n");
                                printf("Nome\t\t\t\t\tQuantidade\n\n");
                                if (item1 == 1) {
                                    printf("%s\t\t\t\t\t%6d\n", nomitem1, qntd_item1);
                                }
                                if (item2 == 1) {
                                    printf("%s\t\t\t\t\t%6d\n", nomitem2, qntd_item2);
                                }
                                if (item3 == 1) {
                                    printf("%s\t\t\t\t\t%6d\n", nomitem3, qntd_item3);
                                }
                                if (item4 == 1) {
                                    printf("%s\t\t\t\t\t%6d\n", nomitem4, qntd_item4);
                                }
                                if (item5 == 1) {
                                    printf("%s\t\t\t\t\t%6d\n", nomitem5, qntd_item5);
                                }
                                if (item6 == 1) {
                                    printf("%s\t\t\t\t\t%6d\n", nomitem6, qntd_item6);
                                }
                                if (item7 == 1) {
                                    printf("%s\t\t\t\t\t%6d\n", nomitem7, qntd_item7);
                                }
                                if (item8 == 1) {
                                    printf("%s\t\t\t\t\t%6d\n", nomitem8, qntd_item8);
                                }
                                if (item9 == 1) {
                                    printf("%s\t\t\t\t\t%6d\n", nomitem9, qntd_item9);
                                }
                                if (item10 == 1) {
                                    printf("%s\t\t\t\t\t%6d\n", nomitem10, qntd_item10);
                                }
                                if (item1 == 0 && item2 == 0 && item3 == 0 && item4 == 0 && item5 == 0 && item6 == 0 && item7 == 0 && item8 == 0 && item9 == 0 && item10 == 0) {
                                    printf("Nenhum item em estoque\n");
                                } else {
                                    printf("\nEstoque Total: %d\n", estoquetotal);
                                }
                            break;}
                            case 3:{
                                system("clear");
                                if (vend1 > rankma) {
                                    strcpy(itemma, nomitem1);
                                    rankma = vend1;
                                } else {
                                    if (vend2 > rankma) {
                                        strcpy(itemma, nomitem2);
                                        rankma = vend2;
                                    } else {
                                        if (vend3 > rankma) {
                                            strcpy(itemma, nomitem3);
                                            rankma = vend3;
                                        } else {
                                            if (vend4 > rankma) {
                                                strcpy(itemma, nomitem4);
                                                rankma = vend4;
                                            } else {
                                                if (vend5 > rankma) {
                                                    strcpy(itemma, nomitem5);
                                                    rankma = vend5;
                                                } else {
                                                    if (vend6 > rankma) {
                                                        strcpy(itemma, nomitem6);
                                                        rankma = vend6;
                                                    } else {
                                                        if (vend7 > rankma) {
                                                            strcpy(itemma, nomitem7);
                                                            rankma = vend7;
                                                        } else {
                                                            if (vend8 > rankma) {
                                                                strcpy(itemma, nomitem8);
                                                                rankma = vend8;
                                                            } else {
                                                                if (vend9 > rankma) {
                                                                    strcpy(itemma, nomitem9);
                                                                    rankma = vend9;
                                                                } else {
                                                                    if (vend10 > rankma) {
                                                                        strcpy(itemma, nomitem10);
                                                                        rankma = vend10;
                                                                    } else {
                                                                        printf("Não possui item mais vendido!\n");
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                if (rankma > 0) {
                                    printf("O item mais vendido com %d unidades vendidas é: %s", rankma, itemma);
                                }
                            break;}
                            case 4:{
                                printf("CPF\t\t\t\t\tPontuação\n\n");
                                if (c1 == 1) {
                                    printf("%s\t\t\t%10d\n", cpf1, cpf1_p);
                                }
                                if (c2 == 1) {
                                    printf("%s\t\t\t%10d\n", cpf2, cpf2_p);
                                }
                                if (c3 == 1) {
                                    printf("%s\t\t\t%10d\n", cpf3, cpf3_p);
                                }
                                if (c4 == 1) {
                                    printf("%s\t\t\t%10d\n", cpf4, cpf4_p);
                                }
                                if (c5 == 1) {
                                    printf("%s\t\t\t%10d\n", cpf5, cpf5_p);
                                }
                                if (c1 == 0 && c2 == 0 && c3 == 0 && c4 == 0 && c5 == 0) {
                                    printf("Nenhum CPF cadastrado.\n");
                                }
                            break;}
                        }
                        printf("\n\nDeseja listar mais alguma coisa?[1]SIM|[2]NAO\n");
                        scanf("%d", &listanov);
                    }
                    listanov = 1;
                break;}
                case 0:{
                    system("clear");
                    printf("Saída efetuada\n");
                    pas = 0;
                break;}
            }
        }
    } else {
        printf("Número de Tentativas Zerada... Tente Login Depois!\n");
    }
    return (EXIT_SUCCESS);
}
