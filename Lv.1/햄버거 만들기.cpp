#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> stack;

    // 스택 기반으로 패턴 탐지
    for (int i = 0; i < ingredient.size(); i++) {
        stack.push_back(ingredient[i]);

        // 스택의 마지막 4개가 [1, 2, 3, 1]인지 확인
        if (stack.size() >= 4 &&
            stack[stack.size() - 4] == 1 &&
            stack[stack.size() - 3] == 2 &&
            stack[stack.size() - 2] == 3 &&
            stack[stack.size() - 1] == 1) {
            // 패턴을 찾으면 햄버거 하나 완성
            answer++;
            // 패턴 제거
            stack.erase(stack.end() - 4, stack.end());
        }
    }

    return answer;
}                                                                                                                                                              
