/*
    Writing characters to a text file

    -the simplest write operation is provided by the function fputc()
        -writes a single character to a text file

    int fputc(int ch, FILE *pfile);

    -the function writes the character specified by the first argument to the file identified by the second argument (file pointer)
        -returns the character that was written if successful
        -Return EOF if failure

    -In practice, characters are not usually written to a physical file one by one
        -extremely inefficient

    -the putc() function is equivalent to fputc()
        -requires the same arguments and the return type is the same
        -difference between them is that putc() may be implemented in the standard library as a macro, whereas fputc() is a function
*/

#include <stdio.h>

void example2(FILE *fp);
void example3(FILE *fp);

int main(){
    FILE *fp;
    int ch;

    fp=fopen("file.txt","w+");

    for(ch=33; ch<=100; ch++){
        fputc(ch, fp);
    }

    fclose(fp);
    
    example2(fp);

    example3(fp);

    return(0);
}

/*
    Writing a string to a text file

    -you can use the fputs() function to write to any file or stream

    int fputs(const char * str, FILE * pfile);

    -the first argument is a pointer to the character string that is to be written to the file

    -the second argument is the file pointer

    -this function will write characters from a string until it reaches a '\0' character
        -does not write the null terminator character to the file
            -can complicate reading back variable-length strings from a file that have been written by fputs()
            -expecting to write a line of text that has a newline character at the end
*/

void example2(FILE *fp){
    fp = fopen("file.txt","w+");

    fputs("This is Jason Fedin Course.", fp);
    fputs("I am happy to be here",fp);

    fclose(fp);

    return(0);
}

/*
    Writing formatted output to  file

    -the standard function for formatted output to a stream is fprintf()

    int fprintf(FILE *stream, const char *format,...)

    -the first arguemnt to this function is the pointer to a FILE object that identifies the stream

    -the second argument to ths function is the format
        -a C string that contians one or more of the following items
            -whitespace character
            -non-whitespace character
            -format specifiers
            -usage is simlar to printf, but, to a file
*/

void example3(FILE *fp){
    fp = fopen("file.txt","w+");
    fprintf(fp, "%s %s %s %s %d","Hello","my","number","is",555);

    fclose(fp);
    return(0);
}