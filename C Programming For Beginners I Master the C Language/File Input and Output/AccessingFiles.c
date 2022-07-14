/*
    Accessing Files

    -files on disk have a name and the rules for naming files are determined by your operating system
        -You may have to adjust the names depending on what OS your program is running

    -a program references a file through a file pointer (or stream pointer, since it works on more than a file)
        -you associate a file pointer with a file programmatically when the program is run
        -pointers can be reused to point to different files on different occasions
    
    -a file pointer points to a struct of type FILE that represents a stream
        -contains information about the file
            -whether you want to read or write or update the file
            -the address of the buffer in memory to be used for data
            -a pointer to the current position in the file for the next operation
        -the above is all set via input/output file operations
    
    -if you want to use several files simultaneously in a program, you need a separate file pointer for each file
        -there is a limit to the number of files you can have open at one time
            -defined as FOPEN_MAX in stdio.h
*/

/*
    Opening a File

    -you associate a specific external file name with an internal file pointer variable through a process referred to as opening a file
        -via the fopen() function
            -returns the file pointer for a specific external file

    -the fopen() function is defined in stdio.h

    FILE *fopen(const char * restrict name, const char * restrict mode);

    -The first argument to the function is a pointer to a string that is the name of the external file you want to process
        -you can specify the name explicitly or use a char pointer that contains the address of the character string that defines the file name
        -you can obtain the file name through the command line, as input from the user, or defined as a constant in your program

    -the second argument to the fopen() function is a character string that represents the file mode
        -specifies what you want to do with the file
        -a file mode specification is a character string between double quotes

    -assuming the call to fopen() is successfull, the function returns a pointer of type FILE* that you can use to reference the file in further input/output operations using other functions in the library

    -if the file cannot be opened for some reason, fopen() returns NULL
*/

/*
    File Modes (only apply to text files)

    Mode    Description
    "w"     Open a text file for write operations. If the file exists, its current contents are discarded.
    "a"     Open a text file for append operations. All writes are to the end of the file.
    "r"     Open a text file for read operations.
    "w+"    Open a text file for update (reading and writing), first truncating the file to zero length if it exists or creating the file it it does not exist
    "a+"    Open a text file for update (reading and writing) appending to the end of the existing file, or creating the file if it does not yet exist
    "r+"    Open a text file for update (reading and writing),
*/

/*
    Write Mode

    -If you want to write to an existing text file with the name myfile.txt

    FILE *pfile = NULL;
    char *filename = "myfile.text";
    pfile = fopen(filename, "w"); // Open myfile.txt to write it
    if(pfile != NULL)
        printf("Failed to open %s.\n",filename);

    -opens the file and associates the file with the name myfile.txt with your file pointer pfile
        -the mode as "w" means you can only write to the file
        -you cannot read it

    -If a file with the name myfile.txt does not exist, the call to fopen() will create a new file with this name
        -you can also specify a string that is the full path and name for the file

    -on opening a file for writing, the file length is truncated to zero and the position will be at the beginning of any existing data for the first operation
        -any data that was previously written to the file will be lost and overwritten by any write operations
*/  

/*
    Append Mode

    -If you want to add to an existing text file rather than overwrite it
        -specify mode "a"
        -the append mode of operation
    
    -this positions the file at the end of any previously written data
        -If the file does not exist, a new file will be created
    
    pFile = fopen("myfile.txt","a");    // Open myfile.txt to add to it

    -do not forget that you should test the return value for null each time

    -when you open a file in append mode
        -all write operations will be at the end of the data in the file on each write operation
        -all write operations append data to the file and you cannot update the existing contents in this mode
*/

/*
    Read Mode

    -if you want to read a file
        -open it with mode argument as "r"
        -you can not write to this file

    pFile = fopen("myfile.txt","r");

    -this positions the file to the beginning of the data

    -if you are going to read the file
        -it must already exist

    -If you try to open a file for reading that does not exist, fopen() will return a file pointer of NULL

    -you always want to check the value returned from fopen
*/

/*
    Renaming a file

    -renaming a file is very easy
        -use the rename() function

    int rename(const char *oldname, const char *newname);

    -the integer that is returned will be 0 if the name change was successful and nonzero otherwise

    -the file must not be open when you call rename(), otherwise the operation will fail

    if(rename("C:\\temp\\myfile.txt","C:\\temp\\myfile_copy.txt"))
        printf("Failed to rename file.");
    else
        printf("File renamed successfully.");

    -this will change the name of myfile.txt in the temp directory on drive C to myfile_copy.txt

    -if the file path is incorrect or the file does not exist, the renaming operating wil fail
*/

/*
    Closing a file

    -when you have finished with a file, you need to tell the operating system so that it can free up the file
        -you can do this by calling the fclose() function
    
    -fclose() accepts a file pointer as an argument
        -returns EOF (int) if an error occurs
            -EOF is a special character called the end-of-file character
            -defined in stdio.h as a negative integer that is usually equivalent to the value-1
        -0 if successful

    fclose(pfile);  // Close the file associated with pfile
    pfile = NULL;

    -the result of calling fclose() is that the connection between the pointer, pfile, and the physical file is broken
        -pfile can no longer be used to access the file

    -if the file was being written, the current contents of the output buffer are written to the file to ensure that data is not lost

    -It is good programming practica to close a file as soon as you have finished with it
        -protects against output data loss

    -you must also close a file before attempting to rename it or remove it
*/

/*
    Deleting a file

    -you can delete a file by invoking the remove() function
        -declared in stdio.h

    remove("myfile.txt");

    -will delete the file that has the name myfile.txt from the current directory

    -the file cannot be open when you try to delete it

    -you should always double check with operations that delete files
        -you could wreck your system if you do not
*/