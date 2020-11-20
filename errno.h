#ifndef _ERRNO_H
#define _ERRNO_H

#define EDOM 0
#define EILSEQ 1
#define ERANGE 2

#define errno _errno

extern int _errno;

#endif