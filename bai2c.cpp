#include <iostream>

using namespace std;

int main()
{
    string word;
    cin >> word;
    int n = word.length();
    if(n % 2 == 1)
    {
        for(int i = 0; i < (n -1)/2; i++)
        {
            if(word[i] == word[n - 1 - i]);
            else {
                    cout << "No" ;
                    return 0;}
        }
    }
    else
    {
        for(int i = 0; i < n/2; i++)
        {
            if(word[i] == word[n-1-i]);
            else {
                    cout << "No";
                    return 0;}
        }
    }
    cout << "Yes";

    return 0;

}
