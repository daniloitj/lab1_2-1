// Escreva um programa que leia duas strings e as coloque na tela. Imprima também a segunda letra de cada string //
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[10],r[10];
    printf("Digite uma Palavra\n");
    gets(s);
    printf("Digite outra palavra\n");
    gets(r);
    printf("A Segunda letra da palavra %s = %c\n",s,s[1]);
    printf("A Segunda letra da palavra %s = %c\n",r,r[1]);
    return(0);
} 
