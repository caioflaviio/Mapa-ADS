#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

struct contatos{
    int codigo;
    char nome[30], telefone[15], endereco[100], email[100];
};

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    int escolha, contador = 1, i;
    struct contatos cliente[6];

    do{

    printf("Escolha 1 para CADASTRAR\n");
    printf("Escolha 2 para LISTA DE CADASTRO\n");
    printf("Escolha 0 para ENCERRAR\n\n");
    scanf("%d", &escolha);

    fflush(stdin);

    system("cls");

    switch(escolha){
        case 1:
            if(contador <= 5){

            printf("CADASTRAR NOVO CONTATO\n");
            printf("Cadastro: %d\n", contador);
            printf("Nome: ");
            fgets(cliente[contador].nome, 30, stdin);
            fflush(stdin);

            printf("Telefone: ");
            fgets(cliente[contador].telefone, 15, stdin);
            fflush(stdin);

            printf("Endereço: ");
            fgets(cliente[contador].endereco, 100, stdin);
            fflush(stdin);

            printf("E-mail: ");
            fgets(cliente[contador].email, 100, stdin);
            fflush(stdin);


            printf("\n");

            contador++;

            system("cls");

            }else{
                printf("Lista de contatos cheia!\n\n");
            }

        break;

        case 2:

            if(contador == 1){
                printf("Lista vazia!\n\n");
            }else{

            printf("LISTA DE CADASTRO\n");

            }

            for(i=1; i<contador; i++){
                printf("Cadastro: %d\n", i);
                printf("Nome: %s", cliente[i].nome);
                printf("Telefone: %s", cliente[i].telefone);
                printf("Endereço: %s", cliente[i].endereco);
                printf("E-mail: %s\n", cliente[i].email);



                }


                system("pause\n");
                system("cls");
        break;

        case 0:
            printf("FIM DA EXECUÇÃO!\n\n");
        break;

        default:
            printf("OPÇÃO INVÁLIDA\n\n");

            system("pause");


            system("cls");

        }
    }while(escolha!=0);
    return(0);

}
