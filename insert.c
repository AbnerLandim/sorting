void Insercao(Item* v, int n ){
  int i,j;

  Item aux;

  for(i = 1; i < n; i++){

    aux = v[i];
    j = i - 1;

    while((j >= 0) && (aux.Chave < v[j].Chave)){
      v[j + 1] = v[j];
      j--;
    }

    v[j + 1] = aux;
  }
}
