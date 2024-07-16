/* front.c - um analisador léxico e analisador sintático
simples para expressões aritméticas simples */
#include <ctype.h>
#include <stdio.h>
#include <string.h>
/* Declarações globais */
/* Variáveis */
int charClass;
char lexeme[100];
char nextChar;
int lexLen;
int token;

int nextToken;
FILE *in_fp, *fopen();
/* Declarações de Funções */
void addChar();
void getChar();
void getNonBlank();
int lex();
/* Classes de caracteres */
#define LETTER 0
#define DIGIT 1
#define UNKNOWN 99
/* Códigos de tokens */
#define INT_LIT 10
#define IDENT 11
#define ASSIGN_OP 20
#define ADD_OP 21
#define SUB_OP 22
#define MULT_OP 23
#define DIV_OP 24
#define LEFT_PAREN 25
#define RIGHT_PAREN 26
#define RIGHT_BRAC 27
#define LEFT_BRAC 28
#define FOR_KEY 29
#define IF_KEY 30
#define ELSE_KEY 31
#define SWITCH_KEY 32
#define CASE_KEY 33
#define WHILE_KEY 34
#define DO_KEY 35
#define INT_TYPE 36
#define FLOAT_TYPE 37
/******************************************************/
/* função principal */
int main() {
  /* Abrir o arquivo de dados de entrada e processar seu
  conteúdo */
  if ((in_fp = fopen("front.in", "r")) == NULL)
    printf("ERROR - cannot open front.in \n");
  else {
    getChar();
    do {
      lex();
    } while (nextToken != EOF);
  }
}
/******************************************************/
/* lookup - uma função para processar operadores e parênteses
e retornar o token */
int lookup(char ch) {
  switch (ch) {
  case '(':
    addChar();
    nextToken = LEFT_PAREN;
    break;
  case ')':
    addChar();
    nextToken = RIGHT_PAREN;
    break;
  case '{':
    addChar();
    nextToken = LEFT_BRAC;
    break;
  case '}':
    addChar();
    nextToken = RIGHT_BRAC;
    break;
  case '+':
    addChar();
    nextToken = ADD_OP;
    break;
  case '-':
    addChar();
    nextToken = SUB_OP;
    break;
  case '*':
    addChar();
    nextToken = MULT_OP;
    break;
  case '/':
    addChar();
    nextToken = DIV_OP;
    break;
  default:
    addChar();
    nextToken = EOF;
    break;
  }
  return nextToken;
}
/*****************************************************/
/* addChar - uma função para adicionar nextChar ao
vetor lexeme */
void addChar() {
  if (lexLen <= 98) {
    lexeme[lexLen++] = nextChar;
    lexeme[lexLen] = 0;
  } else
    printf("Error - lexeme is too long \n");
}
/*******************************************************/
/* getChar - uma função para obter o próximo caractere da en-
trada e determinar sua classe de caracteres */
void getChar() {
  if ((nextChar = getc(in_fp)) != EOF) {
    if (isalpha(nextChar))
      charClass = LETTER;

    else if (isdigit(nextChar))
      charClass = DIGIT;
    else
      charClass = UNKNOWN;
  } else
    charClass = EOF;
}
/*******************************************************/
/* getNonBlank - uma função para chamar getChar até que ela
retorne um caractere diferente de espaço em
branco */
void getNonBlank() {
  while (isspace(nextChar))
    getChar();
}
/********************************************************/
/* lex - um analisador léxico simples para expressões
aritméticas */
int lex() {
  lexLen = 0;
  getNonBlank();
  switch (charClass) {
  /* Reconhecer identificadores */
  case LETTER:
    addChar();
    getChar();
    while (charClass == LETTER || charClass == DIGIT) {
      addChar();
      getChar();
    }
    if (strcmp(lexeme, "for") == 0) {
      nextToken = FOR_KEY;
    } else if (strcmp(lexeme, "if") == 0) {
      nextToken = IF_KEY;

    } else if (strcmp(lexeme, "else") == 0) {
      nextToken = ELSE_KEY;

    } else if (strcmp(lexeme, "switch") == 0) {
      nextToken = ELSE_KEY;
    } else {
      nextToken = IDENT;
    }
    break; /* Reconhecer literais inteiros */
  case DIGIT:
    addChar();
    getChar();
    while (charClass == DIGIT) {
      addChar();
      getChar();
    }
    nextToken = INT_LIT;
    break;
  /* Parênteses e operadores */
  case UNKNOWN:
    lookup(nextChar);
    getChar();
    break;
  /* Fim do arquivo */
  case EOF:
    nextToken = EOF;
    lexeme[0] = 'E';
    lexeme[1] = 'O';
    lexeme[2] = 'F';
    lexeme[3] = 0;
    break;
  } /* Fim do switch */
  printf("Next token is: %d, Next lexeme is %s\n", nextToken, lexeme);
  return nextToken;
} /* Fim da função lex */
