#include <sys/time.h>

double timediff(struct timeval x, struct timeval y){
  double x_ms, y_ms;

  x_ms = (double) x.tv_sec * 1000000 + (double) x.tv_usec;
  y_ms = (double) y.tv_sec * 1000000 + (double) y.tv_usec;

  return ((double) y_ms - (double) x_ms);
}
