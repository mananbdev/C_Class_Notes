#include <stdio.h>
#include <math.h>

void sidesoftriangle(){
  int a,b,c;
  printf("Enter the sides of the traingle\n");
  scanf("%d %d %d",&a,&b,&c);
  float s,area;
  if(a+b>c || a+c>b || b+c>a){
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the traingle is %.2f\n",area);
  }
  else{
    printf("Enter the valid sides of triangle\n");
  }
}

int main(){
  sidesoftriangle();

  return 0;
}