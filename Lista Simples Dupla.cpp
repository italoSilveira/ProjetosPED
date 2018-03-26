#include <stdio.h>
#include <stdlib.h>
typedef struct tipo_produto {
    int codigo;                  
    double preco;                
    struct tipo_produto *proximo;
    struct tipo_produto *anterior;
}TProduto;

void inserir(TProduto **cabeca);
void listar (TProduto *noatual);
void alterar (TProduto *noatual);
void excluir (TProduto **noatual);


int main()
{
    TProduto *cabeca = NULL; 
	printf("%p",&cabeca);

    int opcao; 
    do{
             
             printf("\n1 - Cadastrar Produto");
             printf("\n2 - Listar");
             printf("\n3 - Alterar");
             printf("\n4 - Excluir");             
             printf("\n5 - Sair");             
             printf("\n Escolha uma opção: ");
             scanf("%d",&opcao);
             switch (opcao){
                    case 1: inserir(&cabeca);
                            break;
                    case 2: listar(cabeca); 
                             break;
                    case 3: alterar(cabeca); 
                             break;                   
                    case 4: excluir(&cabeca); 
                             break;                   

             }
             
    }while(opcao != 5);
    
    system("pause");
}
void inserir (TProduto **cabeca)
{
    TProduto *noatual, *novono;
    int cod;
    double preco;

    printf("\n Codigo do novo produto: ");
    scanf("%d", &cod);
    printf("\n Preco do produto:R$");
    scanf("%lf", &preco);
    if (*cabeca == NULL)   
    {
        *cabeca = (TProduto *) malloc(sizeof(TProduto));
        printf("Endereco alocado %p", cabeca);
        (*cabeca)->codigo = cod;
        (*cabeca)->preco = preco;
        (*cabeca)->proximo = NULL;
        (*cabeca)->anterior = NULL;
    }
    else
    {
        noatual = *cabeca;
        while(noatual->proximo != NULL)
            noatual = noatual->proximo;    
        novono = (TProduto *) malloc(sizeof(TProduto));
        novono->codigo = cod;
        novono->preco = preco;
        novono->proximo = NULL;
        novono->anterior = noatual;
        noatual->proximo = novono;    
    }
}

void listar (TProduto *noatual)
{
    while( noatual != NULL)    
    {
        printf("\n\n Codigo: %d \nPreco:R$%.2lf", noatual->codigo, noatual->preco);
        noatual = noatual->proximo;    
    }
	    
    while( noatual != NULL)    
    {
        printf("\n\n Codigo: %d \nPreco:R$%.2lf", noatual->codigo, noatual->preco);
        noatual = noatual->anterior;     
    }
}

void alterar (TProduto *noatual)
{
    int cod;
    double novopreco;
    printf("\n Codigo do novo produto: ");
    scanf("%d", &cod);    
    while( noatual != NULL){               
        if (cod==noatual->codigo)
           break;
        noatual = noatual->proximo;
    }
    if (noatual == NULL)     
       printf("Produto não localizado");
    else{
       printf("\n Preco do produto:R$");
       scanf("%lf", &novopreco); 
       noatual->preco = novopreco;   
    }
    fflush(stdin);
}

void excluir (TProduto **inicio){
    int cod, achou = 0;
    TProduto *anterior, *noatual;
    printf("\n Codigo a excluir: ");
    scanf("%d", &cod); 
    anterior = *inicio;   
    for (noatual=*inicio; noatual!=NULL; noatual=noatual->proximo){
    	if (cod==noatual->codigo){
    		if (noatual==*inicio)
    			printf("");
    		else{
    		
        	anterior->proximo = noatual->proximo;
            free(noatual);
	        achou=1;}
        }
        if (achou ==1)
            break;
        anterior=noatual;
     }
     if (achou==0)
        printf("Codigo do produto não encontrado");
}
        
    


