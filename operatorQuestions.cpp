// #include<iostream>
// using namespace std;

// int main()
// {
//     int x = 5;
//     bool res = (x == 4) && (x++);
//     cout << res << " " << x;
//     return 0;
// }

// Output: 0 5
// Reason: In and operation it will check first
//  condition if its false it wont look for second condition


// #include<iostream>
// using namespace std;

// int main()
// {
//     int x = 5;
//     bool res = (x == 4) || (x++);
//     cout << res << " " << x;
//     return 0;
// }

// Output: 1 6
// Reason: In or operation it will check first
//  condition if its false it will look for second condition
//  if second condition is true it will execute So x will __glibcxx_requires_can_increment



//  #include<iostream>
// using namespace std;

// int main()
// {
//     int x = 5;
//     bool res = (x == 4) && (x++);
//     cout << res << " " << x;
//     return 0;
// }

// Output: 1 5
// Reason: In and operation it will check first
//  condition if its True it wont look for second condition.

//  #include<iostream>
// using namespace std;

// int main()
// {
//     int x = 1, y = 2, z = 3, a;
//     a = (x, y, z);
//     cout << a;
//     return 0;
// }

// Output: 3 
// Reason: It will take last value in the bracket


// #include<iostream>
// using namespace std;

// int main()
// {
//     int x = 1, y = 2, z = 3, a;
//     a = x, y, z;
//     cout << a;
//     return 0;
// }

// Output: 1
// Reason: It will take first value


// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 10, b = 20, c = 30;
//     if (c>b>a)
//         cout << "Y";
//     else
//         cout << "N";
// }
// Output: N
// Reason: it will check c>b its true so it will return
//  value 1 now it will compare 1 with value
//   of a which is less so will return N


