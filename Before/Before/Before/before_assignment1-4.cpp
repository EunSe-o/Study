#include <iostream>
using namespace std;

int main(void)
{
    char arr[1000];
    cin >> arr; // ���ڿ��� �Է� ���� 

    int l = strlen(arr);
    for (int i = 0; i < l; i++)
    {
        if (64 < arr[i] && arr[i] < 91) // �빮�ڸ� �ҹ��ڷ� �ٲ�
            arr[i] += 32;

        else if (!(96 < arr[i] && arr[i] < 123)) // �ҹ��� �̿��� ���� ����
        {
            if (arr[i] != '\0')
                arr[i] = 0;
        }
    }

    for (int i = 0; i < l; i++) // ���ڿ� �����
    {
        if (arr[i] != 0) // 0�� �����ϰ� ��� (Ư������ ����)
            cout << arr[i];
    }

    return 0;
}