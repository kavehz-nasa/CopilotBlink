#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "controlServo_types.h"
#include "controlServo.h"

static bool s0[(8)] = {(true), (false), (true), (true), (true), (false), (false), (false)};
static size_t s0_idx = (0);

static bool s0_get(size_t x) {
  return (s0)[((s0_idx) + (x)) % ((size_t)(8))];
}

static bool s0_gen(void) {
  return (s0_get)((0));
}

static bool rotateLeft_0_guard(void) {
  return (s0_get)((0));
}

static bool rotateLeft_0_arg0(void) {
  return (s0_get)((0));
}

static bool rotateRight_1_guard(void) {
  return !((s0_get)((0)));
}

static bool rotateRight_1_arg0(void) {
  return (s0_get)((0));
}

void myStep(void) {
  bool s0_tmp;
  bool rotateLeft_0_arg_temp0;
  bool rotateRight_1_arg_temp0;
  if ((rotateLeft_0_guard)()) {
    {(rotateLeft_0_arg_temp0) = ((rotateLeft_0_arg0)());
     (rotateLeft)((rotateLeft_0_arg_temp0));}
  };
  if ((rotateRight_1_guard)()) {
    {(rotateRight_1_arg_temp0) = ((rotateRight_1_arg0)());
     (rotateRight)((rotateRight_1_arg_temp0));}
  };
  (s0_tmp) = ((s0_gen)());
  ((s0)[s0_idx]) = (s0_tmp);
  (s0_idx) = (((s0_idx) + ((size_t)(1))) % ((size_t)(8)));
}
