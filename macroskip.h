/*
 * A Boyer-Moore-Horspool skip table used for searching for the strings
 * "__TIME__" and "__DATE__".
 *
 * macro_skip[c] = 8 for all c not in "__TIME__" and "__DATE__".
 *
 * The other characters map as follows:
 *
 *   _ -> 1
 *   A -> 5
 *   D -> 6
 *   E -> 3
 *   I -> 5
 *   M -> 4
 *   T -> 4
 *
 *
 * This was generated with the following Python script:
 *
 * m = {'_': 1,
 *      'A': 5,
 *      'D': 6,
 *      'E': 3,
 *      'I': 5,
 *      'M': 4,
 *      'T': 4}
 *
 * for i in range(0, 256):
 *     if chr(i) in m:
 *         num = m[chr(i)]
 *     else:
 *         num = 8
 *     print ("%d, " % num),
 *
 *     if i % 16 == 15:
 *         print ""
 */

static const uint32_t macro_skip[] = {
	8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
	8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
	8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
	8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
	8,  5,  8,  8,  6,  3,  8,  8,  8,  5,  8,  8,  8,  4,  8,  8,
	8,  8,  8,  8,  4,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  1,
	8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
	8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
	8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
	8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
	8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
	8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
	8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
	8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
	8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
	8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
};