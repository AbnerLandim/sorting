/*
 * (C) 2017 - Prog. II
 * Abner, Patrick G. & Rafael
 */

#include <stdlib.h>
#include <stdio.h>
#include "../include/sorting.h"

int main(){
  t_Person *pessoas = calloc(100, sizeof(t_Person));

  /* writeInfo(); */
  readInfo(&pessoas);

  /* puts(pessoas[99].name); */
  /* printf("%hu\n", pessoas[99].age); */

  return 0;
}

void writeInfo(){
  register int i;
  t_Person *pessoas = calloc(100, sizeof(t_Person));

  FILE *nomes = fopen("../etc/nomes.txt", "r"),
       *idades = fopen("../etc/idades.txt", "r"),
       *data = fopen("../etc/data.bin", "w+b");

  while((fgets(pessoas[i].name, MAXNAMESIZE, nomes) != NULL && fscanf(idades, "%hu", &pessoas[i].age) != EOF))
    i++;

  fwrite(pessoas, sizeof(t_Person), 100, data);

  fclose(nomes);
  fclose(idades);
  fclose(data);

  return;
}

void readInfo(t_Person **pessoas){
  FILE *data = fopen("../etc/data.bin", "rb");

  fread(*pessoas, sizeof(t_Person), 100, data);
  fclose(data);

  return;
}
