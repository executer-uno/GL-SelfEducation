//============================================================================
// Name        : Task1-Stack.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

uint sum_fibonacci(uint , uint , uint );

int main(void) {

	string 	line;
	ulong	n;

    cout << "Enter amount of Fibonacci numbers > ";
    getline(cin, line);

    n=stoul(line);
    cout << "You ask for " << n << " numbers" << endl;

    switch(n){
    case 0:
    case 1:

    	break;
    case 2:

    	break;
    default:
        sum_fibonacci(0,1,n-3);
    }

    cout << "Goodbye.\n";
	return EXIT_SUCCESS;
}

// Fibonacci recursion calculation
// i - actual element
// j - next element
// n - progression's element number limit
uint sum_fibonacci(uint i, uint j, uint n){

	cout << "next element " << i << " + " << j << " = " << i+j << endl;

	if(n){
		sum_fibonacci(j, i+j, --n);
	}

	return 0;
}
