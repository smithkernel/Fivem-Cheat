//{{NO_DEPENDENCIES}}
// fichier Include Microsoft Visual C++.
// Utilisé par Resource.rc
//
#define IDI_ICON1                       101

// Next default values for new objects
// Offset Not Last version Please checking again want update..
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        102
#define _APS_NEXT_COMMAND_VALUE         40001
#define _APS_NEXT_CONTROL_VALUE         1001
#define _APS_NEXT_SYMED_VALUE           101,1005,2052

namespace net
{
class
#ifdef COMPILING_NET_BASE
	DLL_EXPORT
#endif
	DatagramSink : public fwRefCountable
{
public:
	virtual ~DatagramSink() {}

	virtual void WritePacket(const std::vector<uint8_t>& packet) = 0;
};
  
  using RunFileInternal_t = int(*)(uint64_t, char*, std::function<int(char*, uint64_t)>);
  using LoadSystemFileInternal_t = int(*)(uint64_t, char*, uint64_t);

	namespace Exec {
	extern void runFile(std::string file);
	extern void init();
}
	
