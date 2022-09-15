//- 👋 Hi, I’m @VykDMorais
//- 👀 I’m interested in mechatronics and communism :)
//- 🌱 I’m currently learning mechatronics and communism :)
//- 💞️ I’m looking to collaborate on world using mechatronics knowledge and implementing communism 
//- 📫 How to reach me @VykD12 on twitter

// Código psts calcular fatorial em uma função - LPAP
// Código do professor (p1): ![image](https://user-images.githubusercontent.com/108690989/190434930-5c40d20f-5ce5-4297-873a-bee55c530270.png) 
// Código do professor (p2): ![image](https://user-images.githubusercontent.com/108690989/190435141-416a5f85-b0d3-4682-8994-7aff709c2f21.png)

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
    float num;
    float result = 1;
    while (num >= 0 || num <= 20){
        printf ("Informe um número natural entre 0 e 20\n");
        scanf ("%f", &num);
        if ((int)num == num){
            if (num == 0){
                printf ("O resultado da expressão para N = %f é: ", num);
                printf ("R = %.2f\n", result);
                break;
            }
            else if (num > 0 && num <= 20){
                result = fatorial (num);
                printf ("O resultado da expressão para N = %f é: ", num);
                printf ("R = %0.6f\n", result);
                break;
            }
        }
        else{
            continue;
        }
    }
    return (0);
}
