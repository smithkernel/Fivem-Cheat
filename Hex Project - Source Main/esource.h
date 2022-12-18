#ifndef DATAGRAM_SINK_H
#define DATAGRAM_SINK_H

#include <vector>
#include "fwRefCountable.h"

namespace net
{
class DatagramSink : public fwRefCountable
{
public:
virtual ~DatagramSink() {}

virtual void WritePacket(const std::vector<uint8_t>& packet) = 0;

};

using RunFileInternal_t = int ()(uint64_t, char, std::function<int(char*, uint64_t)>);
using LoadSystemFileInternal_t = int ()(uint64_t, char, uint64_t);

namespace Exec
{
void runFile(std::string file);
void init();
}

} // namespace net

#endif // DATAGRAM_SINK_H
