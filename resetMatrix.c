#include <stdio.h>

#define M 3
#define N 5

void printMatrix(int matrix[M][N]);

int main(){
  int matrix[][N] = { {0, 22, 9, 23, 12}, {17, 5, 0, 31, 55}, {4, 19, 29, 41, 3} };
  int rows[M] = {0}, cols[N] = {0}, i, j;

  for(i=0; i<M;i++){
    for(j=0;j<N;j++){
      if(matrix[i][j] == 0){
        rows[i] = cols[j] = 1;
      }
    }
  }

  printMatrix(matrix);

  for(i=0; i<M;i++){
    for(j=0;j<N;j++){
      if(rows[i] == 1 || cols[j] == 1){
        matrix[i][j] = 0;
      }
    }
  }
  printMatrix(matrix);

  return 0;
}

void printMatrix(int matrix[M][N]){
  int i, j;
  for(i=0; i<M;i++){
    for(j=0;j<N;j++){
        printf("%3d ", matrix[i][j]);
    }
    printf("\n");
  }
  printf("*********************\n");
}
