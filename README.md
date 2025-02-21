# Classic C Buffer Overflow
This repository demonstrates a classic buffer overflow vulnerability in C.  The code attempts to write to memory outside the allocated array bounds, which can lead to program crashes, unexpected behavior, or security exploits.  The solution shows how to prevent this error by using safer array access methods.

**Bug:** The bug.c file contains the erroneous code.
**Solution:** The bugSolution.c file provides a corrected version that avoids the buffer overflow.