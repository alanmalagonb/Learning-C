/*
    -methods can be used so that the modules contained in separate files can effectively communicate

    -if a function from one file need to call a function contained inside another file
        -a function call can be made in the normal fashion
            -arguments can be passed and returned in the usual way
        -in the file that calls the function, you should always make certain to include a prototype declaration
            -so that the compiler knows the function's argument types and the type of the return value

    -it is important to remember that even though more than one module might be specified to the compiler at the same time on the command line
        -the compiler compiles each module independently
            -means that no knowledge about structure definitions, function return types, or function argument types is shared across module compilations by the compiler

    -it is up to you to ensure that the compiler has sufficient information about such things to correctly compile each module
*/

/*
    External Variables

    -functions contained in separate files can communicate through external variables
        -an extension to the concept of the global variable

    -an external variable is one whose value can be accessed and changed by anothe module (file)

    -inside the module that wants to access the external variable
        -the variable data type is preceded with the keyword extern in the declaration
            -tells the compiler that a globally defined variable from another file is to be accessed

    -suppose you want to define an int variable called moveNumber
        -you want to access the value and possibly modify it within a function contained in another file

    int moveNumber = 0;

    -declare the above, at the beginning of your program, outside of any function
        -its value could be referenced by any function within that prorgma
        -moveNumber is defined as a global variable

    -this same definition of the variable moveNumber also makes its value accessible by functions contained in other files

    -the statement defines the variable moveNumber not just as a global variable, but also as an external global variable

    -to reference the value of an external global variable from another module
        -you must declare the variable to be accessed, preceding the declaration with the keyword extern

    extern int moveNumber;

    -the value of moveNumber can now be accessed and modified by the module in which the preceding declaration appears

    -other modules can also access the value of moveNumber by incorporating a similar extern declaration in the file
*/

/*
    Static Versus Extern Variables

    -there are situations that arise  in which you want to define a variable to be global but not external

    -you want to define a global variable to be local to a particular module (file)
        -it makes sense to want to define a variable this way if no fuctions other than those contained inside a particular file need access to the particular variable

    -In these situations, you should define the variable to be static

    -if the below declaration is made outside of any function
        -makes the value of the variable accessible from any subsequent point in the file in which the definition apperas
            -not from frunctions contained in other files

    static int moveNumber = 0;

    -if you need to define a global variable whose value does not have to be accessed from another file
        -declare the variable to be static
        -a cleaner approach to programming

    -the static declaration more accurately reflects that variable's usage
        -no conflicts can be created by two modules that unknowingly both use different external global variables of the same name
*/