#include<stdio.h>
#include<string.h>
#include"mp3.h"

int main(int argc, char*argv[])
{
    if(argc<2)
    {
        printf("------help------\n");
        printf("for view must pass 3 arguments like  \"./a.out\"  \"-v\" \"filename\" \n" );
        printf("for edit must pass 5 arguments like  \"./a.out\"  \"-e\" \"tag\" \"new info\" \"filename\" \n");
        return 0;


    }

    if(strcmp(argv[1],"-v")==0)
    {
        if(argc!=3)
        {
            printf("Enter the minimum 3 arguments for viewing\n");
            printf("----------help---------");
            printf("for view must pass 3 arguments like \"./a.out\" \"-v\"  \"filename\" \n");
            return 0;

        }
        char *dot=strstr(argv[2],".mp3");
        if(!(dot!=NULL&& strcmp(dot,".mp3")==0))
        {
            printf("please Enter .mp3 file\n");
            return 0;

        }

        mp3_project tags={0};

        view(argv[2],&tags);
        print_tag(&tag);
    }
}