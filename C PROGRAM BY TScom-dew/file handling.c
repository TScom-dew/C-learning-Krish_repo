#include<stdio.h>
#include<string.h>

int main(){
     
     FILE *fptr1=fopen("text.txt", "w");
     
     if(fptr1 ==NULL){
          perror("File status");
          return 0;
     }else{
          
          char name[100];
          printf("\nEnter your name: ");
          fgets(name, 100, stdin);
          
          name[strcspn(name, "\n")]='\0';
          
          fprintf(fptr1, "%s", name);
     }
     
     fclose(fptr1);
     
     // now opening file in reding mode
     
     FILE *fptr2=fopen("text.txt", "r");
     
     if(fptr2 ==NULL){
          perror("File status");
          return 0;
     }else{
          
          // fseek(fptr2, 0, SEEK_CUR);
          
          printf("\n");
          long pos1=ftell(fptr2);
          printf("pos1: %d\n", pos1);
          
          char ch=fgetc(fptr2);
          int t=10;
          while(ch !=EOF){
               printf("%c", ch);
               ch=fgetc(fptr2);
          }
          
          printf("\n");
          long pos2=ftell(fptr2);
          printf("pos2: %d\n", pos2);
          
     
     }
     
     fclose(fptr2);
     
     //;
     FILE *fptr3=fopen("text.txt", "w");
     
     if(fptr3 ==NULL){
          perror("File status");
          return 0;
     }else{
          
          char name[100];
          printf("\nEnter your village: ");
          fgets(name, 100, stdin);
          
          name[strcspn(name, "\n")]='\0';
          
          fprintf(fptr3, "%s", name);
     }
     
     fclose(fptr3);
     
     // now opening file in reding mode
     
     FILE *fptr4=fopen("text.txt", "r");
     
     if(fptr4 ==NULL){
          perror("File status");
          return 0;
     }else{
          
          fseek(fptr2, 0, SEEK_CUR);
          
          printf("\n");
          long pos3=ftell(fptr4);
          printf("pos3: %d\n", pos3);
          
          char ch=fgetc(fptr4);
          int t=10;
          while(ch !=EOF){
               printf("%c", ch);
               ch=fgetc(fptr4);
          }
          
          printf("\n");
          long pos4=ftell(fptr2);
          printf("pos4: %d\n", pos4);
          
     
     }
     
     fclose(fptr2);
     
     // 
     
     
     return 0;
}