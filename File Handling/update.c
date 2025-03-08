#include<stdio.h>
int main() {
    FILE *file=fopen("example.txt","a");
    if (file==NULL){
        printf("error opening file for reading and writing.\n");
        return 1;
    }
  //  fseek(file,0,SEEK_SET);
    fprintf(file,"=== Hello World appended");
    fclose(file);
    printf("Data updated in file successfully.\n");
    return 0 ;
    }

