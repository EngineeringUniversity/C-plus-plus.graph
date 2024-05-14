//writeFile
#include <iostream>
#include <fstream>
#include <cstdlib>
// getHome
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>

using namespace std;

string getHome(){
    struct passwd *pw = getpwuid(getuid());

    const char *homedir = pw->pw_dir;
    return homedir;
}

void writeFile(){
    string file = getHome() + "/Desktop/my.txt";

    ofstream fout;
    fout.open(file);
    if (fout.fail()){
        cout << "Error opening file";
        exit(1);
    }

    fout << "Hello World!" << endl;
    fout << "second line" << endl;

    fout.close();
}


int main(){

    writeFile();

    return 0;
}
