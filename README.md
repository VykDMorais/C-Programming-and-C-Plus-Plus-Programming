//- 👋 Hi, I’m @VykDMorais
//- 👀 I’m interested in ...
//- 🌱 I’m currently learning ...
//- 💞️ I’m looking to collaborate on ...
//- 📫 How to reach me ...

// Código psts calcular fatorial em uma função - LPAP
// Não exclui float, devo atualizar o código logo logo
#include <stdio.h>

float fatorial (int num){
    int i;
    float fato = 1, r = 1;
    for (i = 1;i <= num; i++){
        fato = fato*i;
        r = r + 1/fato;
    }
    return (r);
}

int main (){
    int num;
    float result = 1;
    while (num >= 0 || num <= 20){
        printf ("Informe um número natural entre 0 e 20\n");
        scanf ("%d", &num);
        if (num == 0){
            printf ("O resultado da expressão para N = %d é: ", num);
            printf ("R = %.2f\n", result);
            break;
        }
        else if (num > 0 && num <= 20){
            result = fatorial (num);
            printf ("O resultado da expressão para N = %d é: ", num);
            printf ("R = %0.6f\n", result);
            break;
        }
        else{
            continue;
        }
    }
    return (0);
}
