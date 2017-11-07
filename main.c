#include <stdlib.h>
#include <stdio.h>
#include "sorting.h"

void writeInfo();
void readInfo(t_Person **);

int main(){
  int i = 0;
  t_Person *pessoas = calloc(100, sizeof(t_Person));

  writeInfo();
  readInfo(&pessoas);

  /* puts(pessoas[99].name); */
  /* printf("%hu\n", pessoas[99].age); */

  return 0;
}

void writeInfo(){
  register int i;
  t_Person *pessoas = calloc(100, sizeof(t_Person));

  FILE *nomes = fopen("nomes.txt", "r"),
       *idades = fopen("idades.txt", "r"),
       *data = fopen("data.bin", "w+b");

  while((fgets(pessoas[i].name, MAXSIZE, nomes) != NULL && fscanf(idades, "%hu", &pessoas[i].age) != EOF))
    i++;

  fwrite(pessoas, sizeof(t_Person), 100, data);

  fclose(nomes);
  fclose(idades);
  fclose(data);

  return;
}

void readInfo(t_Person **pessoas){
  FILE *data = fopen("data.bin", "rb");

  fread(*pessoas, sizeof(t_Person), 100, data);
  fclose(data);

  return;
}
