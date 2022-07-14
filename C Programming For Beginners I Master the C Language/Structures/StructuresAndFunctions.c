/*
    Structures as arguments to functions

    -after declaring a structure named Family, how do we pass this structure as an argument to a function?

    struct Family{
        char name[20];
        int age;
        char father[20];
        char mother[20];
    };

    bool sibling(struct Family member1, struct Family member2){
        if(strcmp(member1.mother,member2.mother)==0)
            return true;
        else
            return false;
    }

    -this function has two parameters, each of which is a structure
*/

/*
    Pointers to Structures as function arguments

    -you should use a pointer to a structure as an argument
        -it can take quite a bit of time to copy large structures as arguments, as well as requiring whatever amount of memory to store the copy of the structure
        -pointers to structures avoid the memory consumption and the copying time (only a copy of the pointer argument is made)
    
    bool siblings(struct Family *pmember1, struct Family *pmember2)
    {
        if(strcmp(pmember1->mother,pmember2->mother)==0)
            return true;
        else
            return false;
    }

    -you can also use the const modifier to not allow any modification of the members of the struct (what the struct is pointing to)

    bool siblings(Family const *pmember1, Family const *pmember2)
    {
        if(strcmp(pmember1->mother,pmember2->mother)==0)
            return true;
        else
            return false;
    }

    -you can also use the const modifier to not allow any modification of the pointers address
        -any attempt to change those structures will cause an error message during compilation

    bool sibling(Family *const pmember1, Family *const pmember2)
    {
        if(strcmp(pmember1->mother,pmember2->mother)==0)
            return true;
        else
            return false;
    }

    -the indirection operator in each parameter definition is now in front of the const keyword
        -not in front of the parameter name
        -you cannot modify the addresses stored in the pointers
        -its the pointers that are protected here, not the structures to which they point
*/

/*
    Returning a structure from a function

    -the function prototype has to indicate this return value in the normal way

    struct Date my_fun(void);

    -this is a prototype for a function taking no arguments that returns a structure of type Date

    -it is often more convenient to return a pointer to a structure
        -when returning a pointer to a structure, it should be created on the heap

    struct funs{
        char bank[FUNDLEN];
        double bankfund;
        char save[FUNDLEN];
        double savefund;
    };

    double sum(struct funds moolah)
    {
        return(moolah.bankfund + moolah.savefund);
    }

    int main(void)
    {
        struct funds stan = {
            "Garlic-Melon Bank",
            4032.27,
            "Lucky's Savings and Loan",
            8543.94
        };

        printf("Stan has a total of $%.2f.\n", sum(stan));

        return 0;
    }
*/

/*
    Reminder

    -You should always use pointers when passing structures to a function
        -it works on older as well as newer C implementation and that it is quick (you just pass a single address)

    -however, you have less protection for your data
        -some operations in the called function could inadvertently affect data in the original structure
        -use const qualifier solves that problem
    
    -advantages of passing structures as arguments
        -the function works with copies of the original data, which is safer than working with the original data
        -the programming style tends to be clearer

    -main disadvantages to passing structures as arugments
        -older implementations might not handle the code
        -wastes time and space
        -especially wasteful to pass large structures to a function that uses only one or two members of the structure

    -programmers use structure pointers as function arguments for reasons of efficiency and use const when necessary

    -passing structures by value is most often donde for structures that are small
*/