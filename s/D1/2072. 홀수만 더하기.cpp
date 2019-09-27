/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QSEhaA5sDFAUq&categoryId=AV5QSEhaA5sDFAUq&categoryType=CODE

10개의 수를 입력 받아, 그 중에서 홀수만 더한 값을 출력하는 프로그램을 작성하라.

[제약 사항]
각 수는 0 이상 10000 이하의 정수이다.

[입력]
가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
각 테스트 케이스의 첫 번째 줄에는 10개의 수가 주어진다.

[출력]
출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/

#include <iostream>
#include <ios>

using namespace std;

int T, number;
int answer;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> T;
	for (int i = 0; i < T; i++) {
		answer = 0;

		for (int j = 0; j < 10; j++) {
			cin >> number;
			if (number % 2 == 1) answer += number;
		}

		cout << '#' << i + 1 << " " << answer << "\n";
	}

	return 0;
}
