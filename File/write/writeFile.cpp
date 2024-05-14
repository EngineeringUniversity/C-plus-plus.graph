#include <iostream>
#include <string>
#include <fstream>

#include <sstream>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>

using namespace std;

string getHome(){
    struct passwd *pw = getpwuid(getuid());

    const char *homedir = pw->pw_dir;

    ostringstream oss;
    oss << homedir;
    return oss.str();
}

void writeFile(){
    string file = getHome() + "/Desktop/my.txt";

    ofstream file_out;
    file_out.open(file);

    file_out.close();
}


int main(){

    return 0;
}
