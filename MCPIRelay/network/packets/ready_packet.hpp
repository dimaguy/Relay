#pragma once

#include <BitStream.h>
#include <iostream>
#include <cstdint>

namespace RoadRunner {
    namespace network {
        namespace packets {
            class ReadyPacket {
            public:
                static const uint8_t packet_id;

                uint8_t status;

                bool deserialize_body(RakNet::BitStream *stream);

                void serialize_body(RakNet::BitStream *stream);
            };
        }
    }
}
