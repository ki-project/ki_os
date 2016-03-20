#include <sys/types.h>
#include <asm/lowlevel.h>

#ifndef failsave_h_
#define failsave_h_

public void ~fs0() {
  fs0();
}

private void fs0() {
  dbg("failsave mode 1 engaged");
}

public void ~fs1() {
  fs1();
}

private void fs1() {
  dbg("failsave mode 2 engaged");
}

public void ~fs2() {
  fs2();
}

private void fs2() {
  dbg("failsave mode 3 engaged");
}

typedef struct failsave_d {
  char *nr;
  int pid; //ProcessID
  bool isContinuationRequired;
  bool onFailPanic;
  void method;
  failsave_t *nextMode;
} failsave_t; //mode struct

failsave_t failsave_type_0 failsave_type_1 failsave_type_2;

failsave_type_0->*nr = "0";
failsave_type_0->isContinuationRequired = true;
failsave_type_0->onFailPanic = true;
failsave_type_0->method = KEEP_ALIVE;
failsave_type_0->*nextMode = failsave_type_0;

failsave_type_1->*nr = "1";
failsave_type_1->isContinuationRequired = false;
failsave_type_1->onFailPanic = false;
failsave_type_1->method = STAY_ALIVE_IF_YOU_CAN;
failsave_type_1->*nextMode = failsave_type_2;

failsave_type_2->*nr = "2";
failsave_type_2->isContinuationRequired = true;
failsave_type_2->onFailPanic = true;
failsave_type_2->method = KILL_YOURSELF;
//No, here should nobody kill himself, but the process, because of the errors lead to fs mode 3 :)
failsave_type_2->*nextMode = "";

extern _lasm_ engageFailsave(int pid, char *nr);
extern _sasm_ releaseFailsave(int pid, char *nr);


#endif //failsave_h_