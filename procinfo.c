#include "types.h"
#include "stat.h"
#include "user.h"

int main()
{
  printf(1, "Pid (%d) Ppid (%d)\n", getpid(), getppid());
  exit();
}