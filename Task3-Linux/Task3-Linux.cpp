//============================================================================
// Name        : Task3-Linux.cpp
// Author      : PBazh
// Version     : 1
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;



int main(int argc, char* argv[]) {

	if(argc == 2){
		cout << "Path to scan files: " << argv[1] << endl;

	}
	else {
		cout << "Programm requires only one argument - path to scan files" << endl;
	}

    cout << "Goodbye."<< endl;
	return EXIT_SUCCESS;
}

