#include <memory>
#include <netinet/in.h>
#include <fcntl.h>
#include <vector>
#include "read_writer.h"

#ifndef RSHD_CLIENT_H
#define RSHD_CLIENT_H



class client {
public:
    std::shared_ptr<read_writer> ptr;
    uint32_t events;

    client(int socket, uint32_t events);

    void set_pair(read_writer *pair);
};


#endif //RSHD_CLIENT_H
