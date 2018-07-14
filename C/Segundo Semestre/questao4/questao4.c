#include <stdio.h>
#include <string.h>

int main()
  {
    char string[20];

    printf("\n");
    printf("Convertendo uma string para maiúsculas\n");
    printf("------------------------------------\n");
    printf("\n");
    printf("Entre com a string :");
    scanf("%s",&string);
    printf("\n");
    printf("string digitada : %s\n",string);
    printf("\n");
    printf("Convertendo para maiúsculas : %s\n",strupr(string));
    printf("%s", string);
    return(0);
  }

