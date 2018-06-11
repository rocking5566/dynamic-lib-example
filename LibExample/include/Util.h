#ifndef Util_h__
#define Util_h__

#if (defined WIN32 || defined _WIN32 || defined WINCE)
#   include <windows.h>
#else
#   include <unistd.h>
#endif



#define SAFE_DELETE(a) if( (a) != NULL ) delete (a); (a) = NULL;
#define SAFE_DELETE_ARRAY(p) { if((p) != NULL) { delete[] (p);   (p)=NULL; } }

#endif // Util_h__
