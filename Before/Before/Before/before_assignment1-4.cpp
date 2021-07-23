#include <iostream>
using namespace std;

int main(void)
{
    char arr[1000];
    cin >> arr; // 문자열을 입력 받음 

    int l = strlen(arr);
    for (int i = 0; i < l; i++)
    {
        if (64 < arr[i] && arr[i] < 91) // 대문자를 소문자로 바꿈
            arr[i] += 32;

        else if (!(96 < arr[i] && arr[i] < 123)) // 소문자 이외의 문자 삭제
        {
            if (arr[i] != '\0')
                arr[i] = 0;
        }
    }

    for (int i = 0; i < l; i++) // 문자열 재출력
    {
        if (arr[i] != 0) // 0을 제외하고 출력 (특수문자 제거)
            cout << arr[i];
    }

    return 0;
}