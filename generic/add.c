
#ifndef GENERIC_FILE
#define GENERIC_FILE "./generic/add.c"
#else 

mytype add(mytype)(mytype a,mytype b)
{
    // return a+b;
    printf("%s",__func__);
}

#endif

