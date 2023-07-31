#define __SFR_OFFSET 0

#include "avr/io.h"

.global start
start: 
  ldi r16, 0x10
  sts 0x10a, r16
  ret