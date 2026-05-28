#include<stdio.h>
#include<string.h>

int main(){
     
    char name[]="ashlok kumar hazaribagh , jharkhand";
    /*
    delimiter can not be character it always should be
    string type.
    */
    char delimiter[]=" ";
    char *token=strtok(name, delimiter);
    
    printf("word1 : %s\n", token);
    
    token=strtok(NULL, delimiter);
    
    printf("word2 : %s\n", token);
    
    token=strtok(NULL, delimiter);
    
    printf("word3 : %s\n", token);
    
    char other_delimiter[]=", ";
    
     token=strtok(NULL, other_delimiter);
    
    printf("word4 : %s\n", token);
    
     return 0;
}