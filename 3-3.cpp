#include <iostream>
using namespace std;

//자료형에 관계없이 배열에 저장된 값을 모두 더하는 함수
template <class T>
T add(T arr[], int size){
    T sum=0;
    for(int i=0; i<size; i++)
        sum = sum+arr[i];
    return sum;
}

int main() {
    int x[] = {1, 2, 3, 4, 5};
    double d[] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7};

    cout << "sum of x[] = "<< add(x, sizeof(x)/sizeof(*x)) << '\n'; // 배열 x와 원소 5개의 합을 계산
    cout << "sum of d[] = "<< add(d, sizeof(d)/sizeof(*d)) << '\n'; // 배열 d와 원소 6개의 합을 계산
}