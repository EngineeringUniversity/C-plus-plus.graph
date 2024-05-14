sch: https://www.google.com/search?q=c%2B%2B+get+home+path

https://stackoverflow.com/questions/2910377/get-home-directory-in-linux

```
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>

struct passwd *pw = getpwuid(getuid());

const char *homedir = pw->pw_dir;
```
