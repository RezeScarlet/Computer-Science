#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Shares {
  char name[5];
  int assets[30];
};

int main() {
  struct Shares shares[5];
  FILE *file = fopen("ativos.txt", "r");
  const char delimiter[] = "; ";
  char buffer[1024];
  char *token;
  for (int i = 0; i < 5; i++) {
    fgets(buffer, sizeof(buffer), file);

    buffer[strcspn(buffer, "\n")] = 0;
    token = strtok(buffer, delimiter);
    strcpy(token, shares[i].name);
    printf("%s", shares[i].name);
    // Obtenha os números subsequentes
    while ((token = strtok(NULL, delimiter)) != NULL) {
      int number = atoi(token);
      printf("Número: %d\n", number);
    }

    printf("\n"); // Adicione uma linha em branco entre as linhas do arquivo
  }
  fclose(file);
  return 0;
}
