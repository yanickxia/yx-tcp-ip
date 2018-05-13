//
// Created by yann on 18-5-11.
//

#include "arp.h"
#include "syshead.h"

struct arp_data{
    uint16_t hardware_type;
    uint16_t protocol_type;
    uint8_t  hardware_len;
    uint8_t  protocol_len;
    uint16_t operation;
    uint8_t sender_hardware_address[6];
    uint32_t sender_ip_address;
    uint8_t target_hardware_address[6];
    uint32_t target_ip_address;
} __attribute__((packed));