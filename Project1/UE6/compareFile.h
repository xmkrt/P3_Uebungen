/* compFile.hpp

*/
#ifndef _COMPAREFILE_H
#define _COMPAREFILE_H

void compareFiles_CPP(const char * file1, const char * file2);

#ifdef __cplusplus
extern "C" void compareFiles_C(const char * file1, const char * file2);

#else
#define FALSE 0
#define TRUE 1

#endif
#endif
