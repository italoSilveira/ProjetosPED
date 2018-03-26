#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	const char pt = '.';
    char Matriz[3][3] = 
    {{pt, pt, pt}, {pt, pt, pt}, {pt, pt, pt}};
    char O='o', X='x';
    int lin,col,j;
	const int TRUE = 1;

    printf("Digite as coordenadas na forma lin col: \n ");

    while(TRUE)
        {
        for(lin=0;lin<3;lin++)
        {
            for(col=0;col<3;col++)
            	printf("%c", Matriz[lin][col]);
            printf("\n ");
        }

        if((Matriz[0][0]==O && Matriz[0][1]==O && Matriz[0][2]==O)||
           (Matriz[1][0]==O && Matriz[1][1]==O && Matriz[1][2]==O)||
           (Matriz[2][0]==O && Matriz[2][1]==O && Matriz[2][2]==O)||
           (Matriz[0][0]==O && Matriz[1][0]==O && Matriz[2][0]==O)||
           (Matriz[0][1]==O && Matriz[1][1]==O && Matriz[2][1]==O)||
           (Matriz[0][2]==O && Matriz[1][2]==O && Matriz[2][2]==O)||
           (Matriz[0][0]==O && Matriz[1][1]==O && Matriz[2][2]==O)||
           (Matriz[0][2]==O && Matriz[1][1]==O && Matriz[2][0]==O))
        {
            printf("\aJogador 1, VOCE VENCEU!!!");
            break;
        }
        if((Matriz[0][0]==X && Matriz[0][1]==X && Matriz[0][2]==X)||
           (Matriz[1][0]==X && Matriz[1][1]==X && Matriz[1][2]==X)||
           (Matriz[2][0]==X && Matriz[2][1]==X && Matriz[2][2]==X)||
           (Matriz[0][0]==X && Matriz[1][0]==X && Matriz[2][0]==X)||
           (Matriz[0][1]==X && Matriz[1][1]==X && Matriz[2][1]==X)||
           (Matriz[0][2]==X && Matriz[1][2]==X && Matriz[2][2]==X)||
           (Matriz[0][0]==X && Matriz[1][1]==X && Matriz[2][2]==X)||
           (Matriz[0][2]==X && Matriz[1][1]==X && Matriz[2][0]==X))
        {
            printf("\aJogador 2, VOCE VENCEU!!!");
            break;
        }

        if(j==9)
        {
            printf("PARTIDA EMPATADA");
            break;
        }
        
        printf("Coordenadas: ");
        scanf("%d%d", &lin, &col);
        
        if(Matriz[lin][col] == '.'){
        	if(j%2) Matriz[lin][col]=X;
        	else Matriz[lin][col]=O;
        	j++;
        }

    }
    system("PAUSE");
    return 0;
}
