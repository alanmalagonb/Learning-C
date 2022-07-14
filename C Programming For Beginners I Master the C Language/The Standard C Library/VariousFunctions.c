/*
    String functions

    -to use any of these functions, you need to include the header file <string.h>

    -char *strcat(s1,s2)
        -concatenates the character string s2 to the end of s1, placing a null character at the end of the final string. The function returns s1

    -char *strchr(s,c)
        -searches the string s for the first occurrence of the character c. If it is found, a pointer to the character is returned; otherwise, a null pointer is returned

    -int strcmp(s1,s2)
        -compares strings s1 and s2 and returns a value less than zer if s1 is less than s2, equal to zero if s1 is equal to s2, and greater than zero if s1 is greater than s2

    -char *strcpy(s1,s2)
        -copies the string s2 to s1, returning s1

    -size_t strlen(s)
        -returns the number of characters in s, excluding the null character

    -char *strncat (s1,s2,n)
        -copies s2 to the end of s1 until either the null character is reached or n characters have been copied, whichever occurs first. Returns s1
    
    -int strncmp(s1,s2,n)
        -performs the same function as strcmp, except that at most n characters from the strings are compared

    -char *strncpy(s1,s2,n)
        -copies s2 to s1 until either the null character is reached or n characters have been copies, whichever occurs first. Returns s1

    -char *strrchr(s,c)
        -searches the string s for the last occurrence of the character c. If found, a pointer to the character in s is returned; otherwise, the null pointe is returned

    -char *strstr(s1,s2)
        -searches the string s1 for the first occurence of the string s2. If found, a pointer to the start of where s2 is located inside s1 is returned; otherwise, if s2 is not located inside s1, the null pointer is returned
    
    -char *strtok(s1,s2)
        -breaks the string s1 into tokens base on delimiter characters in s2
*/

/*
    character functions

    -to use these character functions, you must include the file <ctype.h>

    -isalnum,isalpha,isblank,iscntrl,isdigit,isgraph,islower,isspace,ispunct,isupper,isxdigit

    -int tolower(c)
        -returns the lowercase equivalent of c. If c is not an uppercase letter, c itself is returned

    -int toupper(c)
        -returns the uppercase equivalent of c. If c is not an lowercase letter, c itself is returned
*/

/*
    I/O functions

    -t use the most common I/O functions from the C library you should include the header file <stdio.h>

    -included in this file are declarations for the I/O functons and definitions for the names EOF,NULL,stdin,stdout,stderr(all constant values),and FILE

    -int fclose(filePtr)
        -closes the file idntified by filePtr and returns zero if the close is successful, or returns EOF if an error occurs

    -int feof(filePtr)
        -returns nonzero if the identified file has reached the end of the file and returns zero otherwise

    -int fflush (filePtr)
        -flushes(writes) any data from internal buffers to the indicated file, returning zero on success and the value EOF if an error occurs

    -int fgetc(filePtr)
        -returns the next character from the file identified by filePtr, or the value EOF if an end-of-file condition occurs. (Remember that this function returns an int)

    -int fgetpos(filePtr, fpos)
        -gets the current file position for the file associated with filePtr, storing it into the fpos_t(defined in <stdio.h>) variable pointed to by fpos. fgetpos returns zero on success, and returns nonzero on failure

    -char *fgets(buffer,i,filePtr)
        -reads characters from the indicated file, until either i-1 characters are read or a newline character is read, whichever occurs first

    -FILE *fopen(fileName,accessMode)
        -opens the specified file with the indicated access mode
    
    -int fprintf(filePtr,format,arg1,arg2,...,argn)
        -writes the specified arguments to the file identified by filePtr,according to the format specified by the character string format

    -int fputc(c,filePtr)
        -writes the value of c to the file identified by filePtr, returning c if the write is successful, and the value EOF otherwi

    -int fputs(buffer,filePtr)
        -writes the characters in the array pointed to by buffer to the indicated file until the terminating null character in bugger is reached
    
    -int fscanf(filePtr,format,arg1,arg2,...,argn)
        -reads data items from thefile identifies by filePtr, according to the format specified by the character string format
    
    -int fseek(filePtr,offset,mode)
        -positions the indicated file to a point that is offset(a long int) bytes from the beginning of the file, from the current position in the file, or from the end of the file, depending upon the value of mode (an integer)

    -int fsetpos(filePtr,fpos)
        -sets the current file position for the file associated with filePtr to the value pointed to by fpos, which is of type fpos_t(defined in <stdio.h>).Returns zero on success, and nonzero on failure

    -long ftell(filePtr)
        -returns the relative offset in bytes of the current position in the file identified by filePtr, or -1L on error
    
    -int printf(format,arg1,arg2,...,argn)
        -writes the specified arguments to stdout, according to the format specified by the character string. Returns the number of characters written.

    -int remove(fileName)
        -removes the specified file. A nonzero value is returned on failure

    -int rename(fileName1,fileName2)
        -renames the file fileName1 to fileName2, returning a nonzero result on failure.
    
    -int scanf(format, arg1, arg2,...,argn)
        -reads items from stdin according to the format specified by the string format
*/

/*
    Conversion functions

    -to use these functions that convert character strings to numbers you must include the header file <stdlib.h>

    -double atof(s)
        -converts the string pointed to by s into a floating-point number, returning the result
    
    -int atoi(s)
        -converts the string pointed to by s into an int, returning the result

    -int atol(s)
        -converts the string pointed to by s into a long int, returning the result

    -int atoll(s)
        -converts the string pointed to by s into a long long int, returning the result
*/

/*
    Dynamic Memory functions

    -to use these function that allocate and free memory dynamically you must include the stdlib.h header file

    -void *calloc (n,size)
        -allocates contiguous space for n items data, where each item is size bytes in length. The allocated space is initially set to all zeroes. On success, a pointer to the allocated space is returned; on failure, the null pointer is returned
    
    -void free (pointer)
        -returns a block of memory pointed to by pointer that was previously allocated by a calloc(),malloc(), or realloc() call

    -void *malloc(size)
        -allocates contiguous space of size bytes, returning a pointer to the beginning of the allocated block if successful, and the null pointer otherwise

    -void *realloc(pointer,size)
        -changes the size of a previously allocated block to size bytes, returning a pointer to the new block(which might have moved), or a null pointer if an error occurs
*/