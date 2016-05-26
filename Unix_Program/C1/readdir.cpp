#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

char DEFAULT_PATH[] = ".";

int main(int argc, char *argv[]) {
    DIR *dp;
    struct dirent *dirp;
    char *path;
    if (argc < 2) {
        path = DEFAULT_PATH;
    } else {
        path = argv[1];
    }
    if ((dp = opendir(path)) == NULL) {
        printf("can't open %s", path);
    }
    while ((dirp = readdir(dp)) != NULL) {
        printf("%s\n", dirp->d_name);
    }
    return 0;
}
