#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int height=15*n + 1;
  int width=17*n + 1;
  int i,j,a=4*n,b=4*n + 1,c=width - a;
  int d=b,e=a;
  for(i=1;i<=height;i++){
    for(j=1;j<=width;j++){
      if(i<=e){
        if(j==a || j==width-a+1 || j==b || j==c){
          printf("*");
        }
        else{
          printf(" ");
        }
      }
      else if(i>e && i<=e+(n/2) && (j==b || j==c || (i<=d && j==1 || j==width))){
        printf("*");
      }
      else if(i==e+(n/2)+1 && (j==b || j==1 || j==width)){
        printf("*");
      }
      else if(i>d && i<=7*n) {
        if(j==1 || j==width) {
          printf("*");
        }
        else{
          printf(" ");
        }
      }
      else if(i>7*n && i<height){
        if(j==b || j==c){
          printf("*");
        }
        else{
          printf(" ");
        }
      }
      else{
        printf(" ");
      }

    }
    printf("\n");
    a--;
    b++;
    c--;
    if(i==7*n){
      b=2;
      c=width-1;
    }
  }
    for(j=1;j<=c;j++){
        if(j>=b && j<=c) printf("*");
        else printf(" ");
    }
}
