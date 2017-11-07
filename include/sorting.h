#define MAXNAMESIZE 121

typedef struct{
  char name[MAXNAMESIZE + 1];
  unsigned short age;
} t_Person;

void writeInfo();
void readInfo(t_Person **);
void bubble(int, int *);
void insertion(int *, int);
void mergeSort(int [], int, int);
void quick(int [], int, int);
void selection(int *, int);
