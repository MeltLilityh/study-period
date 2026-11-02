#include <iostream>
#include <vector>
#include <string>
#include <cstdio>

using namespace std;

struct Students{
    string name;
    int chinese;
    int math;
    int english;
    int getsum() const {
        return chinese +math +english;
    }
    bool operator < (const Students&x) const{
        if(getsum() <x.getsum())return true;
        return false;
    };
};
 
int main(){
    int n;
    vector<Students> students;
    int best=0;
    cin >> n ;
    students.resize(n);
    for(int i=0;i<n;i++){
        cin >>students[i].name >>students[i].chinese >>students[i].math
            >>students[i].english;
    }
    for(int i=1;i<n;i++){
        if(students[best]<students[i]){
        best = i;
    }
}
    cout<<students[best].name<<" "<<students[best].chinese<<" "<<students[best].math
        <<" "<<students[best].english<<endl;
    return 0;
}
