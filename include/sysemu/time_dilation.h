#ifndef TIME_DILATION_H
#define TIME_DILATION_H

#include "qemu/atomic.h"

/*
 * Set to 1 when malware process is detected, 0 otherwise.
 */
extern int time_dilation_active;

/*
 * Dynamic time dilation factor passed via command line (default: 1)
 */
extern int qemu_time_dilation_factor;

#endif /* TIME_DILATION_H */
