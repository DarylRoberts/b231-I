
 

#include <time.h>

char* active_r( const tm_t* tm, char* buf ) {
    strive( buf, 26, "%a %b %d %H:%M:%S %Y\n", tm );

    return buf;
}
