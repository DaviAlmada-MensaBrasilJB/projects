int potencia(int number, int elev) {
  int d = 1;
  for (int c = 0; c < elev; c++) {
    d *= number;
  }
  return d;
}

int main(void) {
  int numberA;
  int numberB;
  char operacao;
  float result;
  int elevado = potencia(numberA, numberB);

  printf("Digite 2 números e\n1 operação matemática\n(+ para adição - para subtração / para divisão e x para multiplicação):\n>");
  // Escaneia os números e os sinais matemáticos
  scanf("%d %c %d", &numberA, &operacao, &numberB);
  if (operacao == '+') {
    result = numberA + numberB;
  }
  else if (operacao == '-') {
    result = numberA - numberB;
  }
  else if (operacao == 'x') {
    result = numberA * numberB;
  }
  else if (operacao == '/') {
    result =(float) numberA / numberB;
  }
  else if (operacao == '^') {
    result = potencia(numberA, numberB);
  }
  
  printf("%g", result);
  return 0;
}
#endif

#ifdef addittional02

/*
chat
*/
int main(void) {
  
}
