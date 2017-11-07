void bolha (int n, int* v){
  int i,j;

  for(i = n - 1; i >= 1; i--)
    for(j=0; j<i; j++)
      if (v[j]>v[j+1]) { /* troca */
        int temp = v[j];
        v[j] = v[j+1];
        v[j+1] = temp;
      }

}
