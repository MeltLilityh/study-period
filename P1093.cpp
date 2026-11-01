#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct Student{
    int chinese;
    int total;
    int id;
};
 
bool cmp(Student a, Student b){
    if(a.total != b.total) return a.total > b.total;
    else if(a.chinese != b.chinese) return a.chinese > b.chinese;
    else return a.id < b.id;
}

int main(){
    int n;
    cin >> n;
    vector<Student> students(n);
    for(int i=0;i<n;i++){
        int c,m,e;
        cin>>c>>m>>e;
        students[i].chinese = c;
        students[i].total = c+m+e;
        students[i].id = i+1;
    }
    sort(students.begin(),students.end(),cmp);
    for(int i=0;i<5&&i<n;i++){
        cout<<students[i].id<<' '<<students[i].total<<endl;
    }
    return 0;
    
    
}