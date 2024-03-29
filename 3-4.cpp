#include <iostream>

using namespace std;

//변수값 바꾸는 함수 정의
template <class T>
void swap(T *x, T *y){
    T tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

//배열을 입력받아 역순으로 정렬하는 함수
template <class T>
void reverseArray(T arr[], int size){
    for(int i=0; i<size/2; i++)
        swap(&arr[i], &arr[size-1-i]);
}

int main() {
    int x[] = {1, 10, 100, 5, 4};
    reverseArray(x, 5);
    for(int i=0; i<5; i++)
        cout << x[i] << ' '; // 4 5 100 10 1 출력
    cout << '\n';
}