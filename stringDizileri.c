#include <stdio.h>
#include <string.h>

int main(){

char games[][10] = {"FIFA","PES","VALORANT","CSGO","R6"};
 // games[0] = "Metin2"; ---->  
 // strcpy(games[3],"Metin2");


  for(int i =0; i<sizeof(games)/sizeof(games[0]);i++){

printf("%s",games[i]);
printf("\n");

    
  }

  return 0;
}
