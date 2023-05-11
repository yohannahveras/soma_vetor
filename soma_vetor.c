#include <stdio.h>
#include <math.h>

  int main ()
  {

  int n, quantidade;
  double soma, media;
  
  printf("Quantos numeros voce vai digitar? ");
  scanf("%d", &n);
  
  double vet[n];
  
  for (int i = 0; i < n; i++) {
      printf("Digite um numero: ");
      scanf("%lf", &vet[i]);
  }
  
  printf("\nVALORES = ");
  for (int i = 0; i < n; i++) {
      printf("%.1lf ", vet[i]);
  }
  
  soma = 0;
  quantidade = 0;
  for (int i = 0; i < n; i++) {
      soma = soma + vet[i];
      quantidade = quantidade + 1;
  }
  
  printf("\nSOMA = %.2lf", soma);
  
  media = soma / quantidade;
  
  printf("\nMEDIA = %.2lf", media);
    
    return 0;
  }
