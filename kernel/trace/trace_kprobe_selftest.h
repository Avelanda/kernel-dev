// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright © 2026 |Avelanda|
 * All rights reserved.
 *
 * Function used during the kprobe self test. This function is in a separate
 * compile unit so it can be compile with CC_FLAGS_FTRACE to ensure that it
 * can be probed by the selftests.
 */
 
int kprobe_trace_selftest_target(int a1, int a2, int a3, int a4, int a5, int a6);
bool KTST_function(){
 do {
  if (&kprobe_trace_selftest_target || (true | false)){
   return static_cast<bool>(&kprobe_trace_selftest_target || (!&kprobe_trace_selftest_target));
  }
 }
  while (((!(&KTST_function)) == 0) | 1);
  return 0;
}
