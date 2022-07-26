// Continue

#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i<10; i++)
    {
        int x, y;
        cout << "Enter x and y ";
        cin >> x >> y;
        if (y == 0)
        {
            cout << "Invalid" << endl; 
            continue;
        }
    cout << x/y << " " <<endl;
    }
}

/*Input: 5 10
10 5
10 0
4 2
5 0
2 3
15 5
2 0
2 3
0 2

Output:
Enter x and y 0 
Enter x and y 2 
Enter x and y Invalid
Enter x and y 2 
Enter x and y Invalid
Enter x and y 0 
Enter x and y 3 
Enter x and y Invalid
Enter x and y 0 
Enter x and y 0
*/

// Break:

#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i<10; i++)
    {
        if (i == 5)
            break;
        cout << i << " ";
    }
}
/*

Output:
0 1 2 3 4 

*/

// Continue

#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i<10; i++)
    {
        if (i == 5)
            continue;
        cout << i << " ";
    }
}

//Output:

// 0 1 2 3 4 6 7 8 9 

// Return:

#include<iostream>
using namespace std;

int main()
{
    cout << "Begin ";
    for(int i = 0; i<10; i++)
    {
        if (i == 5)
            return 0;
        cout << i << " ";
    }
    cout << "End";
}

//Output:

// Begin 0 1 2 3 4 


// goto

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;
    if (n % 2 == 0)
        goto label1;
    else
        goto label2;
    label1:
        cout << "Even";
        return 0;
    label2:
        cout << "Odd";
}

// Input: 6
// Output: Even

//Begin

#include<iostream>
using namespace std;

int main()
{
    begin:
        int n;
        cout << "Enter a number ";
        cin >> n;
        if (n % 2 == 0)
            goto begin;
        else
            goto label2;
        label1:
            cout << "Even";
        label2:
            cout << "Odd";
}

// Input:6
// Output: Output has been truncated..
// please click on RUN to regenrate complete output when required.






