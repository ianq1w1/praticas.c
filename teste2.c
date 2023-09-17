#include <stdio.h>
#include <string.h>


typedef struct {
    char nome[20];
    int idade;
}Pessoa;

int somar(int *numero){
    if(*numero < 10){
        for(int i = *numero; i <= 10; i++){
            (*numero)++;
        }
    }

    //return printf("este é o valor da variável x na function somar : %d\n", numero);
    return *numero;
}

int somar2(int numero){
    if(numero < 10){
        for(int i = numero; i <= 10; i++){
            numero++;
        }
    }
    return printf("este é o valor da variável x na function somar : %d\n", numero);
    return printf("este é o endereço de memoria da var x na function somar : %p\n", &numero);
}

int main(){

    int x = 4;

    int *pointer = &x;

    printf("este é o valor da variável x : %d\n", x);
    printf("este é o endereço de memória de x passando um ponteiro : %p\n", (void *) pointer);
    printf("este é o endereço de memória do pointer : %p\n", (void *) &pointer);

    int q = *pointer;

    printf("este é o valor da variavel q  : %d\n", q);
    printf("este é o endereço de memoria de q : %p\n", (void *) &q);
    
    somar(&x);
    somar2(x);

    if(x > 10){
         q = x;
    }
        
        printf("este é o valor da variavel q  : %d\n", q);
        printf("este é o endereço de memoria de q : %p\n", (void *) &q);
        printf("este é o valor da variável x dentro do main : %d\n", x);
        printf("este é o endereço de memória de x passando um ponteiro : %p\n", (void *) pointer);

    int array [5] = {1, 2 ,3 ,4 ,5};

   // int *arrpointer = &array;

       // printf("este é o endereço de memória do array  : %p\n", (void *) arrpointer);

    Pessoa p1; 

    strcpy(p1.nome, "jão");
    p1.idade = 20;

    printf("esta é o nome da estrutura p1: %s\n", p1.nome);

    printf("endereço de memória de p1: %p\n", (void *) &p1);
    printf("endereço de memória de p1.nome: %p\n", (void *) &p1.nome);
    printf("endereço de memória de p1.idade: %p\n", (void *) &p1.idade);

    return 0;
}