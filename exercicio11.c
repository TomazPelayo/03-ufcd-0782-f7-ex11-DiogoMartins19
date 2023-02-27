// Escreva o seu código a seguir

#include<stdio.h> //Inicio do código 

int main() { //Inicio do código 

        int num1, num2;//Definir os inteiros
        int res1;//Definir os inteiros

        printf("Qual a largura da casa em metros?\n");//Escrever
        scanf("%d", &num1);//Ler o número inserido pelo utilizador do terminal
        printf("Qual o comprimento da casa em metros?\n");//Escrever
        scanf("%d", &num2);//Ler o número inserido pelo utilizador do terminal

        res1=num1 * num2;//Definir o res1 para fazer a conta

        printf("A área da casa é de %d metros quadrados...\n", res1);//Escrever
        return 0;//Final do código

}//Final do código
