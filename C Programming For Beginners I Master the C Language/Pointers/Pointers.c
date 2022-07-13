/*
    Indirection

    -pointers are very similar to the concept of indirection that you employ in your everyday life
        -suppose you need to buy a new ink cartridge for your printer
        -all purchases are handled by the purchasing department
            -you call Joe in purchasing and ask him to order the new cartridge for you
            -Joe then calls the local supply store to order the cartridge
        -you are not ordering the cartridge directly from the supply store yourself(indirection)

    -in programming languages, indirection is the ability to reference something using a name,reference,or container, instead of the value itself

    -the most common form of indirection is the act of manipulating a value through its memory address

    -a pointer provides an indirect means of accessing the value of a particular data item
        -a variable whose values is a memory address
        -its value is the address of another location in memory that can contain a value

    -just as there are reasons why it makes sense to go though the purchasing department to order new cartridges (you don't have to know chich particular store the cartridges are being ordered form)
        -there are good reasons why it makes sense to use pointers in C
        
    -using pointers in your program is one of the most powerful tools available in the C language

    -pointers are also one of the most confusing concepts of the C language
        -it is important you get this concept figured out in the beginning and maintain a clear idea of what is happening as you dig deeper

    -the compiler must know the type of data stored in the variable to which it points
        -need to know how much memory os occupied or how to handle the contents of the memory to which it points
        -every pointer will be associated with a specific variable type
        -it can be used only to point to variables of that type

    -pointers of type "pointer to int" can point only to variables of type int
    -pointers of type "pointer to float" can point only to variables of type float

    int number = 99;
    int *pnumber = &number;

    pnumber <- &nubmer <- Adress: 1008 -> number
    1008                                   99

    -the value of &number is the address where number is located
        -this value is used to initialize pnumber in the second statement
*/

/*
    Why use pointers?

    -accessing data by means of only variables is very limiting
        -with pointers, you can access any location (you can treat any position of memory as a variable for example) and perform arithmetic with pointers

    -pointers in C make it easier to use arrays and strings

    -pointers allow you to refer to the same space in memory from multiple locations
        -means that you can update memory in one location and the change can be seen from another location in your program
        -can also save space by being able to share components in your data structures

    -pointers allow functions to modify data passed to them as variables
        -pass by reference-passing arguments to function in way they can be changed by function

    -can also be used to optimize a program to run faster or use less memory than it would otherwise

    -pointers allowus to get multiple values from the function
        -a function can return only one value but passing arguments as pointers we can get more than one values from the pointer

    -with pointers dynamic memory can be created according to the program use
        -we can save memory from static (Compile time) declarations

    -pointers allow us to design and develop complex data structures like a stack, queue, or linked list

    -pointers provide direct memory access
*/