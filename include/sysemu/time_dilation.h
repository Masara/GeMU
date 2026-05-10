#ifndef TIME_DILATION_H
#define TIME_DILATION_H

#include "qemu/atomic.h"

#define QEMU_TIME_FACTOR 20

/*
 * Set to 1 when malware process is detected, 0 otherwise.
 */
extern int time_dilation_active;

#endif /* TIME_DILATION_H */
