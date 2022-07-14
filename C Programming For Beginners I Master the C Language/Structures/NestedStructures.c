/*
    Nested Structures

    -C allows you to define a structure that itself contains other structures as one or more of its members

    -you have seen how it is possible to logically group the month, day, and year into a structure called date
        -how about grouping the hours, minutes, and seconds into a structure called time

    struct time
    {
        int hours;
        int minutes;
        int seconds;
    };

    -in some applications, you might have the need to group both a date and a time together
        -you might need to set up a list of events that are to occur at a particular date and time

    -you want to have a convenient way to associate both the date and the time together
        -define a new structure, called, for example, dateAndTime, which contains as its members two elements
        -date and time

    struct dateAndTime
    {
        struct date sdate;
        struct time stime;
    };

    -the first member of this structure is of type struct date and is called sdate
    -the second member of the dateAndTime structure is of type struct time and is called stime

    -variables can now be defined to be of type struct dateAndTime

    struct dateAndTime event;
*/

/*
    Accessing members in a nested structure

    -to reference the data structure of the variable event, the syntax is the same as referencing any member

    event.sdate

    -to reference a particular member inside one of these structures, a period followed by the member name is tacked on the ened
        -the below statement sets the month of the date structure contained within event to October, and adds one to the seconds contained within the time structure

    event.sdate.month = 10;
    ++event.stime.seconds;

    -the event variable can be initialized just like a normal
        -sets the date in the variable event to Febraury 1,2015, and sets the time to 3:30:00

    struct dateAndTime event = {{2,1,2015},{3,30,0}};
    
    -you can use members' names in the initialization

    struct dateAndTime event =
        {{.month=2, .day=1, .year=2015},
         {.hour=3, .minutes=30, .seconds=0}
        };
*/

/*
    An array of nested structures

    -it is also possible to set up an array of dateAndTime structures

    struct dateAndTime events[100];

    -the array events is declared to contain 100 elements of type struct dateAndTime
        -the fourth dateAndTime contained within the array is referenced in the usual way as events[3]

    -to set the first time in the array to noon

    events[0].stime.hour = 12;
    events[0].stime.minutes = 0;
    events[0].stime.seconds = 0;
*/

/*
    Declaring a structure within a structure

    -you can define the Date structure within the time structure definition

    struct Time{
        struct Date
        {
            int day;
            int month;
            int year;
        } dob;
        int hour;
        int minutes;
        int seconds;
    }

    -the declaration is enclosed within the scope of the Time structure definition
        -it does not exist outside it
        -it becomes impossible to declare a Date variable external to the Time structure
*/