#include <iostream>
using namespace std;

//int형을 2개나 3개 입력받아 가장 큰 수를 출력하는 함수
//c의 가본값은 int 자료형의 최소값
int big(int a, int b, int c=-2147483648);

int main() {
    int x = big(3, 5); // 3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
    int y = big(300, 60); // 300과 60중 큰 값 300이 최대값 100보다 크므로, 100 리턴
    int z = big(30, 60, 50); // 30과 60 중 큰 값 60이 최대값 50보다 크므로, 50 리턴
    cout << x << ' ' << y << ' ' << z;
}

int big(int a, int b, int c){
    if(a>b && a>c) return a;
    else if (b>c) return b;
    else return c;
}