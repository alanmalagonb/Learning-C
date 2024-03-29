/*
    -include files are great for grouping all you commonly used definitions inside a file

    -you can the simply include the file in any program that needs to use those definitions

    -no where is the usefulness of the #include facility greater than in developing programs that have been divided into separate program modules

    -if more than one programmer is working on developing a particular program, include files provide a means of standardization
        -each programmer is using the same definitions, which have the same values
        -each programmer is also spared the time-consuming and error-prone task of typing these definitions into each file that must use them

    -by centralizing the definition of comman data structures into one or more include files
        -you eliminate the error that is caused by two modules that use different definitions for the same data structure
        -if a change has to be made to the definition of a particular data structure, it can be done in one place only--inside the include file
*/