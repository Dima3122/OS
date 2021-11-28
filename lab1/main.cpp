#include "foo.hpp"

int main(int argc, char **argv)
{
    if(strcmp(argv[1], "New_file") == 0)
    {
        new_file(argv[2]);
    }
    else if(strcmp(argv[1], "View_file") == 0)
    {
        View_file(argv[2]);
    }
    else if(strcmp(argv[1], "Copy_file") == 0)
    {
        Copy_file(argv[2], argv[3]);
    }
    else if(strcmp(argv[1], "Remove_file") == 0)
    {
        delete_file(argv[2]);
    }
    else if(strcmp(argv[1], "create_point_to_file") == 0)
    {
        create_point_to_file(argv[2], argv[3]);
    }
    else if(strcmp(argv[1], "view_all_files") == 0)
    {
        view_all_files(argv[2]);
    }
    else
    {
        printf("Не правильно!");
    }    
    return 0;
}