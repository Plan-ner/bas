#include <iostream>
using namespace std;

int main() {
    int number[10];                                         //ประกาศพื้นที่ข้อมูล int 10 ตัว
    int total = 0;                                          //ประกาศ total = 0

    for (int i = 0; i < 10; i++) {                          //loop ให้กรอกตัวเลขทั้งหมด 10 ครั้ง
        cout << "Enter integer " << (i + 1) << ": ";        
        cin >> number[i];
    }

    for (int i = 0; i < 10; i++) {                          //loop บวกตัวเลขไปเรื่อยๆจนกว่าจะครบจำนวน
        total += number[i];                                 // += แล้วนำไปเก็บค่าใน total
    }

    cout << "Total is: " << total << endl;                  //แสดงผลลัพธ์

    return 0;
}