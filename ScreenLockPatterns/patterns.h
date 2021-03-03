#ifndef PATTERNS_H
#define PATTERNS_H

/*
- Calculate how many screen pattern combinations exists given a start point and
a length.

Rules:
-In a pattern, the dots/points cannot be repeated: they can only be used once,
 at most.

-In a pattern, any two subsequent dots/points can only be connected with direct
 straight lines in either of these ways:

 * Horizontally: like (A -> B) in the example pattern image.
 * Vertically: like (D -> G) in the example pattern image.
 * Diagonally: like (I -> E), as well as (B -> I), in the example pattern image.

-Passing over a point between them that has already been 'used': like (G -> C)
passing over E, in the example pattern image. This is the trickiest rule.
Normally, you wouldn't be able to connect G to C, because E is between them,
however when E has already been used as part the pattern you are tracing, you
can connect G to C passing over E, because E is ignored, as it was already used
once.
*/

unsigned int countPatternsFrom(char firstDot, unsigned short length);

#endif
