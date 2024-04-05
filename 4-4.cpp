#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, word_to_find, word_to_replace;
    cout<<"여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다.\n";
    getline(cin, s, '&');

    cout<<"find: ";
    getline(cin, word_to_find, '\n');

    cout<<"replace: ";
    getline(cin, word_to_replace, '\n');

    // 문자열에서 특정 단어를 찾아 바꾸는 작업을 반복
    size_t pos = s.find(word_to_find);
    while (pos != string::npos) {
        // 찾은 단어를 새 단어로 바꿈
        s.replace(pos, word_to_find.length(), word_to_replace);
        // 다음 단어를 찾음
        pos = s.find(word_to_find, pos + word_to_replace.length());
    }

    cout<<s<<'\n';
}