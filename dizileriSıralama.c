#include <stdio.h>

void sort(int a[],int size){
  for(int i=0;i<size;i++){
    for(int j = 0;j<size;j++){
      if(a[j]<a[j+1]){
   int temp = a[j];
   a[j] = a[j+1];
   a[j+1] = temp;     
    }
  }
  
}}

void printArray(int a[],int size){

for(int i=0;i<size;i++){
printf("%d-",a[i]);
  
}

}
int main(){

int a[] = {8,6,5,3,9,1,0,2,4,7};
 int size = sizeof(a)/sizeof(a[0]);
  
  sort(a,size);
  printArray(a,size);

  
  
  
  return 0;
}
