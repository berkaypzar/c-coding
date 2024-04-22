#include <stdio.h>
int main(){


// %.1 - basamak sayısı belirleme
  // %1 - sol taraftan boşluk bırakma
  // %- - sağ taraftan boşulk bırakma

  double item1= 5.75;
  double item2 = 10.00;
  double item3 = 10.99;

  printf("Item 1 = %f TL\n",item1);
  printf("Item 2 = %f TL\n",item2);
  printf("Item 3 = %f TL\n",item3);
  

printf("Item 1 = %.2f TL\n",item1 );
  printf( "Item 2 = %10.2f TL\n",item2 );
  printf("Item 3 = %-10.2f TL\n",item3);



  



  return 0;
}  
