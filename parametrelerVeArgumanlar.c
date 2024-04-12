#include <stdio.h>
#include <stdlib.h>

void domgunu(char name[],int age){

printf("İyi ki doğdun %s\n",name);
printf("%d yaşına girdin\n",age);
printf("\n");
}
int main(){

  char name[]= "Berkay";
  int age =21;

  domgunu(name,age);
  domgunu("Mert",20);
  
 




  return 0;
}
