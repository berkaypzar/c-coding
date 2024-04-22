#include <stdio.h>

int main(){

//int ch[2][3] = {{1,2,3},{4,5,6}};
  
int ch[2][3];
  ch[0][0] = 1;
  ch[0][1] = 2;
  ch[0][2] = 3;
  ch[1][0] = 4;
  ch[1][1] = 5;
  ch[1][2] = 6;

int rows = sizeof(ch)/sizeof(ch[0]));
int coloumns = sizeof(ch)/sizeof(ch[0][0]);
  

for(int i = 0;i<rows;i++){

  for(int j = 0;j<coloumns;j++){

    printf("%d\n",ch[i][j]);
  }
}

  return 0;
}
