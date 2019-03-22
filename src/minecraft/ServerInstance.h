#pragma once

#include <memory>
#include <chrono>
#include <vector>
#include <string>
#include <thread>
#include "std/string.h"
#include "std/function.h"
#include "LevelSettings.h"

class IMinecraftApp;
class Minecraft;
class Whitelist;
class PermissionsFile;
namespace mce { class UUID; }
class IMinecraftEventing;
class ResourcePackRepository;
class ResourcePackManager;
class ContentTierManager;
class FilePathManager;
class IContentKeyProvider;
class LevelStorage;
class Scheduler;
class LevelData;

class TextFilteringProcessor;

class EducationOptions {
public:
    char filler[0xC];

    EducationOptions(ResourcePackManager*);

};

class ServerInstanceEventListener {
};

class EventResult;

class ServerInstanceEventCoordinator {
    std::vector<ServerInstanceEventListener *> listeners;
    std::vector<mcpe::function<EventResult (ServerInstanceEventListener *)>> handlers;
    std::thread::id threadId;
};

class ServerCommunicationInterface;

class ServerMetrics;

class DebugEndPoint;

class ConnectionDefinition {
    short port, portv6;
    int unk1;
    int maxPlayers;
    int unk2 = 0;
    public:
    ConnectionDefinition(int port, int portv6, int max) : port((short) port), portv6((short) portv6), maxPlayers(max) {}
};

class ServerInstance {

public:

    char filler[0x10];
    Minecraft* minecraft;
    char filler2[0x200];

    /// @symbol _ZN14ServerInstanceC2ER13IMinecraftAppR30ServerInstanceEventCoordinator
    ServerInstance(IMinecraftApp&, ServerInstanceEventCoordinator&);

    /// @symbol _ZN14ServerInstance16initializeServerER13IMinecraftAppR9WhitelistP15PermissionsFileP15FilePathManagerNSt6chrono8durationIxSt5ratioILx1ELx1EEEESsSsSs13LevelSettingsib20ConnectionDefinitionbRKSt6vectorISsSaISsEESsRKN3mce4UUIDER18IMinecraftEventingR22ResourcePackRepositoryRK18ContentTierManagerR19ResourcePackManagerSt8functionIFSt10unique_ptrI12LevelStorageSt14default_deleteISZ_EER9SchedulerEERKSsP9LevelDataSsSsSY_I16EducationOptionsS10_IS1B_EEPSV_SX_IFvS18_EES1G_P13ServerMetricsP13DebugEndPoint
    void initializeServer(IMinecraftApp&, Whitelist&, PermissionsFile*, FilePathManager*, std::chrono::seconds, mcpe::string, mcpe::string, mcpe::string, LevelSettings, int, bool, ConnectionDefinition, bool, std::vector<mcpe::string> const&, mcpe::string, mce::UUID const&, IMinecraftEventing&, ResourcePackRepository&, ContentTierManager const&, ResourcePackManager&, std::function<std::unique_ptr<LevelStorage> (Scheduler&)>, mcpe::string const&, LevelData*, mcpe::string, mcpe::string, std::unique_ptr<EducationOptions>, ResourcePackManager*, std::function<void (mcpe::string const&)>, std::function<void (mcpe::string const&)>, ServerMetrics*, DebugEndPoint*);

    ~ServerInstance();

    void startServerThread();

    void leaveGameSync();

    /// @symbol _ZN14ServerInstance20queueForServerThreadESt8functionIFvvEE
    void queueForServerThread(mcpe::function<void ()>);

};
