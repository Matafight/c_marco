#define CONCAT(A,B) A##_##B
#define add(mytype) CONCAT(add,mytype)
#define mytype float
#line 1 GENERIC_FILE
#include GENERIC_FILE
#undef mytype

//  这个undef很重要，不加就报错
#undef add
#undef GENERIC_FILE