// file
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

void readFile(){
    string file = getHome() + "/Desktop/num";

    ifstream fin;
    fin.open(file);
    if (!fin){
        cout << "Error";
        exit(1);
    }
    int val;

    while (!fin.eof())
    {
        fin >> val;
        if( fin.eof() ) break;    //https://stackoverflow.com/questions/21647/reading-from-text-file-until-eof-repeats-last-line
        cout << val << " " << endl;
    }
    

    fin.close();
}


int main(){
    return 0;
}
