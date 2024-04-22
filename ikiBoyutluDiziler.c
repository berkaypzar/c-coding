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


for(int i = 0;i<2;i++){

  for(int j = 0;j<3;j++){

    printf("%d\n",ch[i][j]);
  }
}

  return 0;
}
