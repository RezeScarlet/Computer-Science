#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Shares {
  char name[6];
  int assets[30];
};

int main() {
  struct Shares shares[30];
  FILE *file = fopen("ativos.txt", "r");
  const char delimiter[] = "; ";
  char buffer[1024];
  char *token;
  for (int i = 0; i < 5; i++) {
    fgets(buffer, sizeof(buffer), file);

    buffer[strcspn(buffer, "\n")] = 0;
    token = strtok(buffer, delimiter);
    strcpy(shares[i].name, token);
    printf("%s\n", shares[i].name);

    for (int j = 0; j < 30; j++) {
      token = strtok(NULL, delimiter);
      shares[i].assets[j] = atoi(token);
      printf("%d\n", shares[i].assets[j]);
    }

    printf("\n");
  }
  fclose(file);
  return 0;
}
