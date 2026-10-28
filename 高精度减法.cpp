#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>           // swap

using namespace std;

int main(){
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);

    // ---------- 你的读入方式：反序存进 vector ----------
    vector<int> num_1(s1.size());
    vector<int> num_2(s2.size());
    int length_1 = s1.size();
    int length_2 = s2.size();

    for (char c : s1) {
        num_1[length_1 - 1] = c - '0';
        length_1 = length_1 - 1;
    }
    for (char d : s2) {
        num_2[length_2 - 1] = d - '0';
        length_2 = length_2 - 1;
    }

    // ---------- 判断 a 是否小于 b ----------
    string flag = "+";        // 原来写的是 char flag="+"，char 装不下字符串
    bool a_less = false;

    if (s1.size() < s2.size()) {
        a_less = true;        // 位数少的一定更小
    } else if (s1.size() == s2.size()) {
        for (int i = 0; i < (int)s1.size(); i++) {
            if (s1[i] != s2[i]) {
                if (s1[i] < s2[i]) a_less = true;
                break;        // 最高位开始比较，第一位不同就决定胜负
            }
        }
    }

    if (a_less) {
        flag = "-";
        swap(num_1, num_2);   // 交换数字
        swap(s1, s2);         // 交换字符串，后面 len 才对
    }

    // ---------- 补齐长度 ----------
    int len = s1.size();
    num_1.resize(len, 0);
    num_2.resize(len, 0);

    // ---------- 你的借位逻辑 ----------
    vector<int> num_3(len);
    for (int i = 0; i <= len - 1; i++) {
        if (num_1[i] >= num_2[i]) {
            num_3[i] = num_1[i] - num_2[i];
        } else {
            num_3[i] = 10 + num_1[i] - num_2[i];
            num_1[i + 1] = num_1[i + 1] - 1;
        }
    }

    // ---------- 输出：符号 + 从高位到低位，跳过前导 0 ----------
    if (flag == "-") printf("-");

    int j = len - 1;
    while (j > 0 && num_3[j] == 0) j--;
    for (; j >= 0; j--) printf("%d", num_3[j]);
    printf("\n");

    return 0;
}
