* #include <stdio.h>
#include <stdbool.h>
int main(){


char a = 'A'; // tek karakter %c
char b[]= "Aga"; // karakter dizisi %s

float c = 3.141592; //4 bytes 6-7 basamak %f  
double d = 3.1415926535897932; // 8 bytes 15-16 basamaklı değerler %lf

bool e = true; //1 byte (true veya false)  %d

char f= 120; //1 byte( -128 <-> 127) %d veya %c
unsigned char g = 255; // 1 byte (0 <-> 255) %d veya %c

short h= 32767;  // 2 bytes (-32,768 <-> 32,767) %d 
unsigned short i= 65535; // 2 bytes (0 <-> 65.535 ) %d

int j = 2147483647; // 4 bytes (-2.147.483.648 <-> 2.147.483.647) %d
unsigned int k = 4294967403; // 4 bytes (0 <-> 4.294.967.295) %u

long long int l= 9223372036854775807; // 8 bytes (-9 quintillion <-> 9 quintillion) %lld
unsigned long long int m = 18446744073709551615; // 8 bytes (0 <-> 18 quintillion) %llu 

printf("%c\n",a);
printf("%s\n",b);  
printf("%f\n",c);
printf("%lf\n",d);
printf("%d\n",e);





  return 0;
} 
