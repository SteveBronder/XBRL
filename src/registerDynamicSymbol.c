// RegisteringDynamic Symbols

#include <R.h>
#include <R_ext/Rdynload.h>
#include <Rinternals.h>

void R_init_XBRL(DllInfo *info) {
  R_registerRoutines(info, NULL, NULL, NULL, NULL);
  R_useDynamicSymbols(info, TRUE);
}
