#include <bits/stdc++.h>
using namespace std;

/*
if condtion
*/
int main()
{
int muhammad_age   , ahmed_age ;

/* Take the Inputs */

cout << "enter Muhammad Age : " ;
cin >> muhammad_age ;
cout << "\n" ;
cout << "enter Ahmed  Age : " ;
cin>> ahmed_age ;

cout << "\n" ;
if (muhammad_age>ahmed_age )
{

    cout << "Muhammad is bigger " ;
}
else if (muhammad_age<ahmed_age )
{

     cout << "Ahmed is bigger " ;
}
else {
    cout << "Both have the same Age  " ;
}


  return 0;
}
