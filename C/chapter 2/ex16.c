// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
  int
  n;

  printf("Entre com um numero entre 1 e 3999: ");
  scanf("%d", &n);
  printf("%d = ", n);
  

  if (n>=1000) {
    int quant = n/1000;
    n = n - (1000*quant);
    for (int i = quant; i != 0; i--) {
      printf("M");
   }
  }
  if (n>=500) {
    int quant = n/500;
    n = n - (500*quant);
    for (int i = quant; i != 0; i--) {
      printf("D");
   }
}
  if (n>=100){
    int quant = n/100;
    n = n - (100*quant);
    for (int i = quant; i != 0; i--) {
      printf("C");
    }
  }
  if (n>=50){
    int quant = n/50;
    n = n - (50*quant);
    for (int i = quant; i != 0; i--) {
      printf("L");
    }
  }
  if (n>=10){
    int quant = n/10;
    n = n - (10*quant);
    for (int i = quant; i != 0; i--) {
      printf("X");
    }
  }
  if (n<=9){
    int quant = n/9;
    n = n - (9*quant);
    for (int i = quant; i != 0; i--) {
      printf("IX");
    }
  }
  if (n<=8){
    int quant = n/8;
    n = n - (8*quant);
    for (int i = quant; i != 0; i--) {
      printf("VIII");
    }
  }
  if (n<=){
    int quant = n/7;
    n = n - (7*quant);
    for (int i = quant; i != 0; i--) {
      printf("VII");
    }
  }
  if (n<=6){
    int quant = n/6;
    n = n - (6*quant);
    for (int i = quant; i != 0; i--) {
      printf("VI");
    }
  }
  if (n<=5){
    int quant = n/5;
    n = n - (5*quant);
    for (int i = quant; i != 0; i--) {
      printf("V");
    }
  }if (n<=4){
    int quant = n/4;
    n = n - (4*quant);
    for (int i = quant; i != 0; i--) {
      printf("IV");
    }
  }
  if (n<=3){
    int quant = n/3;
    n = n - (3*quant);
    for (int i = quant; i != 0; i--) {
      printf("III");
    }
  }
  if (n<=2){
    int quant = n/2;
    n = n - (2*quant);
    for (int i = quant; i != 0; i--) {
      printf("II");
    }
  }
  if (n<=1){
    int quant = n/1;
    n = n - (1*quant);
    for (int i = quant; i != 0; i--) {
      printf("I");
    }
  }
  
  return 0;
}