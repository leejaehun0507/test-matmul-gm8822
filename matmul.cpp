#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

int main() {
    int n, k, m;
    int A[MAX_SIZE][MAX_SIZE];
    int B[MAX_SIZE][MAX_SIZE];
    
    // 결과 행렬 C는 덧셈이 누적되어야 하므로 모든 요소를 0으로 초기화
    int C[MAX_SIZE][MAX_SIZE] = {0}; 

    // 1. 행렬의 차원 입력 받기
    cin >> n >> k >> m;

    // 2. 행렬 A 입력 받기 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            cin >> A[i][j];
        }
    }

    // 3. 행렬 B 입력 받기
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> B[i][j];
        }
    }

    // 4. 행렬 곱셈 연산
    // 3중 for문을 사용하여 행렬 곱셈 구현
    for (int i = 0; i < n; ++i) {           // 결과 행렬 C의 행 반복
        for (int j = 0; j < m; ++j) {       // 결과 행렬 C의 열 반복
            for (int p = 0; p < k; ++p) {   // A의 행과 B의 열 요소들을 곱하고 더하는 과정
                C[i][j] += A[i][p] * B[p][j];
            }
        }
    }

    // 5. 결과 행렬 C 출력
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << C[i][j];
            // 마지막 열이 아니면 숫자 사이에 공백 추가
            if (j < m - 1) {
                cout << " ";
            }
        }
        cout << "\n"; // 한 행의 출력이 끝나면 줄바꿈
    }

    return 0;
}
