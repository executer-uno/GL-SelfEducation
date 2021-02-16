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

using namespace std;

int getdir (string , vector<string> &);


int main(int argc, char* argv[]) {

	if(argc == 2){
		cout << "Path to scan files: " << argv[1] << endl;

		string dir = argv[1];
	    vector<string> files = vector<string>();

	    getdir(dir,files);

	    for (unsigned int i = 0;i < files.size();i++) {
	        cout << files[i] << endl;
	    }

	}
	else {
		cout << "Programm requires only one argument - path to scan files" << endl;
	}

    cout << "Goodbye."<< endl;
	return EXIT_SUCCESS;
}


int getdir (string dir, vector<string> &files)
{
    DIR *dp;
    struct dirent *dirp;
    if((dp  = opendir(dir.c_str())) == NULL) {
        cout << "Error(" << errno << ") opening " << dir << endl;
        return errno;
    }

    while ((dirp = readdir(dp)) != NULL) {
        files.push_back(string(dirp->d_name));
    }
    closedir(dp);
    return 0;
}
