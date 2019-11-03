
#define CONCAT(A,B) A##_##B
#define add(mytype) CONCAT(add,mytype)
#define mytype int 
#line 1 GENERIC_FILE
#include GENERIC_FILE
#undef mytype

#undef add
// #undef CONCAT
#undef GENERIC_FILE