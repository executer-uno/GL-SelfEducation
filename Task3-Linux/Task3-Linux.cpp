//============================================================================
// Name        : Task3-Linux.cpp
// Author      : PBazh
// Version     : 1
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <vector>

#include <thread>

using namespace std;

void listfiles (string );
void countfiles (string , uint &);


int getdir (string , vector<string> &);


int main(int argc, char* argv[]) {

	if(argc == 2){
		cout << "Path to scan files: " << argv[1] << endl;
		cout << "Files list: " << endl;

		string 	dir = argv[1];
		uint  	count = 0;

		// check argument is correct and directory exists
	    DIR *dp;
	    if((dp  = opendir(dir.c_str())) == NULL) {
	        cout << "Error(" << errno << ") opening " << dir << endl;
	        exit(EXIT_FAILURE);
	    }
	    closedir(dp);

	    // get things done by threads for counting and listing
		thread 	thr_count(countfiles, dir, ref(count));
		thread 	thr_print(listfiles, dir);

		// wait all tasks completed
		thr_print.join();
		thr_count.join();

		cout << "Files count: " << count << endl;
	}
	else {
		cout << "Programm requires only one argument - path to scan files" << endl;
	}

    cout << "Goodbye."<< endl;
	return EXIT_SUCCESS;
}

void countfiles (string dir, uint &count)
{
    DIR *dp;
    struct dirent *dirp;
    if((dp  = opendir(dir.c_str())) == NULL) {
        cout << "Error(" << errno << ") opening " << dir << endl;
    }

    count = 0;
    while ((dirp = readdir(dp)) != NULL) {
    	count++;
    }
}

void listfiles (string dir)
{
    DIR *dp;
    struct dirent *dirp;
    if((dp  = opendir(dir.c_str())) == NULL) {
        cout << "Error(" << errno << ") opening " << dir << endl;
    }

    while ((dirp = readdir(dp)) != NULL) {
        cout << dirp->d_name << endl;
    }
    closedir(dp);
}
