 #include <iostream>
using namespace std;

//int형을 두개 입력받아 큰 수를 출력하는 함수
int big(int a, int b);
//int형을 세개 입력받아 가장 큰 수를 출력하는 함수
int big(int a, int b, int c);

int main() {
    int x = big(3, 5); // 3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
    int y = big(300, 60); // 300과 60중 큰 값 300이 최대값 100보다 크므로, 100 리턴
    int z = big(30, 60, 50); // 30과 60 중 큰 값 60이 최대값 50보다 크므로, 50 리턴
    cout << x << ' ' << y << ' ' << z;
}

int big(int a, int b){
    if(a>b) {
        if (a > 100) return 100;
        else return a;
    }
    else {
        if (b > 100) return 100;
        else return b;
    }
}
int big(int a, int b, int c){
    if(a>b && a>c) {
        if(a<100) return a;
        else return 100;
    }
    else if (b>c){
        if(b<100) return b;
        else return 100;
    }
    else{
        if(c<100) return c;
        else return 100;
    }
}