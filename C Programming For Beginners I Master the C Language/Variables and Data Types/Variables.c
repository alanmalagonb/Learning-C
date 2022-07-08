/*
    -A program needs to store the instructions of its program and the data that it acts upon while your computir is executing that program
        -This information is stored in memory(RAM)
        -RAM's contents are lost when the computer is turned off
        -Hard drives store persistent fata
    
    -Ram can be thinked as and ordered sequence of boxes
        -the box is full when it represents 1 or the box is empty when it represents 0
        -each box represents one binary digit, either 0 or 1 (true or false)
        -each box is called a bit

    -bits in memory are grouped into sets of eight (byte)
        -each byte has been labeled with a number(address)
        -the address of a byte uniquely references that byte in your computer's memory.
    
    -Memory consists of a large number of bits that are in groups of eight(called bytes) and each byte has a unique address
*/

/*
    Variables
    -The true power of programs you create is their manipulation of data
        -So , we need to understand the different data types you can use, as weel as how to create and name variables
    -Constants are types of data that do not change and retain their values throughout the life of the program
    -Variaables are types of data may change or be assigned values as the program runs
    -Variables are the names you can give to computer memory locations which are used to store values in a computer program
    -For example, assume you want to store two values 10 and 20 in your program and at a later stage, you want to use these two values
        -Create variables with appropiate names
        -Store your values in those two variables
        -Retrieve and use the stored values from the variables
*/

/*
    Naming Variables
    -The rules for naming variables in C is that all names must begin with a letter or underscore (_) and can be followed by any combination of letters(uppercase and lowercarse), underscores or the digits 0-9
        Jason
        myFlag
        i
        J5x7
        my_data
        _anotherVariable

    -The below lists some examples of invalid variable names
        temp$value - $ is not a valid character
        my flag - embedded spaces are not permitted
        3Jason - variable names cannot start with a number
        int- int is a reserved word

    -use meaningful names when selecting variable names
        -can dramatically increase the readability of a program and pay off in the debug and documentation phases
*/

/*
*/