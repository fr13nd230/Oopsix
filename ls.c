#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

/*
 * ls: list all files and directories by default.
 * In Unix systems it has many forms, we will focus on the default only.
 * Usage: ls [-aril] path
 * */
int main(int argc, char *argv[]) {
  char *path = ".";
  if (argc > 1)
    path = argv[1];

  DIR *dir = opendir(path);
  if (!dir) {
    perror("opendir");
    exit(1);
  }

  struct dirent *dt;
  dt = readdir(dir);

  closedir(dir);
  return 0;
}
