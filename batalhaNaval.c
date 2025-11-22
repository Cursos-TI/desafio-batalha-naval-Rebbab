#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


// desafio no nivel novato.
int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    
    // Definindo o tamanho do tabuleiro
    int linhas = 10, colunas = 10;

    // Coordenadas dos navios
    int navioVertical[3][2];  
    int navioHorizontal[3][2];

    // Navio vertical começando em 2,4
    int xInicialV = 2;
    int yInicialV = 4;

    for (int i = 0; i < 3; i++) {
        navioVertical[i][0] = xInicialV + i; // X aumenta verticalmente
        navioVertical[i][1] = yInicialV;
    }

    // Navio horizontal começando em (6, 1)
    int xInicialH = 6;
    int yInicialH = 1;

    for (int i = 0; i < 3; i++) {
        navioHorizontal[i][0] = xInicialH;
        navioHorizontal[i][1] = yInicialH + i; // Y aumenta horizontalmente
    }

    //Print das coordenadas
    
    printf("=== Coordenadas do Navio Vertical ===\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte %d -> (X: %d, Y: %d)\n", 
               i + 1, navioVertical[i][0], navioVertical[i][1]);
    }

    printf("\n=== Coordenadas do Navio Horizontal ===\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte %d -> (X: %d, Y: %d)\n", 
               i + 1, navioHorizontal[i][0], navioHorizontal[i][1]);
    }

    return 0;
}
    

