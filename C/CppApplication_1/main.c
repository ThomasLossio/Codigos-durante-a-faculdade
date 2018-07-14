#include <stdio.h>
#include <string.h>
										// CAMPO PARA ANIVERSARIO!!! PARA IR PARA A AGENDA!!!
		typedef struct{
                    int dia;
                    int mes;
                    int ano;	
		}a;
		
										// NUMERO E DDD!!! PARA IR PARA A AGENDA!!!
		typedef struct{
                    float DDD;
                    float numero;
		}b;
		
										// ENDEREÇO!!!! PARA IR PARA A AGENDA!!! 
		typedef struct{
                    char rua[30];
                    int numerocasa;
                    char complemento[30];
                    char bairro[30];
                    float CEP;
                    char cidade[30];
                    char estado[30];
                    char pais[30];	
		}c;
		
										// AGENDA!!! PRIMEIRA PARTE!!!
		
		
		typedef struct{
                    char nome[30];
                    char email[30];
                    char OBS[100];                   
                    a aniversario;
                    b numero ;
                    c endereco;	
		}agenda;
                
	int main(void){
	
            agenda var[100];
            int i;
            for(i = 0; i<6 ; i++){
                printf("Digite um nome: ");
                scanf("%s", var[i].nome);
                var[i].endereco.numerocasa = i + 1;
                printf("%i\n", var[i].endereco.numerocasa);
                printf("%s\n", var[i].nome);
            }
            //scanf("%i", &var[0].endereco.numerocasa);
            //printf("%i", var[0].endereco.numerocasa);
            printf("\nDigite o nome da pessoa: ");
            char n[30];
            int k=0;
            scanf("%s", n);
            for(i=0; i<100; i++){
                if(strcmp(var[i].nome, n) == 0){
                    printf("\n%s foi encontrado no cadastro e o número da casa é: %d\n", var[i].nome, var[i].endereco.numerocasa);
                    k=1;
                }
            }
            if(k==0){
                printf("\nNome Não Cadastrado!");
            }		
		
	
	
	
		
		return 0;
	}
        
        