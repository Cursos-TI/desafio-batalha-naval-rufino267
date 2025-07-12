#include <stdio.h>

int main(){

int tabuleiro[10][10];
char l[10]={'A','B','C','D','E','F','G','H','I','J'};

for (int i = 0; i < 10; i++)
{
  printf("\t%c",l[i]);// letras superiores 
}
printf("\n");
for (int i = 0; i < 10; i++)//loop de colunas 
{
  for (int j = 0; j < 10; j++)//loop de linahs
{ 
  if ((i == 7 && (j > 2 && j<6))||((i > 0 && i < 4) && j ==1)||((i + j == 9)&&(i < 3 )&&(j > 6)))//condicao de onde o navio vai aparecer
  {//condicao horizontal e vertical 
    tabuleiro[i][j]=3;
  }else{
    tabuleiro[i][j]=0;
  }
  
}
}
//imprimir a matriz

for (int i = 0; i < 10; i++) // loop para imprir coluna
{
  printf("%d", i+1);//numero de colunas

  for (int j = 0; j < 10; j++)//loop para imiprir linha
  {
    printf("\t%d", tabuleiro[i][j]);
  }
  printf("\n");
}
return 0;
}
