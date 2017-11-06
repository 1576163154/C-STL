#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;



void main() {
	const char *str = "Try not. Do, or do not. There is no try.";
  char target = 'T';
  const char *result = str;
 
  while((result = strchr(result, target)) != NULL) {
	  cout << result << endl;
    ++result; // Increment result, otherwise we'll find target at the same location
  }
  s ss;
  cout <<"initial : "<< sizeof(ss) << endl;
  

  

  cout << "after initialized : " << sizeof(ss) << endl;
	system("pause");
}