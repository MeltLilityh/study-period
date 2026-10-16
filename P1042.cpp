#include <iostream>
#include <string>

using namespace std;
 
int main(){
    char result;
    string score;
    while(cin >> result && result != 'E'){
        score = score + result;
    }

    // ---------- 第一段：11 分制 ----------
    int win = 0, lose = 0;       // 原来的 l 改名成 lose：字母 l 和数字 1 太容易看混
    int temp = 0;
    string score_2 = score;      // 留一份完整数据给 21 分制用
    for(int i = 0; i < (int)score.size(); i++){
        if (score[i] == 'W') win++;
        else                 lose++;
        temp++;
        if ((win >= 11 || lose >= 11) && (win - lose >= 2 || lose - win >= 2)){
            cout << win << ":" << lose << "\n";
            i = -1;              // 下标回到新串的开头（末尾的 i++ 会把它变回 0）
            score.erase(0, temp); // 这一局用掉的 temp 个字符删掉
            win = 0;
            lose = 0;
            temp = 0;
        }
    }
    cout << win << ":" << lose << "\n";   // 最后不满一局的那场，只在循环外输出一次

    cout << "\n";                // 两组结果之间的空行

    // ---------- 第二段：21 分制 ----------
    int win2 = 0, lose2 = 0;
    int cnt = 0;
    for(int j = 0; j < (int)score_2.size(); j++){
        if (score_2[j] == 'W') win2++;
        else                   lose2++;
        cnt++;
        if((win2 >= 21 || lose2 >= 21) && (win2 - lose2 >= 2 || lose2 - win2 >= 2)){
            cout << win2 << ":" << lose2 << "\n";
            score_2.erase(0, cnt);
            win2 = 0;
            lose2 = 0;
            cnt = 0;
            j = -1;
        }
    }
    cout << win2 << ":" << lose2 << "\n";  // 最后不满一局的那场

    return 0;
}
