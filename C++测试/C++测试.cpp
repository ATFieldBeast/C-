// C++����.cpp : �������̨Ӧ�ó������ڵ㡣
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

