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

int main(){
    cout << getHome();
}
