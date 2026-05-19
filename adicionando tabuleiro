# include <stdio.h>

int main(){
 
   int tabuleiro[10][10];

   // inicializando toda as posições em água 0
   for (int i=0;i<10;i++){
      for (int j =0;j<10;j++){
         tabuleiro[i][j]=0;
      }
   };
   // criando loop para marcar posição de navio
   int linha=2;  // linha 3 indice 2
   int  inicio=4;// coluna "e" indice 4 inicio do navio
   int  fim = 6;// coluna "G" indice 6 fim navio

   for (int j = inicio;j <= fim;j++){
        tabuleiro[linha][j]=1;}// marca posição 
        
   // criando loop para navio posição vertical

   int coluna = 1;
   int inicio1=6;
   int fim1 = 8;

   for(int i=inicio1;i <= fim1;i++){
        tabuleiro[i][coluna]=1; //marca posição navio vertical
    }

 
   //imprime tabuleiro horizontal
   printf("   ");
   for( int j=0; j<10;j++){
      printf( " %c ", 'A' + j);}

   printf("\n");

    // imprimir numeros de 1 à 10 do tabuleiro
   for(int i = 0;i < 10 ; i++){
      printf("%2d ",i + 1);{
         for( int j = 0; j < 10; j++){
            printf(" %d ",tabuleiro[i][j]);
         }
      }
      printf("\n");
   } 
