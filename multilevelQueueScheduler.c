#include <stdlib.h>

#include "multilevelQueueScheduler.h"

void attemptPromote(schedule *ps);
int min(int x, int y);

static const int STEPS_TO_PROMOTION = 50;
static const int FOREGROUND_QUEUE_STEPS = 5;

/* printNames
 * input: none
 * output: none
 *
 * Prints names of the students who worked on this solution
 */
//TESTTTT 
void printNames()
{
    /* TODO : Fill in you and your partner's names (or N/A if you worked individually) */
    printf("\nThis solution was completed by:\n");
    printf("<Ryan Reddoch>\n");
    printf("<Summer Tyo>\n");
}

/* createSchedule
 * input: none
 * output: a schedule
 *
 * Creates and return a schedule struct.
 */
schedule *createSchedule()
{
    /* TODO: malloc space for a new schedule and initialize the data in it */
    schedule* s;
 
    s = (schedule *)malloc(sizeof(schedule));

    s->foreQueue= createQueue();

    s->backQueue=createQueue();

    s->timeStep;
    (printf("SCH TEST \n"));
    return s; /* TODO: Replace with your return value */
}

/* isScheduleUnfinished
 * input: a schedule
 * output: bool (true or false)
 *
 * Check if there are any processes still in the queues.
 * Return TRUE if there is.  Otherwise false.
 */
bool isScheduleUnfinished(schedule *ps)
{
    bool emt;
    if (isEmpty(ps->foreQueue) == false || isEmpty(ps->backQueue) == false)
    {
   
        emt=true;
    }
    else
    {
    emt=false;
    printf(" EMpty\n ");
    }



    /* TODO: check if there are any process still in a queue.  Return TRUE if there is. */

    return emt; /* TODO: Replace with your return value */
}

/* addNewProcessToSchedule
 * input: a schedule, a string, a priority
 * output: void
 *
 * Create a new process with the provided name and priority.
 * Add that process to the appropriate queue
 */
void addNewProcessToSchedule(schedule *ps, char *processName, priority p)
{
// my process instance

 process* pro;
 // malloc process
  pro= (process *)malloc(sizeof(process));
  // process variable malloc'd

// processData* 
pro->pName=processName;
 
if (p == FOREGROUND)
{
    pro->proData = initializeProcessData(pro->pName);
    // pro->proData = initializeProcessData(pro->pName);

    // printf("Process name = %c\n", pro->pName);
    enqueue(ps->foreQueue, pro->proData);
   
    // enqueue(ps->foreQueue,pro->pName);
    
}else
{

    pro->proData = initializeProcessData(pro->pName);

    
    enqueue(ps->backQueue, pro->proData);

   
}
    
    /* TODO: complete this fun  ction.
    The function "initializeProcessData" in processSimulator.c will be useful in completing this. */

    // free(processName); /* TODO: This is to prevent a memory leak but you should remove it once you create a process to put processName into */
 
}

/* runNextProcessInSchedule
 * input: a schedule
 * output: a string
 *
 * Use the schedule to determine the next process to run and for how many time steps.
 * Call "runProcess" to attempt to run the process.  You do not need to print anything.
 * You should return the string received from "runProcess".  You do not need to use/modify this string in any way.
 */
char *runNextProcessInSchedule(schedule *ps)
{

char *ret = NULL;
int i;
int numSteps=5;
int pNumSteps;
bool b;
char* pName;

/* TODO: complete this function.
 The function "runProcess", "loadProcessData", and "freeProcessData"
 in processSimulator.c will be useful in completing this.*/
// pName=getNext(ps->foreQueue);



// pName = dequeue(ps->foreQueue);
  pName = getNext(ps->foreQueue);

 loadProcessData(pName);
while(b==true){
   
printf("boool \n");
 // b= runProcess(pName, &ret, numSteps );
  // b = runProcess(pName, &ret, &numSteps);
  // b = runProcess(pName, &ret,pNumSteps);
   b = runProcess(pName, &ret,&pNumSteps);
   printf("boool2 \n");
}
 
  //  attemptPromote(ps); /* This will call your attemptPromote code. */

/* your call to runProcess will look something like this: */


//return ret; /* This will be the char* that runProcess stores in ret when you call it. */
}

/* attemptPromote
 * input: a schedule
 * output: none
 *
 * Promote every background process that has been waiting for at least 50 time steps.
 * This function might be tricky so you might save it for last.
 */
void attemptPromote(schedule *ps)
{

    /* TODO: complete this function.
    The function "promoteProcess" in processSimulator.c will be useful in completing this. */
}

/* printSummary
 *
 * input: a schedule
 * output: none
 *
 * Print the summary information listed below about the schedule
 */
void printSummary(schedule *ps)
{
   
    /* TODO: complete this function. */
    /* 1) The number of time steps you processed. */
    /* 2) The number processes that completed running. */
    /* 3) The average time taken per process with 3 decimal places of precision.  This will be the 1st number divided by the 2nd number. */
}

/* freeSchedule
 * input: a schedule
 * output: none
 *
 * Free all of the memory associated with the schedule.
 */
void freeSchedule(schedule *ps)
{

    /* TODO: free any data associated with the schedule as well as the schedule itself.
    the function "freeQueue" in queue.c will be useful in completing this. */
}
