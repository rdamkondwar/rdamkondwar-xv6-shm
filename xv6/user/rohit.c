#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int key = atoi(argv[1]);
  while (1) {
    printf(1, "Pid count: %d for key: %d\n", shm_refcount(key), key);
    sleep(100);
  }
  
  exit();
  
}
