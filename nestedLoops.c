#include <stdio.h>

int main(){

int coloumns,rows;
  char symbol;

  printf("Satır sayısını giriniz :\n");
  scanf("%d",&rows);
  printf("Sütun sayısını giriniz :\n ");
  scanf("%d",&coloumns);
  scanf("%c");
  printf("Sembol giriniz :\n");
  scanf("%c",&symbol);

  

  for(int i=1;i<=rows;i++){
      for(int j=1;j<=coloumns;j++){
printf("%c",symbol);
        

        
    }
    printf("\n");
  }
  

  return 0;
}
