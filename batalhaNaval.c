 #include <stdio.h>

  #define linhas 10
  #define colunas 10
  #define tamanho_navio 3

  // verifica se a posição dos navios então dentro dos limites
  // verifica sobreposição
  int podeposicionar(int tabuleiro[linhas][colunas],int x,int y,int dx,int dy){
     for( int k=0;k<tamanho_navio;k++) {
        int nx= x+k*dx;
        int ny = y+k*dy;
        if(nx<0|| nx>=linhas||ny<0||ny>=colunas){
            return 0;// fora dos limites
        }
        if(tabuleiro[nx][ny]!=0){
        return 0;// já ocupado
      }
      }
    return 1; //pode posicionar
    }  


// Função para posicionar o navio
void posicionarNavio(int tabuleiro[linhas][colunas], int x, int y, int dx, int dy) {
    for (int k = 0; k < tamanho_navio; k++) {
        int nx = x + k * dx;
        int ny = y + k * dy;
        tabuleiro[nx][ny] = 3; // marca navio
    }
}
       
int main() {
    
    int tabuleiro[linhas][colunas] = {0}; // inicializa com água (0)

    // Posicionar dois navios horizontais/verticais
    if (podeposicionar(tabuleiro, 0, 0, 1, 0)) // vertical
        posicionarNavio(tabuleiro, 0, 0, 1, 0);

    if (podeposicionar(tabuleiro, 5, 2, 0, 1)) // horizontal
        posicionarNavio(tabuleiro, 5, 2, 0, 1);

    // Posicionar dois navios diagonais
    if (podeposicionar(tabuleiro, 2, 2, 1, 1)) // diagonal principal
        posicionarNavio(tabuleiro, 2, 2, 1, 1);

    if (podeposicionar(tabuleiro, 7, 6, -1, 1)) // diagonal secundária
        posicionarNavio(tabuleiro, 7, 6, -1, 1);
    

   

    // Imprime cabeçalho horizontal (A-J)
    printf("   ");
    for (int j = 0; j < colunas; j++) {
        printf(" %c ", 'A' + j);
    }
    printf("\n");

    // Imprime linhas numeradas (1-10) com o tabuleiro
    for (int i = 0; i < linhas; i++) {
        printf("%2d ", i + 1);  // numeração vertical
        for (int j = 0; j < colunas; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
