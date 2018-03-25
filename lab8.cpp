#include <iostream>
#include <dirent.h>
#include <sys/types.h>

using namespace std;

int main()
{
    DIR* dp = opendir(".");
    struct dirent *res;

    while ((res = readdir(dp)) != NULL) {
        cout << res->d_name << "\n";
    }
    closedir(dp);


    return 0;
}
