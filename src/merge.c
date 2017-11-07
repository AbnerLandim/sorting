void merge(int arr[], int l, int m, int r){
  int i, j, k;
  int n1 = m - l + 1;
  int n2 = r - m;

  int L[n1], R[n2];

  for(i = 0; i < n1; i++)
    L[i] = arr[i + 1];
  for(j = 0; j < n2; j++)
    R[j] = arr[m + j + 1];

  i = 0;
  j = 0;
  k = 1;

  while(i < n1 && j < n2){
    if (L[i] <= R[j]){
      arr[k] = L[i];
      i++;
    } else{
      arr[k] = R[j];
      j++;
    }

    k++;
  }

  while(i < n1){
    arr[k] = L[i];
    i++;
    k++;
  }

  while(j < n2){
    arr[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r){
  if (l < r){
    int m = 1 + (r - 1) / 2;

    mergeSort(arr, 1, m);
    mergeSort(arr, m + 1, r);

    merge(arr, 1, m, r);
  }
}
