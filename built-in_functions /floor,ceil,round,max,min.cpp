#include <bits/stdc++.h>
using namespace std;

/*
max (,)
min (,)
floor ()
ceil  ()
round ()
*/
int main()
{
int   num1 , num2 ;
cout << "Enter ur first number : " ;
cin >> num1  ;
cout << "\n" ;

cout << "Enter ur second number : " ;
cin  >> num2 ;


cout << "\n-----------------------------------------------\n" ;
cout << "\n" ;
int max_num = max(num1 , num2) ;
int min_num  = min(num1 , num2) ;
cout <<"max ->  return maximum number  max(" << num1 << " , " << num2 << ") =  " << max_num  << endl ;
cout <<"min ->  return minimum number  min(" << num1 << " , " << num2 << ") =  " << min_num  << endl ;
cout << "\n" ;
cout << "\n====================================\n" ;
double double_num ;
cout << "Enter ur Double Number  : " ;
cin >> double_num  ;
cout << "\n" ;

cout << "\n-----------------------------------------------\n" ;

cout  << "ceil  (" << double_num <<") = " << ceil(double_num)  << endl ;
cout  << "floor ("<< double_num <<") = " << floor(double_num) << endl  ;
cout  << "round ("<< double_num <<") = " << round(double_num) << endl  ;

/*-----------------------------------------------------------------------------------------------------*/

  return 0;
}
