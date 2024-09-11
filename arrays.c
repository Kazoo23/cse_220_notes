/*
allowed to have a unkown size for declaration
c will not catch illegal accesses,
     ex int x[4] , x[1024] = 6 will not be caught, a newer compiler might though
 "/0" indicates the end of a string (char array)
 create strings like this
    char str[] = "Hello";
 otherwise have to do this or won't count as a string
    char str[] = {'H','e','l','l','o','\0'};

 * indicates a pointer
 char *str = "Hello, CSE 220";

 with non string arrays need to keep track of the size of the array
*/