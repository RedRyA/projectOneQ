//notes
// Queue * q createq()
/*
if struct to struct use a . not a ->


use Q is not empty to propel program



 LAYOUT OF CODE IN PROJECT

// multiQscheduler.c multiQscheduler.h, and process.h are what I need top work in


schedul;e contains Q pointers that point to Q's in queue.c
// QUEUETYPE QT IS PART OF A LLNODE
// QT IS JUST  STRUCT  PROCESS* PROCESS POINTER
// PROCESS IS IN PROCESS.H  (PROCESS NAME, POINTER TO PROCESSDATA, TIMESTEPS)
PROCESS IS A LIST OF ALL THE PROCESSES
ADD STRUCT PROCESSDATA TO PROCESS STRUCT



initializeProcessData is the key to unlock everything below call it for every process i run
^^^^^^^^^^^^^
processdata unlocks promoteProcess and loadProcessData
^^^^^^^^
needed for run process and freeprocess



 multiQssh.h schedule in create schedule do this first add useful params



multiQsch.c majoriy of work goes in here


schedule contains Q's > Q's contain LL pointers > LL pointers contain processes > processes contain processData > processData unlocks the run/load process functions


Don't directly access qFronts (all the functions are written for me! ) etc or process data


Suggestions from JESS
MultiQsched.c malloc schedule and create Q's
// isschedule unfinished is very short (like one line)
// add new process to a schedule

ENUM PRIORITY if p==FOREGROUND) addnewprocess to schedule



*/
