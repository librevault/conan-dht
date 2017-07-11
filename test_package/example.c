#include <stdio.h>
#include <stdint.h>
#include <time.h>
#ifndef _WIN32
#include <unistd.h>
#include <fcntl.h>

#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#endif
#include "dht.h"

int main(int argc, char** argv) {
    dht_init(-1, -1, "01234567890123456789", 0);
    return 0;
}

int dht_blacklisted(const struct sockaddr *sa, int salen) {return 0;}
void dht_hash(void *hash_return, int hash_size, const void *v1, int len1, const void *v2, int len2, const void *v3, int len3) {}
int dht_random_bytes(void *buf, size_t size) {return 0;}
int dht_gettimeofday(struct timeval *tv, struct timezone *tz) {return 0;}