#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "blink_types.h"
#include "blink.h"

static bool s0[(4)] = {(false), (false), (false), (true)};
static size_t s0_idx = (0);

static bool s0_get(size_t x) {
  return (s0)[((s0_idx) + (x)) % ((size_t)(4))];
}

static bool s0_gen(void) {
  return (s0_get)((0));
}

static bool turnOn_0_guard(void) {
  return (s0_get)((0));
}

static bool turnOn_0_arg0(void) {
  return (s0_get)((0));
}

static bool turnOff_1_guard(void) {
  return !((s0_get)((0)));
}

static bool turnOff_1_arg0(void) {
  return (s0_get)((0));
}

void forFun(void) {
  bool s0_tmp;
  bool turnOn_0_arg_temp0;
  bool turnOff_1_arg_temp0;
  if ((turnOn_0_guard)()) {
    {(turnOn_0_arg_temp0) = ((turnOn_0_arg0)());
     (turnOn)((turnOn_0_arg_temp0));}
  };
  if ((turnOff_1_guard)()) {
    {(turnOff_1_arg_temp0) = ((turnOff_1_arg0)());
     (turnOff)((turnOff_1_arg_temp0));}
  };
  (s0_tmp) = ((s0_gen)());
  ((s0)[s0_idx]) = (s0_tmp);
  (s0_idx) = (((s0_idx) + ((size_t)(1))) % ((size_t)(4)));
}
