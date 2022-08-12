/*
    -The makefile utility
        -not part of the C language
        -very helpful when developing larger programs
        -can help speed your development time

    -allows you to specify a list of files and their dependencies in a special file known as a Makefile

    -the make program automatically recompiles files only when necessary
        -based on the modification times of a file

    -if make finds that your source (.c) files is newer than your corresponding object (.o) file
        -automatically issues that commands to recompile the source files to create a new object file

    -you can even specify source files that depend on header files
        -you can specify that a module called datefuncs.o is dependent on its source file datefunc.c as well as the header file date.h
        -if you change anything inside the date.h header file, the make utility automatically recompiles the datefuncs.c file
            -based on the fact that the header file is newer than the source file

    Example

    SRC = mod1.c mod2.c main.c
    OBJ = mod1.o mod2.o main.o
    PROG = myProgram$(PROG):$(OBJ)
        gcc $(OBJ) -o $(PROG)

    $(OBJ): $(SRC)

    -this Makefile defines the set of source files (SRC)
    -this Makefile defines the corresponding set of object file (OBJ)
    -this Makefile defines the name of the executable (PROG)
    
    -also defines some dependencies ($(PROG):$(OBJ))
        -says that the executable is dependent on the object files
            -if one or more object files change, the executable need to be rebuilt
                -must be typed with a leading tab (gcc $(OBJ) -o $(PROG))

    -the last line of the Makeline ($(OBJ):$(SRC))
        -says that each object file depends on its corresponding source file
            -if a source file changes, its corresponding object file must be rebuilt
                -the make utility has built-in rules that tell it how to do that
*/

/*
    Running Make

    -here is what happens the first time you run make

    $ make
    gcc -c -o mod1.c mod1.c
    gcc -c -o mod2.o mod2.c
    gcc -c -o main.o main.c
    gcc mod1.o mod2.o main.o -o myProgram

    -make copiled each individual source file and the linked the resulting object files to create the executable

*/