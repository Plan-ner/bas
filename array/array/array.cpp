#include <iostream>
using namespace std;

int main() {
    int number[10];                                         //��С�Ⱦ�鹷������� int 10 ���
    int total = 0;                                          //��С�� total = 0

    for (int i = 0; i < 10; i++) {                          //loop ����͡����Ţ������ 10 ����
        cout << "Enter integer " << (i + 1) << ": ";        
        cin >> number[i];
    }

    for (int i = 0; i < 10; i++) {                          //loop �ǡ����Ţ�������樹���ҨФú�ӹǹ
        total += number[i];                                 // += ���ǹ���纤��� total
    }

    cout << "Total is: " << total << endl;                  //�ʴ����Ѿ��

    return 0;
}