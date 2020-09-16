#ifndef offsetof_h
#define offsetof_h

#ifdef offsetof
#error already define offsetof
#endif
//#define offsetof(type, member)  ((size_t) &((type*)0)->member)
//#define offsetof(type, member)    ((size_t) &((TYPE*)0)->MEMBER)
#define offsetof(TYPE, MEMBER)    ((size_t) &((TYPE *)0)->MEMBER)
#endif
