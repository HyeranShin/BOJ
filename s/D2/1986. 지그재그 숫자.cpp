/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PxmBqAe8DFAUq&categoryId=AV5PxmBqAe8DFAUq&categoryType=CODE

1부터 N까지의 숫자에서 홀수는 더하고 짝수는 뺐을 때 최종 누적된 값을 구해보자.

[예제 풀이]
N이 5일 경우,
1 – 2 + 3 – 4 + 5 = 3
N이 6일 경우,
1 – 2 + 3 – 4 + 5 – 6 = -3

[제약사항]
N은 1 이상 10 이하의 정수이다. (1 ≤ N ≤ 10)

[입력]
가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
각 테스트 케이스에는 N이 주어진다.

[출력]
각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 누적된 값을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)
*/

#include <iostream>
#include <ios>

using namespace std;

int T, input;
int getAnswer();

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> T;
	
	for (int i = 0; i < T; i++) {
		cin >> input;
		cout << '#' << i+1 << " " << getAnswer() << "\n";
	}

	return 0;
}


int getAnswer() {
	int answer = 0;

	for (int i = 1; i <= input; i++) {
		if (i % 2 == 1) answer += i;
		else answer -= i;
	}

	return answer;
}
