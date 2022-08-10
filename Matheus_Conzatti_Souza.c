#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void listaProdutos(){
    printf("Codigo,  Nome,         Valor\n");
    printf("(1)      Fruta,        15.00\n");
    printf("(2)      Carne,        25.70\n");
    printf("(3)      Leite,        17.55\n");
    printf("(4)      Ovos,         12.20\n");
    printf("(5)      Bolacha,      5.50\n");
    printf("(6)      Biscoito,     5.50\n");
    printf("(7)      Limpeza,      28.00\n");
    printf("(8)      Bebida,       18.80\n");
    printf("(9)      Beleza,       20.30\n");
    printf("(10)     Eletronicos,  100.00\n");
}

void listaProdutos();

//Sistema de Estoque

int main(){
    int qtdProduto, escolha = 0;
    float pagar, troco, pagamento, novoPagamento = 0;
    char cod = '0';

    while(cod != 'F'){
        listaProdutos();

        printf("\n");
        
        printf("Informe o codigo do produto: \n >");
        scanf("%d", &escolha);
        
        if(escolha == 1){
            printf("Quantidade comprada:\n >");
            scanf("%i", &qtdProduto);

            pagar = qtdProduto * 15.00;
            printf("Total de pagamento R$%.2f\n", pagar);

        }else if(escolha == 2){
            printf("Quantidade comprada:\n >");
            scanf("%i", &qtdProduto);

            pagar = qtdProduto * 25.70;
            printf("Total de pagamento R$%.2f\n", pagar);

        }else if(escolha == 3){
            printf("Quantidade comprada:\n >");
            scanf("%i", &qtdProduto);

            pagar = qtdProduto * 17.55;
            printf("Total de pagamento R$%.2f\n", pagar);

        }else if(escolha == 4){
            printf("Quantidade comprada:\n >");
            scanf("%i", &qtdProduto);

            pagar = qtdProduto * 12.20;
            printf("Total de pagamento R$%.2f\n", pagar);

        }else if(escolha == 5){
            printf("Quantidade comprada:\n >");
            scanf("%i", &qtdProduto);

            pagar = qtdProduto * 5.50;
            printf("Total de pagamento R$%.2f\n", pagar);

        }else if(escolha == 6){
            printf("Quantidade comprada:\n >");
            scanf("%i", &qtdProduto);

            pagar = qtdProduto * 5.50;
            printf("Total de pagamento R$%.2f\n", pagar);
            
        }else if(escolha == 7){
            printf("Quantidade comprada:\n >");
            scanf("%i", &qtdProduto);

            pagar = qtdProduto * 28.00;
            printf("Total de pagamento R$%.2f\n", pagar);

        }else if(escolha == 8){
            printf("Quantidade comprada:\n >");
            scanf("%i", &qtdProduto);

            pagar = qtdProduto * 18.80;
            printf("Total de pagamento R$%.2f\n", pagar);

        }else if(escolha == 9){
            printf("Quantidade comprada:\n >");
            scanf("%i", &qtdProduto);

            pagar = qtdProduto * 20.30;
            printf("Total de pagamento R$%.2f\n", pagar);

        }else if(escolha == 10){
            printf("Quantidade comprada:\n >");
            scanf("%i", &qtdProduto);

            pagar = qtdProduto * 100.00;
            printf("Total de pagamento R$%.2f\n", pagar);

        }else{
            printf("ERRO: codigo informado INVALIDO!\n");
        }

        //Produto com desconto
        if(qtdProduto >= 3){
            novoPagamento = pagar * 1.1;
        }else{
            printf("O produto nao possui desconto de 5 Porcento!\n");
        }  

        printf("\n");

        //Cliente decide quanto vai pagar
        printf("Quanto vai pagar:\n >");
        scanf("%f", &pagamento);

        if(pagamento >= pagar){
            troco = pagamento - pagar;
        }else if(pagamento < pagar){
            printf("Nao pode levar as compras, devido o valor inferior ao da compra.\n");
        }

        printf("\n");

        //Lista de produtos
        printf("Lista do prduto comprado: %d\n", escolha);

        if(qtdProduto <= 100){ 
            printf("Obrigado, volte sempre!\n");
        }else if(qtdProduto > 100 && qtdProduto < 300){
            printf("Cliente do coracao volte sempre!!\n");
        }else if(qtdProduto >= 300){
            printf("Voce e um cliente sensasional, volte sempre!!!\n");
        }

        printf("\n");

        //Saída final.
        printf("Valor total pago: R$ %.2f\n", pagamento); //Valor total a ser pago.
        printf("Produto com Desconto de 5 Porcento %.2f\n", novoPagamento); //Produto com desconto
        printf("Voce recebera de troco R$ %.2f\n", troco); //Qual é o troco do cliente.
        
        printf("Deseja realizar outra compra pressione qualquer tecla ou Digite 'F' para Finalizar:\n >");
        cod = getche();
        system("cls");
    }

    return 0;
}
