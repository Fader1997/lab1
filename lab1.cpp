#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    cout << a << " ";
    if (a == 1)
    {
	return 0;
    }
    else if(a != 1)
    {
        for(;;)
        {
            if((a % 2) == 1)
            {
                a = 3 * a + 1;
                cout << a << " ";
            }
            else if((a % 2) == 0)
            {
                a = a / 2;
                cout << a << " ";
            }

            if(a == 1)
            {
                return 0;
            }
            else if(a != 1)
            {
                continue;
            }
        }
    }

    return 0;
}
