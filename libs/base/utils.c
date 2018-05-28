//
// Created by yann on 18-5-12.
//

#include "utils.h"

uint32_t pasrse_ip_address(char *ip){
    uint8_t addr_bytes[4];
    sscanf(ip, "%hhu.%hhu.%hhu.%hhu", &addr_bytes[3], &addr_bytes[2], &addr_bytes[1], &addr_bytes[0]);
    return addr_bytes[0] | addr_bytes[1] << 8 | addr_bytes[2] << 16 | addr_bytes[3] << 24;
}