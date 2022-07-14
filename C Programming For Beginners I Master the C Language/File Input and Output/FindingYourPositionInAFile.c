/*
    File Positioning

    -for many applications you need to be able to access data in a file other than sequential order

    -there are various functions that you can use to access data in random sequence

    -there are two aspects to file positioning
        -finding out where you are in a file
        -moving to a given point in a file

    -you can access a file at a random position regardless of whether you opened the file
*/

/*
    Finding out where you are

    -you have two functions to tell you where you are in a file
        -ftell()
        -fgetpos()

    long ftell(FILE *pfile);

    -this function accepts a file pointer as an argument and returns a long integer value that specifies the current position in thefile

    long fpos = ftell(pfile);

    -the fpos variable now holds the current position in the file and you can use this to return to this position at any subsequent time
        -value is the offst in bytes from the beginning of the file
*/

#include <stdio.h>

void example2(FILE *fp);
void example3(FILE *fp);
void example4(FILE *fp);

int main(){
    FILE *fp;
    int len;

    fp = fopen("file.txt","r");
    if(fp == NULL){
        perror("Error opening file");
        return(-1);
    }
    fseek(fp,0,SEEK_END);

    len = ftell(fp);
    fclose(fp);

    printf("Total size of file.txt = %d bytes\n",len);

    example2(fp);
    example3(fp);
    example4(fp);

    return 0;
}

/*
    fgetpos()

    -the second function providing information on the current file position is a little more complicated

    int fgepos(FILE * pfile, fpost_t * position);

    -the first parameter is a file pointer
    -the second parameter is a pointer to a type that is defined in stdio.h
        -fpos_t - a type that is able to record every position within a file

    -the fgetpos() function is designed to be used with the positioning function fsetpos()

    -the fgetpos() function stores the current position and file state information for the file in position and returns 0 if the opertion is successful
        -returns a nonzero integer value for failure

    fpos_t here;
    fgetpos(pfile, &here);

    -the above records the current file position in the variable here
    -you must declare a variable of type fpos_t
        -cannot declare a pointer of type fpost_t* because there will not be any memory allocated to store the position data
*/

void example2(FILE *fp){
    fpos_t position;

    fp = fopen("file.txt","w+");
    fgetpos(fp, &position);
    fputs("Hello, World!", fp);

    fclose(fp);
}

/*
    Setting a position in a file

    -as a complement to ftell(), you have the fseek() function

    int fseek(FILE *pfile, long offset, int origin);

    -the first parameter is a pointer to the file you are repositioning
    -the second and third parameters define where you want to go in the file
        -second parameter is an offset from a reference point specified by the third parameter
        -reference point can be one of three values that are specified by the predefined name
            -SEEK_SET - defines the beginning of the file
            -SEEK_CUR - deines the current position in the file
            -SEEK_END - defines the end of the file

    -for a txt mode file, the second argument must be a value returned by ftell()

    -the third argument for text mode files must be SEEK_SET
        -for text files, all operations with fseek() are performed with reference to the beginning of the file
        -for binary files, the offset argument is simply a relative byte count
            -can therefore supply positive or negative values for the offset when the reference point is specified as SEEK_CUR
*/

void example3(FILE *fp){
    fp = fopen("file.txt","w+");
    fputs("This is Jason",fp);

    fseek(fp,7,SEEK_SET);
    fputs(" Hello how are you",fp);
    fclose(fp);

    return(0);
}

/*
    fsetpos()

    -you have the fsetpos() function to go with fgetpos()

    int fsetpos(FILE *pfile, const fpos_t *position);

    -the first paramete is a pointer to the open file
    -the second is a pointer of the fpos_t type
        -the position that is stored at the address was obtained by calling fgetpos()

    fsetpos(pfile, &here);

    -the variable here wsa previously set by a call to fgetpos()

    -the fsetpos() returns a nonzero value on error or 0 when it succeeds

    -this function is designed to work with a value that is returned by fgetpos()
        -you can only use it to get to a place in a file that you have been before
        -fseek() allows you to go to any position just by specifying the appropiate offset
*/

void example4(FILE *fp){
    fpos_t position;

    fp = fopen("file.txt","w+");
    fgetpos(fp, &position);
    fputs("Hello, World!",fp);

    fsetpos(fp, &position);
    fputs("This is going to override previous content",fp);
    fclose(fp);
}