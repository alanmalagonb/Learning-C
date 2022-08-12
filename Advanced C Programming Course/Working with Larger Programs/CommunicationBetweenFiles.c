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