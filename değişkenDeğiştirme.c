/*#include <stdio.h>

int main(){

char a = 'A';
char b = 'B';


 char temp = a;
  a = b;
  b = temp;

  printf("a = %c\n",a);
  printf("b = %c\n",b);
 return 0;
}*/

#include <stdio.h>
#include <string.h>


int main(){

char a[10] = "araba";
char b[10] = "kamyon";

  char temp[10];

  strcpy(temp,a);
  strcpy(a,b);
  strcpy(b,temp);

printf("a = %s\n",a);
printf("b = %s\n",b);

  return 0;
}
