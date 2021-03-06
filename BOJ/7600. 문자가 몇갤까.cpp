/*
 BOJ 7600. 문자가 몇갤까
 https://www.acmicpc.net/problem/7600
 */

#include <iostream>
#include <ios>
#include <memory.h> // memset 함수 사용

using namespace std;

string input;
bool check[26];
int getResult();
bool checkAlphabet(int index);

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    
    while(1) {
        getline(cin, input);    // 공백 문자열 입력받기
        if(input=="#") {
            break;
        }
        memset(check, 0, sizeof(check));
        cout << getResult() << '\n';
    }
    
    return 0;
}

int getResult() {
    int result = 0;
    
    for(int i=0; i<input.length(); i++) {
        int index = (int)(input[i]);
        if(checkAlphabet(index)) {
            if(index >= 97) {
                index -= 32;
            }
            if(!check[index-65]) {
                check[index-65] = true;
                result++;
            }
        }
    }
    
    return result;
}

bool checkAlphabet(int index) {
    return (index >= 65 && index <= 90) || (index >= 97 && index <= 122);
}
