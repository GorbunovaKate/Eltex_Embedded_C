#include <stdio.h>

#define N 5

int square_matrix(int **matrix[N][N]){
	printf("[1]\nМатрица:\n");
	for (int i = 0; i < N; i++) {
    	for (int j = 0; j < N; j++) {
      		matrix[i][j] = i*N + j + 1;
    	}
	}

	for (int i = 0; i < N; i++) {
    	for (int j = 0; j < N; j++) {
      		printf("%d\t", matrix[i][j]);
    	}
    	printf("\n");
  	}
  	
	printf("_________________________\n");
	return 0;
}

int reverse_array(int *array[N]){
	int tmp;
	
	for (int i = 0; i < N; i++) {
    	array[i] = i + 1;
  	}
  	
  	printf("[2]\nИсходный массив: ");
  	
  	for (int i = 0; i < N; i++){
  		printf("%d\t", array[i]);
  	}
  	printf("\n");
  	
  	for (int i = 0; i < N/2; i++){
  		tmp = array[i];
  		array[i] = array[N-1-i];
  		array[N-1-i] = tmp;
  	}
  	printf("измененный массив: ");
  	for (int i = 0; i < N; i++){
  		printf("%d\t", array[i]);
  	}
	printf("\n");
	
	printf("_________________________\n");
	return 0;
}

int diagonals_matrix(int **matrix[N][N]){
	
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			matrix[i][j] = j < N - 1 - i ? 0 : 1;
		}
	}
	printf("[3]\nДиагональная матрица:\n");
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("_________________________\n");
	return 0;
}

int spiral(int **matrix[N][N]){
	
	printf("[4]\nМатрица:\n");
	int dir_row = 0, dir_col = 1;
	int col = -1, row = 0;
	int num = 0;
	for (int i = 2 * N; i > 1; i--) {
		for (int j = 0; j < i / 2; j++) {
			col += dir_col;
			row += dir_row;
			num++;
			matrix[row][col] = num;
		}
		int tmp = dir_col;
		dir_col = -1 * dir_row;
		dir_row = tmp;
	}

	for (size_t i = 0; i < N; i++) {
		for (size_t j = 0; j < N; j++) {
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
  	
	printf("_________________________\n");
	return 0;
}

int main(void) {
	setlocale(0, "rus");
	
	int **matrix[N][N];
	int *array[N];
	
	square_matrix(matrix);
	reverse_array(array);
	diagonals_matrix(matrix);
	spiral(matrix);
}
