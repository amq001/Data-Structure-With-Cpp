/*
Chapter 1: Flow chart and Pseudo code

Topics:
1)Sum of two numbers
2)Area of a square
3)Min of two numbers
4)Is number even or odd
5)Sum of number from 1 to n
6)is number Prime or not


// Recommended by Cursor
2)Factorial of a number
3)Fibonacci series
5)Armstrong number
6)Palindrome number
7)Perfect number
8)Strong number
9)Magic number
10)Harshad number
*/

#include <iostream>
using namespace std;

int main() {


// 3) Min of two numbers
/*

*/

// 4) Is number even or odd
/*
 int a;
 cout << "Enter a number:"<<endl;
 cin >> a;
 if(a%2==0){
    cout<<"Number is even"<<endl;
 }
 else{
    cout<<"Number is odd"<<endl;
 }
*/

// 5) Sum of number from 1 to n
/* 
Formula n-(n+1)/2
*/


/*
int count = 1 , sum = 0;
int a;
cout<<"Enter a number:"<<endl;
cin>>a;
while(count<=a){
    sum+=count;
    count++;
}
// for(int i=1;i<=a;i++){
//   sum+=i;
// }
cout<<"Sum of number from 1 to "<<a<<" is "<<sum<<endl;
*/

// 6)is number Prime or not
    int a;
    cout<<"Enter a number:"<<endl;
    cin>>a;

    bool isPrime = true;

if(a>2){
    for(int i=2;i<a;i++){
        if(a%i==0){
            isPrime = false;
            break;
        }

    }
    if(isPrime){
        cout<<"Number is prime"<<endl;
    } 
}
    else{
        cout<<"Number is not prime"<<endl;
    }


  return 0; 
}

/*
// HomeWork
1)calculate simple interest : si= principle * rate * time (Prt)
2)Max of two numbers
3)Factorial of a number
4)person can drive or not (age>18)
*/






