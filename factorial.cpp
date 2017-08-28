#include "functions.h"
#include<iostream>
using namespace std;
int factorial(int n){
    if(n<0)
    	{ cout<<"invalid number enter another no"<< endl;
    		cin>>n;
    	}
    	
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
