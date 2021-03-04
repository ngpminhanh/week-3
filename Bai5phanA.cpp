#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(NULL));
    int a[30];
    for ( int i = 0; i < 30; i++)
    {
        a[i] = rand() % (30 - 0 +1);
    }
    int count;
    do{
        count = 0;
        for( int i = 0; i < 30; i++)
        {
            int tmp;
            if(a[i] > a[i+1])
            {
                swap(a[i], a[i+1]);
                count++;
            }

        }
    } while(count != 0) ;
    for ( int i = 0; i < 30; i++) cout << a[i] << " ";

}
