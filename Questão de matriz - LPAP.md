//Criação de uma matriz quadrática entre 1 e 8 - Víctor BM
#include <stdio.h>

int main (){
    char matriz [8][8]; // 8 linhas e 8 colunas
    // tamanho necessário para a conclusão da questão
    int x, y; // variáveis x e y correspondentes a linha e coluna
    float num; // variável do número
    printf ("Digite um número entre 1 e 8\n");
    scanf ("%f", &num);
    if ((int)num == num && num >= 1 && num <=8){
        // se a resposta em inteiro for maior que 1 e menor que 8
        for (x = 0; x < num; x++){ // loop de linhas
            for (y = 0; y < num; y++){ // loop de colunas
                if (x - y <= 0){
        // se for a própria diagonal principal            
        // se linha estiver acima da diagonal principal     
        // se a coluna estiver a direita da diagonal principal
                    matriz [x][y] = '1';
        // escreve '1' no espaço correspondente na matriz           
                }
                else{
        // se não cumprir nenhum dos requisitos acima
        // escreve '*' no espaço correspondente na matriz 
                    matriz [x][y] = '*';
                }
            }
        }
        for (x = 0; x < num; x++){ // loop de linhas
            for (y = 0; y < num; y++){ // loop de colunas
                printf ("%c", matriz[x][y]);
        // escreve o espaço correspondente na matriz        
            }
            printf ("\n"); // pula linha
        }
        // no final, temos uma matriz completa
    }
    else{ // se a resposta não for inteiro ou não está entre 1 e 8
        printf ("Erro, número inválido"); // informa erro
    }
    return (0);
}
