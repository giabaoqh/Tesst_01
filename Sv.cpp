#include <iostream>
#include <string.h>
using namespace std;
struct SV{//1 sv co 4 thong tin
    string name;//Ten kieu string
    float math;//diem toan kieu float
    float physic;//diem ly kieu float
    float language;//diem TA kieu float
};
void Input(SV A[], int n);
void Output(SV A[], int n);
void Insert(SV x, int p, SV A[], int *n);
void Search(string x, SV A[], int n);
int main()
{
    int n = 2;
    SV A[10];
    Input(A, n);
    Output(A, n);
    SV x;
    cout << "Ten SV can chen: ";
    cin >> x.name;
    cout << "Toan: ";
    cin >> x.math;
    cout << "Ly: ";
    cin >> x.physic;
    cout << "NN: ";
    cin >> x.language;
    int p = 1;//Chen vap vi tri so 1
    Insert(x, p, A, &n);
    cout << "\nSau khi chen 1 SV vao vi tri " << p << endl;
    Output(A, n);
    string x1;
    cout << "Nhap ten sinh vien can tim: " <<endl;
    cin >> x1;
    Search(x1, A, n);
    return 0;
}
void Input(SV A[], int n){
    for (int i = 0; i < n; i++)
    {
      cout << "Nhap thong tin SV thu " << i + 1 << endl;
      cout << "Ten: ";
      cin >> A[i].name;
      cout << "Toan: ";
      cin >> A[i].math;
      cout << "Ly: ";
      cin >> A[i].physic;
      cout << "NN: ";
      cin >> A[i].language;
    }   
}
void Output(SV A[], int n){
    cout << "\n*****************************DANH SACH SINH VIEN****************************" << endl;
    cout << "Name \t|\t Toan \t|\t Ly \t|\t NN \t|\t TB" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i].name << "\t|\t " << A[i].math << "\t|\t ";
        cout << A[i].physic << "\t|\t " << A[i].language << "\t|\t ";
        cout << (A[i].math + A[i].physic + A[i].language)/3 << endl;
    } 
}
void Insert(SV x, int p, SV A[], int *n)
{
    *n = *n + 1;//tang n len 1
    for (int i = *n - 1; i > p; i--)
        A[i] = A[i -1];
    A[p] = x;
}
void Search(string x, SV A[], int n)
{
    int found = 0;
    cout << "\n*****************DANH SACH SINH VIEN TIM THAY******************" << endl;
    cout << "Name \t|\t Toan \t|\t Ly \t|\t NN \t|\t TB" << endl;
    for (int i = 0; i < n; i++)
        if(A[i].name==x)
        {
            found++;
            cout << A[i].name << "\t|\t " << A[i].math << "\t|\t ";
            cout << A[i].physic << "\t|\t " << A[i].language << "\t|\t ";
            cout << (A[i].math + A[i].physic + A[i].language)/3 << endl; 
        }
    if(found ==0)
        cout << "\nKhong tim thay sinh vien ten " << x;
    else
    cout << "\nTim thay " << found << " sinh vien ten " << x;
}
