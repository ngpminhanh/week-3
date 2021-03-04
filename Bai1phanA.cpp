#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n == 4)
    {
        cin >> n;
    }
    int a[n] = {1, 2, 3, 4};
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    /*int n;
    cin >> n;
    int a[n] = {};
    for ( int i = 0 ; i < n; i++)
    {
        cout << a[i] << " ";
    } */ // cau a
    /*int n;
    cin >> n;
    int a[] = {1,2,3,4};
    for ( int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    } */ // cau c
}
