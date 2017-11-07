void selection(Item* v, int n){
  int i, j, Min;

  Item aux;

  for(i = 0; i < n - 1; i++)  {
    Min = i;

    for(j = i + 1 ; j < n; j++)
      if ( v[j].Chave < v[Min].Chave)
        Min = j;

    aux = v[Min];
    v[Min] = v[i];
    v[i] = aux;
  }
}
