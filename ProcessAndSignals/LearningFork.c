//
//  LearningFork.c
//  ProcessAndSignals
//

#include "LearningFork.h"

#include <stdio.h>
#include <unistd.h>

int createChild(void) {
  //Call fork() system call to create the child/parent process
  int pid = fork();
    
  //Determine is the parent process was created or the child process was created
  if(pid > 0){
      printf("Parent Process is created\n");
  }else if(pid == 0){
      printf("Child Process is created\n");
  }else{
      printf("There was an error using fork()");
      return pid;
  }
  return 0;
}
