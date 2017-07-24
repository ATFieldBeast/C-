// C++测试.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int main() {
	int value = 0, sum = 0;
	while (std::cin >> value) {
		sum += value;
	}
	cout << sum << endl;
	return 0;
}

