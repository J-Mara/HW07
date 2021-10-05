# include <stdio.h>

void print_out(int a[], int length){
  int x;
  for(x = 0; x < length; x++){
    printf("%d ", a[x]);
  }
  printf("\n");
}

float avg(int a[], int length){
  int x;
  float tot = 0.0;
  for(x = 0; x < length; x++){
    tot += a[x];
  }
  float res = tot/length;
  return res;
}

void copy(int a[], int b[], int length){
  int x;
  for (x = 0; x < length; x++){
    b[x] = a[x];
  }
}

int main(){
  int test[5] = {4, 3, 2, 1, 12};
  print_out(test, 5);
  printf("avg = %f\n", avg(test, 5));
}
