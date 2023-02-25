#include <stdio.h>
#include <stdlib.h>

/*Funcao que o usuario escolhe converter ou sair.
  Retorna o numero da opcao escolhida.*/
int Comeco(){
    int i;
    printf("\n\033[1m1- Converter\n2- Sair\033[m\n");
    scanf("%d", &i);
    return i;
}
/*Funcao que apresenta as opcoes de comprimento.
  Retorna o numero da opcao escolhida.*/
int Opcoes(){
    int i;
    printf("\n\033[1m1- Quilometro\n2- Hectometro\n3- Decametro\n4- Metro\n5- Decimetro\n6- Centimetro\n7- Milimetro\n\033[m");
    scanf("%d",&i);
    return i;
}
/*Funcao que printa uma sequencia de asteriscos.*/
void Asterisco(int n){
    int i;
    char a;
    a = '*';
    for(i=0; i<n; i++) printf("\033[1;33m%c\033[m",a);
    printf("\n");
}
/*Funcao que printa o nome da calculadora.*/
void Nome(){
    Asterisco(100);
    printf("\t\t\033[1;35m###### CONVERSOR DE COMPRIMENTO #######\033[m\n");
}
/*Funcao principal que conecta tudo.*/
int main(){
    int n1, n2, converte;
    float valor, medida[7]={1000, 100, 10, 1, 0.1, 0.01, 0.001};
    char comprimento[7][3]={"km", "hm", "dam", "m", "dm", "cm", "mm"};
    Nome();
    converte = Comeco();
    while(converte == 1){
        printf("\n\033[1;32mQual unidade sera convertida: \033[m");
        n1 = Opcoes();
        printf("\n\033[1;32mDigite ao valor do comprimento: \033[m");
        scanf("%f", &valor);
        printf("\n\033[1;32mPara qual unidade sera convertida: \033[m");
        n2 = Opcoes();
        printf("\n\033[1;34m# %f %s correspondem a %f %s\n\033[m", valor, comprimento[n1-1], valor*medida[n1-1]/medida[n2-1], comprimento[n2-1]);
        converte = Comeco();
    }
    Asterisco(100);
    return 0;
}