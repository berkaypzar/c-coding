 #include <stdio.h>

int findMax(int x,int y){

//if (x>y){
  //return x;
//}
//else{
 // return y;
//}


return(x>y) ? x:y;

}

int main(){

//ternary opertor = bir değeri döndürürken if else yerine kullanılcak kısa yol
// (koşul) ? doğruysa değer : yanlışsa değer

  int max = findMax(20,19);

printf("%d",max);
  

return 0;
}
