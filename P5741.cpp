#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

struct Students {
    string name;
    int chinese, english, math;

    int getsum() const {
        return chinese + english + math;
    }
};

int main(){
    int N;
    cin >> N;

    vector<Students> students(N);

    // 输入顺序：姓名 语文 数学 英语
    for (int i = 0; i < N; i++) {
        cin >> students[i].name >> students[i].chinese
            >> students[i].math >> students[i].english;
    }

    // 枚举所有两两组合：i < j，每对只算一次
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (abs(students[i].chinese - students[j].chinese) <= 5 &&
                abs(students[i].math    - students[j].math)    <= 5 &&
                abs(students[i].english - students[j].english) <= 5 &&
                abs(students[i].getsum() - students[j].getsum()) <= 10) {
                cout << students[i].name << ' ' << students[j].name << '\n';
            }
        }
    }

    return 0;
}
 