/*
    Reading characters from a text file

    -the fgetc() function reads a character from a text file that has been opened for reading

    -takes a file pointer as its only argument and returns the character read as type int

    int mchar = fgetc(pfile);   // Reads a character into mchar with pfile a File pointer

    -the mchar is type int because EOF will be returned if the end of the file has been reached

    -the function getc(), which is equivalent to fgetc(),is also available
        -requires an argument of type FILE* and returns the character read as type int
        -virtually identical to fgetc()
        -only difference between them is that getc() may be implemented as a macro, whereas fgetc() is a function

    -you can read the contents of a file again when necessary
        -the rewind() function position the file that is specified by the file pointer argument at the beginning
*/

#include <stdio.h>

void example2(FILE *fp);
void example3(FILE *fp);

int main(){
    FILE *fp;
    int c;
    
    fp = fopen("file.txt","r");

    if(fp == NULL){
        perror("Error in opening file");
        return(-1);
    }

    // read a single char
    while((c = fgetc(fp)) != EOF)
        printf("%c", c);

    fclose(fp);
    fp = NULL;

    example2(fp);
    example3(fp);

    return(0);
}

/*
    Reading a string from a text file

    -you can use the fgets() function to read from any file or stream

    char *fgets(char *str, int nchars, FILE *stream)

    -the function reads a string into the memory area pointed to by str, from the file specified by stream
        -characters are read until eithe a '\n' is read or nchars-1 characters have been read frm the stream, whichever occurs first
    
        -if a newline character is read, it's retained in the string
            -a '\0' characte will be appended to the end of the string

        -if there is no error, fgets() returns the pointer, str

        -if there is an error, NULL is returned

        -reading EOF causes NULL to be returned
*/  

void example2(FILE *fp){
    char str[60];

    // opening file for reading
    fp = fopen("file.txt","r");

    if(fp == NULL){
        perror("Error opening file");
        return(-1);
    }

    if(fgets(str,60,fp)!=NULL){
        // writing content to stdout
        printf("\n%s",str);
    }

    fclose(fp);
    fp=NULL;
}

/*
    Reading formatted input from a file
    
    -you can get formatted input from a file by using the standard fscanf() function

    int fscanf(FILE *stream, const char *format, ...)

    -the first argument to this function is the pointer to a FILE object that identifiers the stream

    -the second argument to this function is the format
        -a C string that contanis one or more of the following items
            -whitespace character
            -non-whitespace character
            -format specifiers
            -usage is similar to scanf, but, from a file
*/

void example3(FILE *fp){
    char str1[10], str2[10], str3[10];
    int year;
    
    fp = fopen("file.txt","w+");
    if(fp!=NULL)
        fputs("Hello how are you",fp);

    rewind(fp);

    fscanf(fp, "%s %s %s %d",str1,str2,str3,&year);

    printf("Read String1 |%s|\n",str1);
    printf("Read String2 |%s|\n",str2);
    printf("Read String3 |%s|\n",str3);
    printf("Read String4 |%d|\n",year);

    fclose(fp);

    return(0);
}