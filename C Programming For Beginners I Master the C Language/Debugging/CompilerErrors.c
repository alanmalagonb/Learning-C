/*
    Understanding Compiler Errors and Warnings

    -it is sometimes very hard to understand what the compiler is complaining about
        -need to unedrstand compiler errors in order to fix them
        -it is sometimes difficult to identify the true reason behind a compiler error

    -the compiler makes decisions about how to translate the code that the programmer has not written in the code
        -is convenient because the programs can be written more succinctly (only expert programmers take advantage of this feature)

    -you should use an option for the compiler to notify all cases where there are implicit decisions
        -this option is -Wall
    
    -the comiler shows two types of problems
        -errors
            -a condition that prevents the creation of a final program
            -no executable is obtained until all the errors have been corrected
            -The first errors shown are the most reliable because the translation is finished but there are some errors that may derive from a previous ones
            -Fix the first errors are first, it is recommended to compile again and see if other later errors also disappeared.
        -warnings
            -messages that the compiler shows about "special" situations in which an anomaly has been detected
            -non-fatal errors
            -the final executable program may be obtained with any number of warning
            
        -compile always with the -Wall option and do not consider the program correct until all warnings have been eliminated
*/

/*
    most common compiler messages

    -'variable' undeclared (first use in this function)
        -this is one of the most commong and easier to detect
        -the symbol shown at the beginning of the message is used but has not been declared

    -warning: implicit declaration of function '...'
        -this warning appears when the compiler finds a function used in the code but no previous information has been given about it
        -need to declare a function prototype

    -warning: control reaches end of non-void functions
        -this warning appears when a function has been defined as returning a result but no return statement has been included to return this result
        -either the function is incorrectly defined or the statement is missing

    -warning: unused variable '...'
        -this warning is printed by the compiler when a variable is declared but not used in the code
        -message disappears if the declaration is removed


    -undefined reference to '...'
        -appears when ther eis a function invoked in the code that has not been defined anywhere
        -compiler is telling us that there is a reference to a function with no definition
        -check which function is missing and make sure its definition is compiled 

    -error: conflicting types for '...'
        -two definitions of a function prototype have been found
        -one is the prototype (the result type,name,parenthesis including the parameters, and a semicolon)
        -the other is the definition with the function body
        -the information in both places is not identical, and a conflict has been detected
        -the compiler shows you in which line the conflict appears and the previous definition that caused the contradiction
*/

/*
    runtime errors

    -the execution of C programs may terminate abruptly (crash) when a run-time error is detected
        -C programs only print the succinct message Segmentation fault
        -usually results in a core file depending on the signal that has been thrown
        -can analyze the core file and the call stack
*/