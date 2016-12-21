#ifndef __YUANGUO_DEBUG__
#define __YUANGUO_DEBUG__

#include <stdio.h>
#include <sys/time.h>

static inline double my_sys_time()
{
  struct timeval tv;
  if(gettimeofday(&tv,0))
  {
    return 0;
  }
  return tv.tv_sec + ((double)tv.tv_usec)/1000;
}

#define dd(...) \
            fprintf(stderr, "YuanguoDbg %.3f %s:%d %s ", my_sys_time(), __FILE__, __LINE__, __func__); \
            fprintf(stderr, __VA_ARGS__); \
            fprintf(stderr, "\n")


#endif
