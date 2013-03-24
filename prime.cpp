#include <stdio.h>

// #define MAXN 2020000
#define MAXN 99999999

char n[MAXN];

int main(){
  for(long int i=0;i<MAXN;i++) n[i]=1;

  printf("2\n");

  for(long int i=3; i<MAXN;i+=2){
    if(n[i]){ printf("%ld\n",i);}
    for(long int j=i; j<MAXN;j+=i){
      n[j]=0;
    }
  }
  return 0;
}
