#include <iostream> 
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <limits.h>
#include <unordered_map>
using namespace std;

int average(int inputArr[10]){
    int sum= 0 ; 
    for(int i = 0 ; i < 10 ; i++){
        sum = sum + inputArr[i]; 
    } 
    return sum/10; 
}

int range(int inputArr[10]){
    int maxOut, minOut; 
    int max=INT_MAX; 
    int min= INT_MIN;  
    for(int i = 0 ; i < 10 ; i++){
        //find max 
        if(max < inputArr[i]){
            cout << "i is:"<< i<<endl; 
            maxOut = inputArr[i];
        }
        cout << "debug max out =="<< maxOut << endl; 
    }
    for(int j = 0 ; j < 10 ; j++){
        //find min
        if(min > inputArr[j]){
            cout << "j is:"<< j<<endl; 
            minOut = inputArr[j]; 
        }
        cout << "debug minOut is"<< minOut << endl; 
    }    //sub max from min
    cout << "MAX IS:"<<maxOut  <<endl << "MIN IS:"<< minOut << endl; 
    return (maxOut-minOut); 
}


int main() {
  int testArr[10]={12, 14, 16, 18, 20, 2, 4, 6, 8, 10} ; 
  int avg = average(testArr); 
  int rng = range(testArr);
  cout << "CST237 final problem 2 \n";
  cout << "\nFINAL OUTPUT\nKXD: range(" << rng <<") Avg("<< avg << ")"<< endl;  
//   char choice = 'Y';
//   cout << "Please Enter 10 array numbers:";
//   while(choice == 'Y'){
//       for(int i = 0 ; i < 10 ; i++){
//           cin >> testArr[i]; 
//       }
//       range(testArr); 
//       average(testArr); 
//   }

}

//{12, 14, 16, 18, 20, 2, 4, 6, 8, 10}