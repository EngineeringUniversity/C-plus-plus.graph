#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>

using namespace std;

string getHome(){
    struct passwd *pw = getpwuid(getuid());
    const char *homedir = pw->pw_dir;
    return homedir;
}

int main(){
    cout << getHome();
}
