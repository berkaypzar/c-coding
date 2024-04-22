#include <stdio.h>
#include <string.h>

int main(){

char name[25];
  printf("Adın ne?\n");
  fgets(name,25,stdin);
  name[strlen(name)-1] = '\0';

while(strlen(name)==0){

  printf("Herhangi bir isim girmedin\n");
  printf("Adın ne ?\n");
  fgets(name,25,stdin);
  name[strlen(name)-1] = '\0';
}

  
  printf("Merhaba %s",name);

  return 0;
}
