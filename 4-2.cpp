#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<string> s(5);
    for(int i=0; i<5; i++) {
        cout<<"이름>>";
        getline(cin, s[i], '\n');
    }

    string max = s[0];
    for(int i=1; i<5; i++)
        if(s[i]>max) max = s[i];
    cout<<"사전에서 가장 뒤에 나오는 문자열은 "<<max<<'\n';

    return 0;
}