/*
    Arrays of structures

    -a better methor for handling the 10 different dates involves the combination of two poweful features of the C programming language
        -structures and arrays
        -it is perfectly valid to define an array of structures
        -the concept of an array of structures is a very powerfull and important one in C
    
    -declaring an array of structures is like declaring any other kind of array

    struct date myDates[10];
*/

/*
    Array of structures

    -to identify members of an array of structures, you apply the same rule used for individual structures
        -follow the structure name with the dot operator and the with the member name
    
    -referencing a particular structure element inside the array is quite natural
        -to set the second date inside the myDates array to August 8,1986

    myDates[1].month=8;
    myDates[1].day=8;
    myDates[1].year=1986;
*/

/*
    Initializing an array of structures

    -initialization of arrays containing structures is similar to initialization of multidimensional arrays

    struct date myDates[5] = { {12,10,1975}, {12,30,1980}, {11,15,2005}};

    -sets the first three dates in the array myDate to 12/10/1975 , 12/30/1980, and 11/15/2005

    -the inner pairs of braces are optional

    struct date myDates[5] = {12,10,1975,12,30,1980,11,15,2005};

    -initializes just the third element of the array to the specified value

    struct date myDates[5] = {[2]={12,10,1975}};

    -sets just the month and day of the second element of the myDates array to 12 and 30

    struct date myDates[5] = {[1].month = 12 , [1].day = 30};
*/

/*
    Structures containing arrays

    -it is also possible to define structures that contain arrays as members
        -most common use is to set up an array of characters inside a structure
    
    -suppose you want to define a structure called month that contains as its members the number of days in the month as well as a three-character abbreviation for the month name

    struct month
    {
        int numberOfDays;
        char name[3];
    };

    -this sets up a month structure that contains an integer member called numberOfDays and a character member called name
        -member name is actually an array of three characters

    -you can now define a variable to be of type struct month and set the proper fields inside aMonth for January;

    struct month aMonth;
    aMonth.numberOfDays = 31;
    aMonth.name[0] = 'J';
    aMonth.name[1] = 'a';
    aMonth.name[2] = 'n';

    -you can also initialize this variable to the same values

    struct month aMonth = { 31, {'J','a','h'}};

    -you can set up 12-month structures inside an array to represent each month of the year

    struct month months[12];    
*/