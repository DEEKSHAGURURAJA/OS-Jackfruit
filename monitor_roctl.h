#ifndef MONITOR_IOCTL_H
#define MONITOR_IOCTL_H

#include <linux/ioctl.h>

typedef struct {
    int pid;
    unsigned long soft_limit;
    unsigned long hard_limit;
    char container_id[32];
} container_info_t;

#define IOCTL_REGISTER_CONTAINER _IOW('m', 1, container_info_t)

#endif
