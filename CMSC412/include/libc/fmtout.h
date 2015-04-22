#ifndef OUTPUT_H
#define OUTPUT_H

#include <stdarg.h>

/*
 * An output sink for Format_Output().
 * Useful for emitting formatted output to a function
 * or a buffer.
 */
struct Output_Sink {
  /*
   * Emit a single character of output.
   * This is called for all output characters,
   * in order.
   */
  void (*Emit) (struct Output_Sink * o, int ch);

  /*
   * Finish the formatted output. Called after all characters
   * have been emitted.
   */
  void (*Finish) (struct Output_Sink * o);
};

int Format_Output(struct Output_Sink *q, const char *format, va_list ap);

#endif /* OUTPUT_H */
