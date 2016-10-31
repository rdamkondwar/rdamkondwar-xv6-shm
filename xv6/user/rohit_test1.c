#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int key = atoi(argv[1]);
  printf(1, "pid = %d Pid count: %d for key: %d\n", getpid(), shm_refcount(key), key);
  shmgetat(key, 1);
  
  int ret = fork();
  if (ret > 0) {
    sleep(100);
    printf(1, "parent: pid = %d Pid count: %d for key: %d\n", getpid(), shm_refcount(key), key);
  }
  
  printf(1, "pid = %d Pid count: %d for key: %d\n", getpid(), shm_refcount(key), key);
  
  exit();
  
}
