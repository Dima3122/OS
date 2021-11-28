#include <stdio.h>
#include <fcntl.h>	/* open() and O_XXX flags */
#include <sys/stat.h>	/* S_IXXX flags */
#include <sys/types.h>	/* mode_t */
#include <unistd.h>	/* close() */
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

using namespace std;

void new_file(char* filename);
void View_file(char* filename);
void Copy_file(char* filename1, char* filename2);
void create_point_to_file(char *oldpath, char *newpath);
void view_all_files(char *path);
void delete_file(char *filename);