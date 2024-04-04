#include <iostream>

using namespace std;

int main(void) {
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // cout << n << endl;
    return 0;
}




/*


3
4
5
6
7
8
9
10
11
12
13
14
15
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i)
    {
        cout << string(i,'*') << endl;
    }
    return 0;

*/