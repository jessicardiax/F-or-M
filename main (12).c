//Faça um Programa que verifique se uma letra digitada é "F" ou "M". 
//Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido

#include <stdio.h>
int main(){
    char sexo,F,M;
    printf("informe seu sexo:");
    scanf("%c",&sexo);
    if (sexo=='F'){
        printf("Feminino %c",F);
    }
    else if (sexo=='M'){
        printf("Masculino %c", M);
    }
    else{
        printf("Sexo invalido ");
    }
    return 0;
}