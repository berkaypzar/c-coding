#include <stdio.h>

int main(){
int ages[] = {18,25,16,20};
  printf("%d\n",sizeof(ages));
  printf("\n");

  for(int i = 0;i<sizeof(ages)/sizeof(ages[0]);i++){

    printf("%d\n",ages[i]);
  }






  return 0;
}
