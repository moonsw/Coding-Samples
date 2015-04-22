#ifndef GEEKOS_SYMBOL_H
#define GEEKOS_SYMBOL_H

#ifdef NEED_UNDERSCORE
#  define _S(sym) "_" #sym
#else
#  define _S(sym) #sym
#endif

#endif /* GEEKOS_SYMBOL_H */
