#include <stdio.h>

int main() {
	// 배열 :: 하나의 이름으로 여러 개의 값을 저장할 수 있는 공간
	// 1차원 배열 :: [] 1쌍만큼 사용
	// n차원 배열 ;; [] n쌍만큼 사용

	// 2차원 배열 :: 행과 열의 개념이 있음
	// 2차원 배열 선언, 초기화
	// (ex) 2행 3열의 2차원 배열 생성
	int array[2][3] = { {1}, {4, 5, 6} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}

}