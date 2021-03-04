#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    cin >> n;
    srand(time(0));
    int a[n];
    for( int i = 0 ; i < n; i++)
    {
        a[i] = rand() % (n - 1 +1) + 1;
        cout << a[i] << " ";
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
    return 0;
}
