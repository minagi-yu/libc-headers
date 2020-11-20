#ifndef _FENV_H
#define _FENV_H

typedef unsigned int fenv_t;
typedef unsigned int fexcept_t;

#define FE_DIVBYZERO 0
#define FE_INEXACT 1
#define FE_INVALID 2
#define FE_OVERFLOW 3
#define FE_UNDERFLOW 4
#define FE_ALL_EXCEPT 5

#define FE_DOWNWARD 0
#define FE_TONEAREST 1
#define FE_TOWARDZERO 2
#define FE_UPWARD 3

#define FE_DFL_ENV 0

int feclearexcept(int excepts);
int fegetexceptflag(int excepts);
int feraiseexcept(int excepts);
int fesetexceptflag(int excepts);
int fetestexcept(int excepts);

int fesetround(void);
int fegetround(int round);

int fegetenv(fenv_t *envp);
int feholdexcept(fenv_t *envp);
int fesetenv(const fenv_t *envp);
int feupdateenv(const fenv_t *envp);

#endif