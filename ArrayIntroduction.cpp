#include<stdio.h>
#include<iostream>
using namespace std;


int main() {
    int h ;
    cin >> h;
    int a[h] ;
    for(int i =  0 ; i<h ;i++)
    {
        cin >> a[i];
    }
    for(int i=h-1 ; i>=0 ; i--)
    {
        cout << a[i] << " ";
    }
  
    return 0;
}
