#include "foo.hpp"

void new_file(char* filename)
{
    FILE *fp;
    if((fp=fopen(filename, "w"))==NULL) 
    {
        printf ("Cannot open file.\n");
        exit(1);
    }
    fclose(fp);
}

void View_file(char* filename)
{
    FILE *fp = fopen(filename, "r");
    if(fp == NULL) 
    {
        printf ("Cannot open file.\n");
        exit(1);
    }
    fseek (fp, 0, SEEK_END);
    int size = ftell(fp);
    fseek(fp ,0, SEEK_SET);
    
    char *buffer = (char*)malloc(size* 1.5 * sizeof(char));
    fread(buffer, 1 , size, fp);

    for(int i = 0; i < size; i++)
    {    
    	printf("%c", buffer[i]); // Функция вывода
    }
    fclose(fp);
    printf("\n");
}

void delete_file(char *filename)
{
    if(remove(filename) == -1)
    {
        printf ("Cannot remove file.\n");
    }
    else
    {
        printf("file sucsesfull removed\n");
    }
}

void Copy_file(char* filename1, char* filename2)
{
    FILE *fp;
    if((fp=fopen(filename1, "r"))==NULL) 
    {
        printf ("Cannot open file.\n");
        exit(1);
    }
    fseek (fp, 0, SEEK_END);
    int size = ftell(fp);
    fseek(fp ,0, SEEK_SET);
    char *buffer = (char*)malloc(size* 1.5 * sizeof(char));
    fread(buffer, 1 , size, fp);
    FILE *f;
    if((f=fopen(filename2, "w"))==NULL) 
    {
        printf ("Cannot open file.\n");
        exit(1);
    }
    fwrite(buffer, 1, size, f);
    fclose(fp);
    fclose(f);
}

void create_point_to_file(char *oldpath, char *newpath)
{
    symlink(oldpath, newpath);
}

void view_all_files(char *path)
{
    DIR *dir;
    struct dirent *de;

    dir = opendir(path); 
    while(dir)
    {
        de = readdir(dir);
        if (!de)
        {
            break;
        }
        printf("%s\n", de->d_name);
    }
    closedir(dir);
}