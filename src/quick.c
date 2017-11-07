void quick(int vetor[], int inicio, int fim){
  int pivo, aux, i, j, meio;

  i = inicio;
  j = fim;

  meio = (int)((i + j) / 2);
  pivo = vetor[meio];

  do{
    while(vetor[i] < pivo)
      i++;
    while(vetor[j] > pivo)
      j--;

    if (i <= j){
      aux = vetor[i];
      vetor[i] = vetor[j];
      vetor[j] = aux;
      i++;
      j--;
    }
  } while(j > i);

  if (inicio < j)
    quick(vetor, inicio, j);
  if (i < fim)
    quick(vetor, i, fim);
}
