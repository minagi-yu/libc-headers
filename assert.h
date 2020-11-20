#ifndef _ASSERT_H
#define _ASSERT_H

#undef assert
#undef _assert

#ifdef NDEBUG
#define assert(e)       ((void)0)
#else
#define assert(e)       ((e) ? (void)0 : _assert(e))
#endif

void _assert(int expression);

#endif