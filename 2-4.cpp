#include <iostream>
using namespace std;
char& find(char a[], char c, bool &success);

int main() {
    char s[] = "Mike";
    bool b = false;
    char& loc = find(s, 'M', b);
    if(b == false) {
        cout << "M을 발견할 수 없다" << '\n';
        return 0;
    }
    loc = 'm'; // 'M' 위치에 'm' 기록
    cout << s << '\n'; // "mike"가 출력됨
}

char& find(char a[], char c, bool &success){
    int size = (sizeof(a)/sizeof(*a)), index=0;
    for(int i=0; i<size; i++)
        if(a[i]==c) {
            index = i;
            success = true;
        }
    return a[index];
}
