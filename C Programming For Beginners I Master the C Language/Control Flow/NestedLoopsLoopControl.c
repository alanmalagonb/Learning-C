/*
    Nestes loop

    -Place one loop inside another

    for(int i=1;i<=count;++i)
    {
        sum=0; // Initialize sum for the inner loop

        // Calculate sum of integers from 1 to i
        for(int j=1;j<=i;++j)
            sum+=j;
        
        printf("\n%d\t%d",i,sum); //Output sum of 1 to i
    }

    for(int i=1;i<=count;++i)
    {
        sum=1; //Initialize sum for the inner loop
        j=1; //Initialize integer to be added
        printf("\n1");

        //Calculate sum of integers from 1 to i
        while(j<i)
        {
            sum+=++j;
            printf(" + %d",j) //Output +j - on the same line
        }
        printf(" = %d",sum); //Output=sum
    }
*/

/*
    Continue statements

    -Sometimes a situation arises where you do not want to end a  loop, but you want to skip the current iteration

    -The continue statement in the body of a loop does this
        -All you need to do is use the keyword "continue;" in the body of the loop
    
    -An advantage of using continue is that it can sometimes eliminate nesting or additional blocks of code
        -can enhance readability when the statements are long or are deeply nested already
    
    -Don't use continue if it complicates rather than simplifies the code

    enum Day{Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};

    for(enum Day day=Monday;day<=Sunday;++day)
    {
        if(day==Wednesday)
            continue;
        printf("It's not Wednesday!\n");
        // Do something useful with day
    }
*/

/*
    Break statement

    -normally, after the body of a loop has been entered, a program executes all the statements in the body before doing the next loop test
        -we learned how continue works
        -another statement named break alters this behavior
    
    -the break statement causes the program to immediately exit from the loop it is executing
        -statements in the loop are skipped, and execution of the loop is terminated
        -if the break statement is inside nested loops, it affects onoly the innermost loop containing it
        -use the keyword "break;"
    
    -break is often used to leave a loop when there are two separate reasons to leave

    -break is also used in switch statements

    while(p>0)
    {
        printf("%d\n",p);
        scanf("%d",&q);
        while(q>0)
        {
            printf("%d\n",p*q);
            if(q>100)
                break; // break from inner loop
            scanf("%d",&q);
        }
        if(q>100)
            break; // break from outer loop
        scanf("%d",&p)
    }
*/