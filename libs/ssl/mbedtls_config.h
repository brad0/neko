#ifdef _WIN32
#define MBEDTLS_THREADING_ALT
#endif
#ifndef _WIN32
#define MBEDTLS_THREADING_PTHREAD
#endif

#define MBEDTLS_THREADING_C