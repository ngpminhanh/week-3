#include <iostream>
using namespace std;
int main()
{
    int m , n;
    cin >> m >> n;
    char a[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> a[i][i];
        }
    }
     for(int i = 0; i < m; i++)
    {
        for(int i = 0; i < n; i++)
        {

            cout << a[i][i] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < m; i++)
    {
        for(int i = 0; i < n; i++)
        {
            int count = 0;
            if(a[i][i] == '*' ) cout << '*' << " ";
            else
            {
                if(a[i][i+1] == "." || a[i][i-1] == "." || a[i][i-1] == "." || a[i-1][i] == "." || a[i+1][i] == ".")
                {
                    count++;
                    if(a[i][i+1] == "." || a[i][i-1] == "." || a[i][i-1] == "." || a[i-1][i] == "." || a[i+1][i] == ".")
                    {
                        count++;
                    }
                    if(a[i][i+1] == "." || a[i][i-1] == "." || a[i][i-1] == "." || a[i-1][i] == "." || a[i+1][i] == ".")
                    {
                        count++;
                    }
                    if(a[i][i+1] == "." || a[i][i-1] == "." || a[i][i-1] == "." || a[i-1][i] == "." || a[i+1][i] == ".")
                    {
                        count++;
                    }
                    cout << count << " ";

                }
            }

        }
        cout << endl;
    }

}
