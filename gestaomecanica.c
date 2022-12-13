#include<stdio.h>
#include<stdlib.h>
int main(){
    float preco,precod,d,valord;
    int w = 0,x,y,z;
    char nome[100],nomep[100],numerocd[100],p,cpf[100],numero[100];

    while(w != 4){
        printf("**************************************************\n");
        printf("                 Mecanica do Tiao          \n");
        printf("**************************************************\n");
        printf("\nEscolha sua opcao:\n");
        printf("\n1-Cliente \t2-Pecas \t3-Venda  \t4-Sair\n");
        scanf("%d",&w);

    

        if(w==1){
            while(x != 3){
            system("cls");
            printf("**************************************************\n");
            printf("                  MENU-Cliente                    \n");
            printf("**************************************************\n");
            printf("1-Cadastrar Cliente\t2-Visualizar Cliente\t3-Voltar \n");
            scanf("%d",&x);

            switch(x){
                case 1:
                    printf("Nome:");
                    setbuf(stdin, NULL);
                    gets(nome);
                    printf("Telefone:");
                    scanf("%s",&numero);
                    printf("CPF:");
                    scanf("%s",&cpf);
                    printf("Aperte enter para continuar...");
                    setbuf(stdin, NULL);
                    p = getc(stdin);
                    setbuf(stdin, NULL);
                    break;

                case 2:
                    printf("\nNome:%s",nome);
                    printf("\tTelefone:%s",numero);
                    printf("\tCPF:%s",cpf);
                    printf("\nAperte enter para continuar...");
                    setbuf(stdin, NULL);
                    p = getc(stdin);
                    break;

                    case 3:
                    break;

                default:printf("\nOpcao invalida!\n");
                printf("Aperte enter para continuar...");
                setbuf(stdin, NULL);
                p = getc(stdin);
                setbuf(stdin, NULL);
            }
        
          }
        }
    
    if(w==2){
        while(y != 3){
        system("cls");
        printf("**************************************************\n");
        printf("                  MENU-Pecas                      \n");
        printf("**************************************************\n");
        printf("1-Cadastrar Peca\t2-Visualizar Peca\t3-Voltar\n");
        scanf("%d",&y);
        
        switch(y){
            case 1:printf("Nome da peca:");
                   setbuf(stdin, NULL);
                   gets(nomep);
                   printf("Codigo de serie:");
                   scanf("%s",&numerocd);
                   printf("Preco:");
                   scanf("%f",&preco);
                   printf("Aperte enter para continuar...");
                   setbuf(stdin, NULL);
                   p = getc(stdin);
                   setbuf(stdin, NULL);
                   break;

            case 2:printf("Peca:%s",nomep);
                   printf("\tCodigo de serie:%s",numerocd);
                   printf("\tPreco:%.2f",preco);
                   printf("\nAperte enter para continuar...");
                   setbuf(stdin, NULL);
                   p = getc(stdin);
                   setbuf(stdin, NULL);
                   break;

                   case 3:
                   break;

            default:printf("\nOpcao invalida!\n");
            printf("Aperte enter para continuar...");
            setbuf(stdin, NULL);
            p = getc(stdin);
            setbuf(stdin, NULL);
        }
      }
    }
    if(w==3){
        while(z != 4){
        system("cls");
        printf("**************************************************\n");
        printf("                  MENU-Vendas                     \n");
        printf("**************************************************\n");
        printf("1-Cliente\t2-Peca  \t3-Venda \t4-Voltar\n");
        scanf("%d",&z);

        switch(z){
            case 1:printf("Nome:%s",nome);
                   printf("\tTelefone:%s",numero);
                   printf("\tCPF:%s",cpf);
                   printf("\nAperte enter para continuar...");
                   setbuf(stdin, NULL);
                   p = getc(stdin);
                   setbuf(stdin, NULL);
                   break;

            case 2:printf("Peca: %s",nomep);
                   printf("\tCodigo de serie:%s",numerocd);
                   printf("\tValor:%.2f",preco);
                   printf("\nAperte enter para continuar...");
                   setbuf(stdin, NULL);
                   p = getc(stdin);
                   setbuf(stdin, NULL);
                   break;

            case 3:printf("Digite o desconto:");
                   scanf("%f",&d);
                   precod=preco-((d/100)*preco);
                   printf("Total a pagar:%.2f",precod);
                   printf("\nAperte enter para continuar...");
                   setbuf(stdin, NULL);
                   p = getc(stdin);
                   setbuf(stdin, NULL);

            case 4:
            break;

            default:printf("\nOpcao invalida!\n");
            printf("Aperte enter para continuar...");
            setbuf(stdin, NULL);
            p = getc(stdin);
            setbuf(stdin, NULL);
       
        }
      }
    }
    system("cls");
  }
}