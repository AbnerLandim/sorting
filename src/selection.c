void selection(int *v, int n){
  int i, j, min, aux;

  for(i = 0; i < n - 1; i++)  {
    min = i;

    for(j = i + 1 ; j < n; j++)
      if (v[j] < v[min])
        min = j;

    aux = v[min];
    v[min] = v[i];
    v[i] = aux;
  }
}
