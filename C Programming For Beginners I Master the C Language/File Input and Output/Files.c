/*
    -up until this points, all data that our program accesses is via memory
        -scope and variety of applications you can create is limited

    -all serious business applications require more data than would fit into main memory
        -also depende on the ability to process data that is persistent and stored on an external device such as a disk drive

    -C provides many functions in the header file stdio.h for writing to and reading from external devices
        -the external device you would use for storing and retrieving data is typically a disk drive
        -however, the library will work with virtually any external storage device

    -with all the examples up to now, any data that the user enters is lost once the program ends
        -if the user wants to run the program with the same data, he or she must enter it again each time
        -very inconvenient and limits programming
        -referred to as volatile memory
*/

/*
    Files

    -programs need to store data on permanent storage
        -non-volatile
        -continues to be maintained after your computer is turned off

    -a file can store non-volatile data and is usually stored on a disk or a solid-state device
        -a named section of storage
        -stdio.h is a file containing useful information

    -C views a file as a continuous sequence of bytes
        -each byte can be read individually
        -corresponds to the file structure in the Unix environments

    -a file has a beginning and an end and a current position (defined as so many bytes from the beginning)

    -the current position is where any file action (read/write) will take place
        -you can move the current position to any point in the file (even the end)
*/

/*
    Text and binary files

    -there are two ways of writing data to a stream that represents a file
        -file
        -binary
    
    -text data is written as a sequence of characters organized as lines (each line ends with a newline)

    -binary data is written as a series of bytes exactly as they appear in memory
        -image data, music encoding - not readable

    -you can write any data you like to a file
        -once a file has been written, it just consists of a series of bytes
    
    -you have to understand the format of the file in order to read it
        -a sequence of 12 bytes in a binary file could be 12 characters, 12 8-bit signed integers, 12 8-bit unsigned integers, etc.
        -in binary mode, each and every byte of the file is accessible
*/

/*
    Streams
    
    -C programs automatically open three files on your behalf
        -standard input - the normal input device for your system, usually your keyboard
        -standard output - usually your display screen
        -standard error - usually your display screen
    
    -standard input is the file that is read by getchar() and scanf()

    -standard output is used by putchar(), puts(), and printf()
        -redirection causes other files to be recognized as the standard input or standard output

    -the purpose of the standard error output file is to provide a logically distinct place to send error messages

    -a stream is an abstract representation of any external source or destination for data
        -the keyboard, the command line on your display, and files on a disk are all examples of things you can work with as streams
        -the C library provides functions for reading and writing to or from data streams
            -you use the same input/output functions for reading and writing any external device that is mapped to a stream
*/