#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();                            // 吃掉 n 后面那个换行

    char lastType = 'a';
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);                  // 读整行

        vector<string> tok;                  // 存放切出来的每一段
        string cur;
        for (char ch : line) {
            if (ch == ' ') {
                if (!cur.empty()) {
                    tok.push_back(cur);      // 把"这一段"推进 vector
                    cur.clear();
                }
            } else {
                cur += ch;                   // 不是空格就继续攒
            }
        }
        if (!cur.empty()) tok.push_back(cur); // 最后一段

        char type;
        int a, b;
        if (tok.size() == 3) {               // 三个数据
            type = tok[0][0];
            a = stoi(tok[1]);
            b = stoi(tok[2]);
            lastType = type;
        } else {                             // 两个数据，沿用上一次
            type = lastType;
            a = stoi(tok[0]);
            b = stoi(tok[1]);
        }

        char op;
        if (type == 'a')      op = '+';
        else if (type == 'b') op = '-';
        else                  op = '*';

        int res;
        if (op == '+')      res = a + b;
        else if (op == '-') res = a - b;
        else                res = a * b;

        string eq = to_string(a) + op + to_string(b) + "=" + to_string(res);
        cout << eq << "\n";
        cout << eq.size() << "\n";
    }
    return 0;
}