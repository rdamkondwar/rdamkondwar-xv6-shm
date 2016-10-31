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
  ret = ret+1;
  /* if (ret > 0) { */
  /*   shmgetat(key+1, 2); */
  /*   printf(1, "parent: pid = %d Pid count: %d for key: %d\n", getpid(), shm_refcount(key+1), key+1); */
  /*   shmgetat(key, 1); */
  /*    while (1) { */
  /*      printf(1, "parent: pid = %d Pid count: %d for key: %d\n", getpid(), shm_refcount(key), key); */
  /*      printf(1, "parent: pid = %d Pid count: %d for key: %d\n", getpid(), shm_refcount(key+1), key+1); */
  /*      //shmgetat(key, 1); */
  /*      sleep(100); */
  /* } */
 
  /* } */
  /* if (0 == ret) { */
  /*   shmgetat(key, 1); */
  /* } */
  // while (1) {
    printf(1, "pid = %d Pid count: %d for key: %d\n", getpid(), shm_refcount(key), key);
    //shmgetat(key, 1);
    sleep(100);
    // }
  
  exit();
  
}
