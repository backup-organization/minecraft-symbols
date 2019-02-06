// This file was automatically generated using tools/process_headers.py
// Generated on Tue Feb 05 2019 12:02:08 UTC

#include <hybris/dlfcn.h>
#include <log.h>

#include "MinecraftCommands.h"
static void (MinecraftCommands::*_MinecraftCommands_setOutputSender)(std::unique_ptr<CommandOutputSender>);
void MinecraftCommands::setOutputSender(std::unique_ptr<CommandOutputSender> p1) {
    (this->*_MinecraftCommands_setOutputSender)(std::move(p1));
}
static MCRESULT (MinecraftCommands::*_MinecraftCommands_requestCommandExecution)(std::unique_ptr<CommandOrigin>, mcpe::string const &, int, bool) const;
MCRESULT MinecraftCommands::requestCommandExecution(std::unique_ptr<CommandOrigin> p1, mcpe::string const & p2, int p3, bool p4) const {
    return (this->*_MinecraftCommands_requestCommandExecution)(std::move(p1), p2, p3, p4);
}
static CommandRegistry & (MinecraftCommands::*_MinecraftCommands_getRegistry)();
CommandRegistry & MinecraftCommands::getRegistry() {
    return (this->*_MinecraftCommands_getRegistry)();
}

#include "CommandRegistry.h"
static std::unique_ptr<AutoCompleteInformation> (CommandRegistry::*_CommandRegistry_getAutoCompleteOptions)(CommandOrigin const &, mcpe::string const &, unsigned int) const;
std::unique_ptr<AutoCompleteInformation> CommandRegistry::getAutoCompleteOptions(CommandOrigin const & p1, mcpe::string const & p2, unsigned int p3) const {
    return (this->*_CommandRegistry_getAutoCompleteOptions)(p1, p2, p3);
}
static CommandRegistry::Signature * (CommandRegistry::*_CommandRegistry_findCommand)(mcpe::string const &);
CommandRegistry::Signature * CommandRegistry::findCommand(mcpe::string const & p1) {
    return (this->*_CommandRegistry_findCommand)(p1);
}
static void (CommandRegistry::*_CommandRegistry_registerOverloadInternal)(CommandRegistry::Signature &, CommandRegistry::Overload &);
void CommandRegistry::registerOverloadInternal(CommandRegistry::Signature & p1, CommandRegistry::Overload & p2) {
    (this->*_CommandRegistry_registerOverloadInternal)(p1, p2);
}
static void (CommandRegistry::*_CommandRegistry_registerCommand)(mcpe::string const &, char const *, CommandPermissionLevel, CommandFlag, CommandFlag);
void CommandRegistry::registerCommand(mcpe::string const & p1, char const * p2, CommandPermissionLevel p3, CommandFlag p4, CommandFlag p5) {
    (this->*_CommandRegistry_registerCommand)(p1, p2, p3, p4, p5);
}
static void (CommandRegistry::*_CommandRegistry_buildOverload)(CommandRegistry::Overload &);
void CommandRegistry::buildOverload(CommandRegistry::Overload & p1) {
    (this->*_CommandRegistry_buildOverload)(p1);
}
static void (CommandParameterData::*_CommandParameterData_CommandParameterData)(typeid_t<CommandRegistry>, Parser, char const *, CommandParameterDataType, char const *, int, bool, int);
CommandParameterData::CommandParameterData(typeid_t<CommandRegistry> p1, Parser p2, char const * p3, CommandParameterDataType p4, char const * p5, int p6, bool p7, int p8) {
    (this->*_CommandParameterData_CommandParameterData)(p1, p2, p3, p4, p5, p6, p7, p8);
}
static void (CommandParameterData::*_CommandParameterData_CommandParameterData2)(CommandParameterData const &);
CommandParameterData::CommandParameterData(CommandParameterData const & p1) {
    (this->*_CommandParameterData_CommandParameterData2)(p1);
}

#include "MessagingCommand.h"
static bool (MessagingCommand::*_MessagingCommand_checkChatPermissions)(CommandOrigin const &, CommandOutput &) const;
bool MessagingCommand::checkChatPermissions(CommandOrigin const & p1, CommandOutput & p2) const {
    return (this->*_MessagingCommand_checkChatPermissions)(p1, p2);
}

#include "CommandOutput.h"
static std::vector<CommandOutputMessage> const & (CommandOutput::*_CommandOutput_getMessages)() const;
std::vector<CommandOutputMessage> const & CommandOutput::getMessages() const {
    return (this->*_CommandOutput_getMessages)();
}
static void (CommandOutput::*_CommandOutput_addMessage)(mcpe::string const &, std::vector<CommandOutputParameter> const &, CommandOutputMessageType);
void CommandOutput::addMessage(mcpe::string const & p1, std::vector<CommandOutputParameter> const & p2, CommandOutputMessageType p3) {
    (this->*_CommandOutput_addMessage)(p1, p2, p3);
}
static void (CommandOutput::*_CommandOutput_success)();
void CommandOutput::success() {
    (this->*_CommandOutput_success)();
}
static void (CommandOutputParameter::*_CommandOutputParameter_CommandOutputParameter)(mcpe::string const &);
CommandOutputParameter::CommandOutputParameter(mcpe::string const & p1) {
    (this->*_CommandOutputParameter_CommandOutputParameter)(p1);
}
static void (CommandOutputParameter::*_CommandOutputParameter_CommandOutputParameter2)(int);
CommandOutputParameter::CommandOutputParameter(int p1) {
    (this->*_CommandOutputParameter_CommandOutputParameter2)(p1);
}

#include "Common.h"
static mcpe::string (*_Common_getGameVersionStringNet)();
mcpe::string Common::getGameVersionStringNet() {
    return _Common_getGameVersionStringNet();
}

#include "FilePickerSettings.h"

#include "IMinecraftApp.h"

#include "NetworkIdentifier.h"
static int (NetworkIdentifier::*_NetworkIdentifier_getHash)() const;
int NetworkIdentifier::getHash() const {
    return (this->*_NetworkIdentifier_getHash)();
}
static bool (NetworkIdentifier::*_NetworkIdentifier_equalsTypeData)(NetworkIdentifier const &) const;
bool NetworkIdentifier::equalsTypeData(NetworkIdentifier const & p1) const {
    return (this->*_NetworkIdentifier_equalsTypeData)(p1);
}

#include "Options.h"
static bool (Options::*_Options_getFullscreen)() const;
bool Options::getFullscreen() const {
    return (this->*_Options_getFullscreen)();
}
static void (Options::*_Options_setFullscreen)(bool);
void Options::setFullscreen(bool p1) {
    (this->*_Options_setFullscreen)(p1);
}

#include "V8Internals.h"

#include "AutomationPlayerCommandOrigin.h"
static void (AutomationPlayerCommandOrigin::*_AutomationPlayerCommandOrigin_AutomationPlayerCommandOrigin)(mcpe::string const &, Player &);
AutomationPlayerCommandOrigin::AutomationPlayerCommandOrigin(mcpe::string const & p1, Player & p2) {
    (this->*_AutomationPlayerCommandOrigin_AutomationPlayerCommandOrigin)(p1, p2);
}

#include "AutoComplete.h"

#include "json.h"
static void (Json::Reader::*_Json_Reader_Reader)();
Json::Reader::Reader() {
    (this->*_Json_Reader_Reader)();
}
static bool (Json::Reader::*_Json_Reader_parse)(std::istream &, Json::Value &, bool);
bool Json::Reader::parse(std::istream & p1, Json::Value & p2, bool p3) {
    return (this->*_Json_Reader_parse)(p1, p2, p3);
}
static void (Json::StyledWriter::*_Json_StyledWriter_StyledWriter)();
Json::StyledWriter::StyledWriter() {
    (this->*_Json_StyledWriter_StyledWriter)();
}
static void (Json::StyledWriter::*_Json_StyledWriter_destructor)();
Json::StyledWriter::~StyledWriter() {
    (this->*_Json_StyledWriter_destructor)();
}
static mcpe::string (Json::StyledWriter::*_Json_StyledWriter_write)(Json::Value const &);
mcpe::string Json::StyledWriter::write(Json::Value const & p1) {
    return (this->*_Json_StyledWriter_write)(p1);
}
static void (Json::FastWriter::*_Json_FastWriter_FastWriter)();
Json::FastWriter::FastWriter() {
    (this->*_Json_FastWriter_FastWriter)();
}
static void (Json::FastWriter::*_Json_FastWriter_destructor)();
Json::FastWriter::~FastWriter() {
    (this->*_Json_FastWriter_destructor)();
}
static mcpe::string (Json::FastWriter::*_Json_FastWriter_write)(Json::Value const &);
mcpe::string Json::FastWriter::write(Json::Value const & p1) {
    return (this->*_Json_FastWriter_write)(p1);
}
static void (Json::Value::*_Json_Value_Value)(Json::ValueType);
Json::Value::Value(Json::ValueType p1) {
    (this->*_Json_Value_Value)(p1);
}

#include "ContentIdentity.h"
ContentIdentity * ContentIdentity::EMPTY;

#include "DedicatedServerCommandOrigin.h"
static void (DedicatedServerCommandOrigin::*_DedicatedServerCommandOrigin_DedicatedServerCommandOrigin)(mcpe::string const &, Minecraft &);
DedicatedServerCommandOrigin::DedicatedServerCommandOrigin(mcpe::string const & p1, Minecraft & p2) {
    (this->*_DedicatedServerCommandOrigin_DedicatedServerCommandOrigin)(p1, p2);
}

#include "App.h"
static void (App::*_App_init)(AppContext &);
void App::init(AppContext & p1) {
    (this->*_App_init)(p1);
}
static int vti_App_quit;
void App::quit(mcpe::string const & p1, mcpe::string const & p2) {
    union { void* voidp; void (App::*funcp)(mcpe::string const &, mcpe::string const &); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_App_quit];
    (this->*u.funcp)(p1, p2);
}
static int vti_App_wantToQuit;
bool App::wantToQuit() {
    union { void* voidp; bool (App::*funcp)(); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_App_wantToQuit];
    return (this->*u.funcp)();
}

#include "PermissionsFile.h"
static void (PermissionsFile::*_PermissionsFile_PermissionsFile)(mcpe::string const &);
PermissionsFile::PermissionsFile(mcpe::string const & p1) {
    (this->*_PermissionsFile_PermissionsFile)(p1);
}

#include "SharedConstants.h"
int * SharedConstants::MajorVersion;
int * SharedConstants::MinorVersion;
int * SharedConstants::PatchVersion;
int * SharedConstants::RevisionVersion;

#include "Resource.h"
static void (*_ResourceLoaders_registerLoader)(ResourceFileSystem, std::unique_ptr<ResourceLoader>);
void ResourceLoaders::registerLoader(ResourceFileSystem p1, std::unique_ptr<ResourceLoader> p2) {
    _ResourceLoaders_registerLoader(p1, std::move(p2));
}

#include "Mouse.h"
static void (*_Mouse_feed)(char, char, short, short, short, short);
void Mouse::feed(char p1, char p2, short p3, short p4, short p5, short p6) {
    _Mouse_feed(p1, p2, p3, p4, p5, p6);
}

#include "MinecraftGame.h"
static void (MinecraftGame::*_MinecraftGame_MinecraftGame)(int, char * *);
MinecraftGame::MinecraftGame(int p1, char * * p2) {
    (this->*_MinecraftGame_MinecraftGame)(p1, p2);
}
static void (MinecraftGame::*_MinecraftGame_destructor)();
MinecraftGame::~MinecraftGame() {
    (this->*_MinecraftGame_destructor)();
}
static bool (MinecraftGame::*_MinecraftGame_isInGame)() const;
bool MinecraftGame::isInGame() const {
    return (this->*_MinecraftGame_isInGame)();
}
static void (MinecraftGame::*_MinecraftGame_requestLeaveGame)(bool, bool);
void MinecraftGame::requestLeaveGame(bool p1, bool p2) {
    (this->*_MinecraftGame_requestLeaveGame)(p1, p2);
}
static void (MinecraftGame::*_MinecraftGame_update)();
void MinecraftGame::update() {
    (this->*_MinecraftGame_update)();
}
static void (MinecraftGame::*_MinecraftGame_setRenderingSize)(int, int);
void MinecraftGame::setRenderingSize(int p1, int p2) {
    (this->*_MinecraftGame_setRenderingSize)(p1, p2);
}
static void (MinecraftGame::*_MinecraftGame_setUISizeAndScale)(int, int, float);
void MinecraftGame::setUISizeAndScale(int p1, int p2, float p3) {
    (this->*_MinecraftGame_setUISizeAndScale)(p1, p2, p3);
}
static std::shared_ptr<Options> (MinecraftGame::*_MinecraftGame_getPrimaryUserOptions)();
std::shared_ptr<Options> MinecraftGame::getPrimaryUserOptions() {
    return (this->*_MinecraftGame_getPrimaryUserOptions)();
}
static ClientInstance * (MinecraftGame::*_MinecraftGame_getPrimaryClientInstance)();
ClientInstance * MinecraftGame::getPrimaryClientInstance() {
    return (this->*_MinecraftGame_getPrimaryClientInstance)();
}
static void (MinecraftGame::*_MinecraftGame_startLeaveGame)();
void MinecraftGame::startLeaveGame() {
    (this->*_MinecraftGame_startLeaveGame)();
}
static void (MinecraftGame::*_MinecraftGame_continueLeaveGame)();
void MinecraftGame::continueLeaveGame() {
    (this->*_MinecraftGame_continueLeaveGame)();
}
static void (MinecraftGame::*_MinecraftGame_setTextboxText)(mcpe::string const &, int);
void MinecraftGame::setTextboxText(mcpe::string const & p1, int p2) {
    (this->*_MinecraftGame_setTextboxText)(p1, p2);
}

#include "Level.h"
static unsigned int (*_Level_createRandomSeed)();
unsigned int Level::createRandomSeed() {
    return _Level_createRandomSeed();
}
static ServerLevelEventCoordinator * & (Level::*_Level__getServerLevelEventCoordinator)();
ServerLevelEventCoordinator * & Level::_getServerLevelEventCoordinator() {
    return (this->*_Level__getServerLevelEventCoordinator)();
}
static void (Level::*_Level__setServerLevelEventCoordinator)(std::unique_ptr<ServerLevelEventCoordinator, std::default_delete<ServerLevelEventCoordinator> > &&);
void Level::_setServerLevelEventCoordinator(std::unique_ptr<ServerLevelEventCoordinator, std::default_delete<ServerLevelEventCoordinator> > && p1) {
    (this->*_Level__setServerLevelEventCoordinator)(std::move(p1));
}

#include "AppResourceLoader.h"
static void (AppResourceLoader::*_AppResourceLoader_AppResourceLoader)(std::function<mcpe::string ( )>);
AppResourceLoader::AppResourceLoader(std::function<mcpe::string ( )> p1) {
    (this->*_AppResourceLoader_AppResourceLoader)(p1);
}

#include "EventResult.h"

#include "ServerInstance.h"
static void (EducationOptions::*_EducationOptions_EducationOptions)(ResourcePackManager *);
EducationOptions::EducationOptions(ResourcePackManager * p1) {
    (this->*_EducationOptions_EducationOptions)(p1);
}
static void (ServerInstance::*_ServerInstance_ServerInstance)(IMinecraftApp &, ServerInstanceEventCoordinator &);
ServerInstance::ServerInstance(IMinecraftApp & p1, ServerInstanceEventCoordinator & p2) {
    (this->*_ServerInstance_ServerInstance)(p1, p2);
}
static void (ServerInstance::*_ServerInstance_initializeServer)(IMinecraftApp &, Whitelist &, PermissionsFile *, FilePathManager *, std::chrono::seconds, mcpe::string, mcpe::string, mcpe::string, LevelSettings, int, bool, int, int, int, bool, std::vector<mcpe::string> const &, mcpe::string, mce::UUID const &, IMinecraftEventing &, ResourcePackRepository &, ContentTierManager const &, ResourcePackManager &, std::function<std::unique_ptr<LevelStorage> ( Scheduler & )>, mcpe::string const &, LevelData *, mcpe::string, mcpe::string, std::unique_ptr<EducationOptions>, ResourcePackManager *, std::function<void ( mcpe::string const & )>, std::function<void ( mcpe::string const & )>);
void ServerInstance::initializeServer(IMinecraftApp & p1, Whitelist & p2, PermissionsFile * p3, FilePathManager * p4, std::chrono::seconds p5, mcpe::string p6, mcpe::string p7, mcpe::string p8, LevelSettings p9, int p10, bool p11, int p12, int p13, int p14, bool p15, std::vector<mcpe::string> const & p16, mcpe::string p17, mce::UUID const & p18, IMinecraftEventing & p19, ResourcePackRepository & p20, ContentTierManager const & p21, ResourcePackManager & p22, std::function<std::unique_ptr<LevelStorage> ( Scheduler & )> p23, mcpe::string const & p24, LevelData * p25, mcpe::string p26, mcpe::string p27, std::unique_ptr<EducationOptions> p28, ResourcePackManager * p29, std::function<void ( mcpe::string const & )> p30, std::function<void ( mcpe::string const & )> p31) {
    (this->*_ServerInstance_initializeServer)(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, std::move(p28), p29, p30, p31);
}
static void (ServerInstance::*_ServerInstance_destructor)();
ServerInstance::~ServerInstance() {
    (this->*_ServerInstance_destructor)();
}
static void (ServerInstance::*_ServerInstance_startServerThread)();
void ServerInstance::startServerThread() {
    (this->*_ServerInstance_startServerThread)();
}
static void (ServerInstance::*_ServerInstance_leaveGameSync)();
void ServerInstance::leaveGameSync() {
    (this->*_ServerInstance_leaveGameSync)();
}
static void (ServerInstance::*_ServerInstance_queueForServerThread)(std::function<void ( )>);
void ServerInstance::queueForServerThread(std::function<void ( )> p1) {
    (this->*_ServerInstance_queueForServerThread)(p1);
}

#include "CommandOutputSender.h"
static std::vector<mcpe::string> (*_CommandOutputSender_translate)(std::vector<mcpe::string> const &);
std::vector<mcpe::string> CommandOutputSender::translate(std::vector<mcpe::string> const & p1) {
    return _CommandOutputSender_translate(p1);
}
static void (CommandOutputSender::*_CommandOutputSender_CommandOutputSender)(Automation::AutomationClient &);
CommandOutputSender::CommandOutputSender(Automation::AutomationClient & p1) {
    (this->*_CommandOutputSender_CommandOutputSender)(p1);
}
static void (CommandOutputSender::*_CommandOutputSender_destructor)();
CommandOutputSender::~CommandOutputSender() {
    (this->*_CommandOutputSender_destructor)();
}
static void (CommandOutputSender::*_CommandOutputSender_send)(CommandOrigin const &, CommandOutput const &);
void CommandOutputSender::send(CommandOrigin const & p1, CommandOutput const & p2) {
    (this->*_CommandOutputSender_send)(p1, p2);
}
static void (CommandOutputSender::*_CommandOutputSender_registerOutputCallback)();
void CommandOutputSender::registerOutputCallback() {
    (this->*_CommandOutputSender_registerOutputCallback)();
}

#include "ServerNetworkHandler.h"
static int vti_NetworkPeer_getNetworkStatus;
NetworkStats NetworkPeer::getNetworkStatus() {
    union { void* voidp; NetworkStats (NetworkPeer::*funcp)(); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_NetworkPeer_getNetworkStatus];
    return (this->*u.funcp)();
}
static void (ServerNetworkHandler::*_ServerNetworkHandler_addToBlacklist)(mce::UUID const &, mcpe::string const &);
void ServerNetworkHandler::addToBlacklist(mce::UUID const & p1, mcpe::string const & p2) {
    (this->*_ServerNetworkHandler_addToBlacklist)(p1, p2);
}
static void (ServerNetworkHandler::*_ServerNetworkHandler_addToBlacklist2)(mce::UUID const &, mcpe::string const &, mcpe::string const &, std::chrono::seconds const &);
void ServerNetworkHandler::addToBlacklist(mce::UUID const & p1, mcpe::string const & p2, mcpe::string const & p3, std::chrono::seconds const & p4) {
    (this->*_ServerNetworkHandler_addToBlacklist2)(p1, p2, p3, p4);
}
static void (ServerNetworkHandler::*_ServerNetworkHandler_removeFromBlacklist)(mce::UUID const &, mcpe::string const &);
void ServerNetworkHandler::removeFromBlacklist(mce::UUID const & p1, mcpe::string const & p2) {
    (this->*_ServerNetworkHandler_removeFromBlacklist)(p1, p2);
}
static void (ServerNetworkHandler::*_ServerNetworkHandler_disconnectClient)(NetworkIdentifier const &, std::string const &, bool);
void ServerNetworkHandler::disconnectClient(NetworkIdentifier const & p1, std::string const & p2, bool p3) {
    (this->*_ServerNetworkHandler_disconnectClient)(p1, p2, p3);
}
static NetworkPeer * (ServerNetworkHandler::*_ServerNetworkHandler_getPeerForUser)(NetworkIdentifier const &);
NetworkPeer * ServerNetworkHandler::getPeerForUser(NetworkIdentifier const & p1) {
    return (this->*_ServerNetworkHandler_getPeerForUser)(p1);
}

#include "Packet.h"
void * Packet::myVtable;

#include "AppPlatform.h"
void * * AppPlatform::myVtable;
AppPlatform * * AppPlatform::instance;
static void (AppPlatform::*_AppPlatform_AppPlatform)();
AppPlatform::AppPlatform() {
    (this->*_AppPlatform_AppPlatform)();
}
static void (AppPlatform::*_AppPlatform__fireAppFocusGained)();
void AppPlatform::_fireAppFocusGained() {
    (this->*_AppPlatform__fireAppFocusGained)();
}
static void (AppPlatform::*_AppPlatform_initialize)();
void AppPlatform::initialize() {
    (this->*_AppPlatform_initialize)();
}
static void (AppPlatform::*_AppPlatform_teardown)();
void AppPlatform::teardown() {
    (this->*_AppPlatform_teardown)();
}
static void (AppPlatform::*_AppPlatform_showKeyboard)(mcpe::string const &, int, bool, bool, bool, int, Vec2 const &);
void AppPlatform::showKeyboard(mcpe::string const & p1, int p2, bool p3, bool p4, bool p5, int p6, Vec2 const & p7) {
    (this->*_AppPlatform_showKeyboard)(p1, p2, p3, p4, p5, p6, p7);
}
static void (AppPlatform::*_AppPlatform_hideKeyboard)();
void AppPlatform::hideKeyboard() {
    (this->*_AppPlatform_hideKeyboard)();
}
static bool (AppPlatform::*_AppPlatform_isKeyboardVisible)();
bool AppPlatform::isKeyboardVisible() {
    return (this->*_AppPlatform_isKeyboardVisible)();
}

#include "CommandSelector.h"
static void (CommandSelectorBase::*_CommandSelectorBase_CommandSelectorBase)(bool);
CommandSelectorBase::CommandSelectorBase(bool p1) {
    (this->*_CommandSelectorBase_CommandSelectorBase)(p1);
}
static void (CommandSelectorBase::*_CommandSelectorBase_destructor)();
CommandSelectorBase::~CommandSelectorBase() {
    (this->*_CommandSelectorBase_destructor)();
}
static std::shared_ptr<std::vector<Actor *> > (CommandSelectorBase::*_CommandSelectorBase_newResults)(CommandOrigin const &) const;
std::shared_ptr<std::vector<Actor *> > CommandSelectorBase::newResults(CommandOrigin const & p1) const {
    return (this->*_CommandSelectorBase_newResults)(p1);
}
typeid_t<CommandRegistry> * CommandActorSelector::tid;
Parser CommandActorSelector::parser;
typeid_t<CommandRegistry> * CommandPlayerSelector::tid;
Parser CommandPlayerSelector::parser;

#include "Command.h"
static void (Command::*_Command_destructor)();
Command::~Command() {
    (this->*_Command_destructor)();
}
static void (Command::*_Command_Command)();
Command::Command() {
    (this->*_Command_Command)();
}

#include "Minecraft.h"
static MinecraftCommands * (Minecraft::*_Minecraft_getCommands)();
MinecraftCommands * Minecraft::getCommands() {
    return (this->*_Minecraft_getCommands)();
}
static Level * (Minecraft::*_Minecraft_getLevel)() const;
Level * Minecraft::getLevel() const {
    return (this->*_Minecraft_getLevel)();
}
static void (Minecraft::*_Minecraft_activateWhitelist)();
void Minecraft::activateWhitelist() {
    (this->*_Minecraft_activateWhitelist)();
}

#include "AutomationClient.h"
static void (Automation::AutomationClient::*_Automation_AutomationClient_AutomationClient)(IMinecraftApp &);
Automation::AutomationClient::AutomationClient(IMinecraftApp & p1) {
    (this->*_Automation_AutomationClient_AutomationClient)(p1);
}

#include "Api.h"

#include "FilePathManager.h"
static void (FilePathManager::*_FilePathManager_FilePathManager)(mcpe::string, bool);
FilePathManager::FilePathManager(mcpe::string p1, bool p2) {
    (this->*_FilePathManager_FilePathManager)(p1, p2);
}
static mcpe::string (FilePathManager::*_FilePathManager_getRootPath)() const;
mcpe::string FilePathManager::getRootPath() const {
    return (this->*_FilePathManager_getRootPath)();
}
static mcpe::string (FilePathManager::*_FilePathManager_getUserDataPath)() const;
mcpe::string FilePathManager::getUserDataPath() const {
    return (this->*_FilePathManager_getUserDataPath)();
}
static mcpe::string (FilePathManager::*_FilePathManager_getWorldsPath)() const;
mcpe::string FilePathManager::getWorldsPath() const {
    return (this->*_FilePathManager_getWorldsPath)();
}
static void (FilePathManager::*_FilePathManager_setPackagePath)(mcpe::string);
void FilePathManager::setPackagePath(mcpe::string p1) {
    (this->*_FilePathManager_setPackagePath)(p1);
}
static mcpe::string (FilePathManager::*_FilePathManager_getPackagePath)() const;
mcpe::string FilePathManager::getPackagePath() const {
    return (this->*_FilePathManager_getPackagePath)();
}
static void (FilePathManager::*_FilePathManager_setSettingsPath)(mcpe::string);
void FilePathManager::setSettingsPath(mcpe::string p1) {
    (this->*_FilePathManager_setSettingsPath)(p1);
}
static mcpe::string (FilePathManager::*_FilePathManager_getSettingsPath)() const;
mcpe::string FilePathManager::getSettingsPath() const {
    return (this->*_FilePathManager_getSettingsPath)();
}

#include "CommandUtils.h"
typeid_t<CommandRegistry> * CommonType<mcpe::string>::tid;
Parser CommonType<mcpe::string>::parser;
typeid_t<CommandRegistry> * CommonType<int>::tid;
Parser CommonType<int>::parser;
typeid_t<CommandRegistry> * CommonType<float>::tid;
Parser CommonType<float>::parser;
typeid_t<CommandRegistry> * CommonType<bool>::tid;
Parser CommonType<bool>::parser;
typeid_t<CommandRegistry> * CommonType<CommandRawText>::tid;
Parser CommonType<CommandRawText>::parser;
static std::tuple<float, float, float> (CommandPosition::*_CommandPosition_getPosition)(CommandOrigin const &) const;
std::tuple<float, float, float> CommandPosition::getPosition(CommandOrigin const & p1) const {
    return (this->*_CommandPosition_getPosition)(p1);
}
typeid_t<CommandRegistry> * CommonType<CommandPosition>::tid;
Parser CommonType<CommandPosition>::parser;

#include "LevelSettings.h"
static void (LevelSettings::*_LevelSettings_LevelSettings)();
LevelSettings::LevelSettings() {
    (this->*_LevelSettings_LevelSettings)();
}
static void (LevelSettings::*_LevelSettings_LevelSettings2)(LevelSettings const &);
LevelSettings::LevelSettings(LevelSettings const & p1) {
    (this->*_LevelSettings_LevelSettings2)(p1);
}
static int (*_LevelSettings_parseSeedString)(mcpe::string const &, unsigned int);
int LevelSettings::parseSeedString(mcpe::string const & p1, unsigned int p2) {
    return _LevelSettings_parseSeedString(p1, p2);
}

#include "SaveTransactionManager.h"
static void (SaveTransactionManager::*_SaveTransactionManager_SaveTransactionManager)(std::function<void ( bool )>);
SaveTransactionManager::SaveTransactionManager(std::function<void ( bool )> p1) {
    (this->*_SaveTransactionManager_SaveTransactionManager)(p1);
}

#include "ImagePickingCallback.h"

#include "ExtendedCertificate.h"
static mcpe::string (*_ExtendedCertificate_getXuid)(Certificate const &);
mcpe::string ExtendedCertificate::getXuid(Certificate const & p1) {
    return _ExtendedCertificate_getXuid(p1);
}

#include "ClientInstance.h"
static std::shared_ptr<Social::User> (ClientInstance::*_ClientInstance_getUser)();
std::shared_ptr<Social::User> ClientInstance::getUser() {
    return (this->*_ClientInstance_getUser)();
}
static void (ClientInstance::*_ClientInstance__startLeaveGame)();
void ClientInstance::_startLeaveGame() {
    (this->*_ClientInstance__startLeaveGame)();
}
static void (ClientInstance::*_ClientInstance__syncDestroyGame)();
void ClientInstance::_syncDestroyGame() {
    (this->*_ClientInstance__syncDestroyGame)();
}

#include "Crypto.h"
static mce::UUID (*_Crypto_Random_generateUUID)();
mce::UUID Crypto::Random::generateUUID() {
    return _Crypto_Random_generateUUID();
}

#include "UUID.h"
mce::UUID * mce::UUID::EMPTY;
static mce::UUID (*_mce_UUID_fromString)(mcpe::string const &);
mce::UUID mce::UUID::fromString(mcpe::string const & p1) {
    return _mce_UUID_fromString(p1);
}
static mcpe::string (mce::UUID::*_mce_UUID_asString)() const;
mcpe::string mce::UUID::asString() const {
    return (this->*_mce_UUID_asString)();
}

#include "TransferPacket.h"
void * TransferPacket::myVtable;

#include "ResourcePackStack.h"
static void (PackInstance::*_PackInstance_PackInstance)(ResourcePack *, int, bool, PackSettings *);
PackInstance::PackInstance(ResourcePack * p1, int p2, bool p3, PackSettings * p4) {
    (this->*_PackInstance_PackInstance)(p1, p2, p3, p4);
}
void * * ResourcePackStack::vtable_sym;
static void (ResourcePackStack::*_ResourcePackStack_add)(PackInstance const &, ResourcePackRepository const &, bool);
void ResourcePackStack::add(PackInstance const & p1, ResourcePackRepository const & p2, bool p3) {
    (this->*_ResourcePackStack_add)(p1, p2, p3);
}

#include "UserManager.h"
static std::unique_ptr<Social::UserManager> (*_Social_UserManager_CreateUserManager)();
std::unique_ptr<Social::UserManager> Social::UserManager::CreateUserManager() {
    return _Social_UserManager_CreateUserManager();
}

#include "Scheduler.h"
static void (Scheduler::*_Scheduler_processCoroutines)(std::chrono::duration<long long>);
void Scheduler::processCoroutines(std::chrono::duration<long long> p1) {
    (this->*_Scheduler_processCoroutines)(p1);
}
static Scheduler * (*_MinecraftScheduler_client)();
Scheduler * MinecraftScheduler::client() {
    return _MinecraftScheduler_client();
}

#include "ExternalFileLevelStorageSource.h"
static void (ExternalFileLevelStorageSource::*_ExternalFileLevelStorageSource_ExternalFileLevelStorageSource)(FilePathManager *, std::shared_ptr<SaveTransactionManager>);
ExternalFileLevelStorageSource::ExternalFileLevelStorageSource(FilePathManager * p1, std::shared_ptr<SaveTransactionManager> p2) {
    (this->*_ExternalFileLevelStorageSource_ExternalFileLevelStorageSource)(p1, p2);
}
static std::unique_ptr<LevelStorage> (ExternalFileLevelStorageSource::*_ExternalFileLevelStorageSource_createLevelStorage)(Scheduler &, mcpe::string const &, ContentIdentity const &, IContentKeyProvider const &);
std::unique_ptr<LevelStorage> ExternalFileLevelStorageSource::createLevelStorage(Scheduler & p1, mcpe::string const & p2, ContentIdentity const & p3, IContentKeyProvider const & p4) {
    return (this->*_ExternalFileLevelStorageSource_createLevelStorage)(p1, p2, p3, p4);
}

#include "ResourcePack.h"
static void (SkinPackKeyProvider::*_SkinPackKeyProvider_SkinPackKeyProvider)();
SkinPackKeyProvider::SkinPackKeyProvider() {
    (this->*_SkinPackKeyProvider_SkinPackKeyProvider)();
}
static void (PackManifestFactory::*_PackManifestFactory_PackManifestFactory)(IPackTelemetry &);
PackManifestFactory::PackManifestFactory(IPackTelemetry & p1) {
    (this->*_PackManifestFactory_PackManifestFactory)(p1);
}
static void (PackSourceFactory::*_PackSourceFactory_PackSourceFactory)(Options *);
PackSourceFactory::PackSourceFactory(Options * p1) {
    (this->*_PackSourceFactory_PackSourceFactory)(p1);
}
static void (ResourcePackRepository::*_ResourcePackRepository_ResourcePackRepository)(IMinecraftEventing &, PackManifestFactory &, IContentAccessibilityProvider &, FilePathManager *, PackSourceFactory &, bool);
ResourcePackRepository::ResourcePackRepository(IMinecraftEventing & p1, PackManifestFactory & p2, IContentAccessibilityProvider & p3, FilePathManager * p4, PackSourceFactory & p5, bool p6) {
    (this->*_ResourcePackRepository_ResourcePackRepository)(p1, p2, p3, p4, p5, p6);
}
static void (ResourcePackRepository::*_ResourcePackRepository_addWorldResourcePacks)(mcpe::string const &);
void ResourcePackRepository::addWorldResourcePacks(mcpe::string const & p1) {
    (this->*_ResourcePackRepository_addWorldResourcePacks)(p1);
}
static void (ResourcePackRepository::*_ResourcePackRepository_refreshPacks)();
void ResourcePackRepository::refreshPacks() {
    (this->*_ResourcePackRepository_refreshPacks)();
}
static void (ContentTierManager::*_ContentTierManager_ContentTierManager)();
ContentTierManager::ContentTierManager() {
    (this->*_ContentTierManager_ContentTierManager)();
}
static void (ResourcePackManager::*_ResourcePackManager_ResourcePackManager)(std::function<mcpe::string ( )> const &, ContentTierManager const &);
ResourcePackManager::ResourcePackManager(std::function<mcpe::string ( )> const & p1, ContentTierManager const & p2) {
    (this->*_ResourcePackManager_ResourcePackManager)(p1, p2);
}
static void (ResourcePackManager::*_ResourcePackManager_setStack)(std::unique_ptr<ResourcePackStack>, ResourcePackStackType, bool);
void ResourcePackManager::setStack(std::unique_ptr<ResourcePackStack> p1, ResourcePackStackType p2, bool p3) {
    (this->*_ResourcePackManager_setStack)(std::move(p1), p2, p3);
}
static void (ResourcePackManager::*_ResourcePackManager_onLanguageChanged)();
void ResourcePackManager::onLanguageChanged() {
    (this->*_ResourcePackManager_onLanguageChanged)();
}

#include "V8.h"
static bool (*_v8_V8_Initialize)();
bool v8::V8::Initialize() {
    return _v8_V8_Initialize();
}
static void (*_v8_V8_InitializePlatform)(v8::Platform *);
void v8::V8::InitializePlatform(v8::Platform * p1) {
    _v8_V8_InitializePlatform(p1);
}
static void * (*_v8_V8_GlobalizeReference)(v8::Isolate *, void *);
void * v8::V8::GlobalizeReference(v8::Isolate * p1, void * p2) {
    return _v8_V8_GlobalizeReference(p1, p2);
}
static void * (*_v8_V8_CreateHandle)(v8::Isolate *, void *);
void * v8::V8::CreateHandle(v8::Isolate * p1, void * p2) {
    return _v8_V8_CreateHandle(p1, p2);
}
static bool (v8::Value::*_v8_Value_IsTrue)() const;
bool v8::Value::IsTrue() const {
    return (this->*_v8_Value_IsTrue)();
}
static bool (v8::Value::*_v8_Value_IsFalse)() const;
bool v8::Value::IsFalse() const {
    return (this->*_v8_Value_IsFalse)();
}
static bool (v8::Value::*_v8_Value_IsName)() const;
bool v8::Value::IsName() const {
    return (this->*_v8_Value_IsName)();
}
static bool (v8::Value::*_v8_Value_IsSymbol)() const;
bool v8::Value::IsSymbol() const {
    return (this->*_v8_Value_IsSymbol)();
}
static bool (v8::Value::*_v8_Value_IsFunction)() const;
bool v8::Value::IsFunction() const {
    return (this->*_v8_Value_IsFunction)();
}
static bool (v8::Value::*_v8_Value_IsArray)() const;
bool v8::Value::IsArray() const {
    return (this->*_v8_Value_IsArray)();
}
static bool (v8::Value::*_v8_Value_IsObject)() const;
bool v8::Value::IsObject() const {
    return (this->*_v8_Value_IsObject)();
}
static bool (v8::Value::*_v8_Value_IsBoolean)() const;
bool v8::Value::IsBoolean() const {
    return (this->*_v8_Value_IsBoolean)();
}
static bool (v8::Value::*_v8_Value_IsNumber)() const;
bool v8::Value::IsNumber() const {
    return (this->*_v8_Value_IsNumber)();
}
static bool (v8::Value::*_v8_Value_IsExternal)() const;
bool v8::Value::IsExternal() const {
    return (this->*_v8_Value_IsExternal)();
}
static bool (v8::Value::*_v8_Value_IsInt32)() const;
bool v8::Value::IsInt32() const {
    return (this->*_v8_Value_IsInt32)();
}
static bool (v8::Value::*_v8_Value_IsUint32)() const;
bool v8::Value::IsUint32() const {
    return (this->*_v8_Value_IsUint32)();
}
static bool (v8::Value::*_v8_Value_IsDate)() const;
bool v8::Value::IsDate() const {
    return (this->*_v8_Value_IsDate)();
}
static bool (v8::Value::*_v8_Value_IsArgumentsObject)() const;
bool v8::Value::IsArgumentsObject() const {
    return (this->*_v8_Value_IsArgumentsObject)();
}
static bool (v8::Value::*_v8_Value_IsBooleanObject)() const;
bool v8::Value::IsBooleanObject() const {
    return (this->*_v8_Value_IsBooleanObject)();
}
static bool (v8::Value::*_v8_Value_IsNumberObject)() const;
bool v8::Value::IsNumberObject() const {
    return (this->*_v8_Value_IsNumberObject)();
}
static bool (v8::Value::*_v8_Value_IsStringObject)() const;
bool v8::Value::IsStringObject() const {
    return (this->*_v8_Value_IsStringObject)();
}
static bool (v8::Value::*_v8_Value_IsSymbolObject)() const;
bool v8::Value::IsSymbolObject() const {
    return (this->*_v8_Value_IsSymbolObject)();
}
static bool (v8::Value::*_v8_Value_IsNativeError)() const;
bool v8::Value::IsNativeError() const {
    return (this->*_v8_Value_IsNativeError)();
}
static bool (v8::Value::*_v8_Value_IsRegExp)() const;
bool v8::Value::IsRegExp() const {
    return (this->*_v8_Value_IsRegExp)();
}
static bool (v8::Value::*_v8_Value_IsAsyncFunction)() const;
bool v8::Value::IsAsyncFunction() const {
    return (this->*_v8_Value_IsAsyncFunction)();
}
static bool (v8::Value::*_v8_Value_IsGeneratorFunction)() const;
bool v8::Value::IsGeneratorFunction() const {
    return (this->*_v8_Value_IsGeneratorFunction)();
}
static bool (v8::Value::*_v8_Value_IsGeneratorObject)() const;
bool v8::Value::IsGeneratorObject() const {
    return (this->*_v8_Value_IsGeneratorObject)();
}
static bool (v8::Value::*_v8_Value_IsPromise)() const;
bool v8::Value::IsPromise() const {
    return (this->*_v8_Value_IsPromise)();
}
static bool (v8::Value::*_v8_Value_IsMap)() const;
bool v8::Value::IsMap() const {
    return (this->*_v8_Value_IsMap)();
}
static bool (v8::Value::*_v8_Value_IsSet)() const;
bool v8::Value::IsSet() const {
    return (this->*_v8_Value_IsSet)();
}
static bool (v8::Value::*_v8_Value_IsMapIterator)() const;
bool v8::Value::IsMapIterator() const {
    return (this->*_v8_Value_IsMapIterator)();
}
static bool (v8::Value::*_v8_Value_IsSetIterator)() const;
bool v8::Value::IsSetIterator() const {
    return (this->*_v8_Value_IsSetIterator)();
}
static bool (v8::Value::*_v8_Value_IsWeakMap)() const;
bool v8::Value::IsWeakMap() const {
    return (this->*_v8_Value_IsWeakMap)();
}
static bool (v8::Value::*_v8_Value_IsWeakSet)() const;
bool v8::Value::IsWeakSet() const {
    return (this->*_v8_Value_IsWeakSet)();
}
static bool (v8::Value::*_v8_Value_IsArrayBuffer)() const;
bool v8::Value::IsArrayBuffer() const {
    return (this->*_v8_Value_IsArrayBuffer)();
}
static bool (v8::Value::*_v8_Value_IsArrayBufferView)() const;
bool v8::Value::IsArrayBufferView() const {
    return (this->*_v8_Value_IsArrayBufferView)();
}
static bool (v8::Value::*_v8_Value_IsTypedArray)() const;
bool v8::Value::IsTypedArray() const {
    return (this->*_v8_Value_IsTypedArray)();
}
static bool (v8::Value::*_v8_Value_IsUint8Array)() const;
bool v8::Value::IsUint8Array() const {
    return (this->*_v8_Value_IsUint8Array)();
}
static bool (v8::Value::*_v8_Value_IsUint8ClampedArray)() const;
bool v8::Value::IsUint8ClampedArray() const {
    return (this->*_v8_Value_IsUint8ClampedArray)();
}
static bool (v8::Value::*_v8_Value_IsInt8Array)() const;
bool v8::Value::IsInt8Array() const {
    return (this->*_v8_Value_IsInt8Array)();
}
static bool (v8::Value::*_v8_Value_IsUint16Array)() const;
bool v8::Value::IsUint16Array() const {
    return (this->*_v8_Value_IsUint16Array)();
}
static bool (v8::Value::*_v8_Value_IsInt16Array)() const;
bool v8::Value::IsInt16Array() const {
    return (this->*_v8_Value_IsInt16Array)();
}
static bool (v8::Value::*_v8_Value_IsUint32Array)() const;
bool v8::Value::IsUint32Array() const {
    return (this->*_v8_Value_IsUint32Array)();
}
static bool (v8::Value::*_v8_Value_IsInt32Array)() const;
bool v8::Value::IsInt32Array() const {
    return (this->*_v8_Value_IsInt32Array)();
}
static bool (v8::Value::*_v8_Value_IsFloat32Array)() const;
bool v8::Value::IsFloat32Array() const {
    return (this->*_v8_Value_IsFloat32Array)();
}
static bool (v8::Value::*_v8_Value_IsFloat64Array)() const;
bool v8::Value::IsFloat64Array() const {
    return (this->*_v8_Value_IsFloat64Array)();
}
static bool (v8::Value::*_v8_Value_IsDataView)() const;
bool v8::Value::IsDataView() const {
    return (this->*_v8_Value_IsDataView)();
}
static bool (v8::Value::*_v8_Value_IsSharedArrayBuffer)() const;
bool v8::Value::IsSharedArrayBuffer() const {
    return (this->*_v8_Value_IsSharedArrayBuffer)();
}
static bool (v8::Value::*_v8_Value_IsProxy)() const;
bool v8::Value::IsProxy() const {
    return (this->*_v8_Value_IsProxy)();
}
static bool (v8::Value::*_v8_Value_IsWebAssemblyCompiledModule)() const;
bool v8::Value::IsWebAssemblyCompiledModule() const {
    return (this->*_v8_Value_IsWebAssemblyCompiledModule)();
}
static v8::Local<v8::Boolean> (v8::Value::*_v8_Value_ToBoolean)(v8::Isolate *) const;
v8::Local<v8::Boolean> v8::Value::ToBoolean(v8::Isolate * p1) const {
    return (this->*_v8_Value_ToBoolean)(p1);
}
static v8::Local<v8::Number> (v8::Value::*_v8_Value_ToNumber)(v8::Isolate *) const;
v8::Local<v8::Number> v8::Value::ToNumber(v8::Isolate * p1) const {
    return (this->*_v8_Value_ToNumber)(p1);
}
static v8::Local<v8::String> (v8::Value::*_v8_Value_ToString)(v8::Isolate *) const;
v8::Local<v8::String> v8::Value::ToString(v8::Isolate * p1) const {
    return (this->*_v8_Value_ToString)(p1);
}
static v8::Local<v8::Object> (v8::Value::*_v8_Value_ToObject)(v8::Isolate *) const;
v8::Local<v8::Object> v8::Value::ToObject(v8::Isolate * p1) const {
    return (this->*_v8_Value_ToObject)(p1);
}
static v8::Local<v8::Integer> (v8::Value::*_v8_Value_ToInteger)(v8::Isolate *) const;
v8::Local<v8::Integer> v8::Value::ToInteger(v8::Isolate * p1) const {
    return (this->*_v8_Value_ToInteger)(p1);
}
static v8::Local<v8::Int32> (v8::Value::*_v8_Value_ToInt32)(v8::Isolate *) const;
v8::Local<v8::Int32> v8::Value::ToInt32(v8::Isolate * p1) const {
    return (this->*_v8_Value_ToInt32)(p1);
}
static bool (v8::Value::*_v8_Value_BooleanValue)() const;
bool v8::Value::BooleanValue() const {
    return (this->*_v8_Value_BooleanValue)();
}
static v8::MaybeLocal<v8::Uint32> (v8::Value::*_v8_Value_ToArrayIndex)() const;
v8::MaybeLocal<v8::Uint32> v8::Value::ToArrayIndex() const {
    return (this->*_v8_Value_ToArrayIndex)();
}
static v8::Maybe<bool> (v8::Value::*_v8_Value_Equals)(v8::Local<v8::Context>, v8::Local<v8::Value>) const;
v8::Maybe<bool> v8::Value::Equals(v8::Local<v8::Context> p1, v8::Local<v8::Value> p2) const {
    return (this->*_v8_Value_Equals)(p1, p2);
}
static v8::Maybe<bool> (v8::Value::*_v8_Value_Equals2)(v8::Local<v8::Value>) const;
v8::Maybe<bool> v8::Value::Equals(v8::Local<v8::Value> p1) const {
    return (this->*_v8_Value_Equals2)(p1);
}
static bool (v8::Value::*_v8_Value_StrictEquals)(v8::Local<v8::Value>) const;
bool v8::Value::StrictEquals(v8::Local<v8::Value> p1) const {
    return (this->*_v8_Value_StrictEquals)(p1);
}
static bool (v8::Value::*_v8_Value_SameValue)(v8::Local<v8::Value>) const;
bool v8::Value::SameValue(v8::Local<v8::Value> p1) const {
    return (this->*_v8_Value_SameValue)(p1);
}
static v8::Local<v8::String> (v8::Value::*_v8_Value_TypeOf)(v8::Isolate *);
v8::Local<v8::String> v8::Value::TypeOf(v8::Isolate * p1) {
    return (this->*_v8_Value_TypeOf)(p1);
}
static bool (v8::Value::*_v8_Value_FullIsNull)() const;
bool v8::Value::FullIsNull() const {
    return (this->*_v8_Value_FullIsNull)();
}
static bool (v8::Value::*_v8_Value_FullIsUndefined)() const;
bool v8::Value::FullIsUndefined() const {
    return (this->*_v8_Value_FullIsUndefined)();
}
static bool (v8::Value::*_v8_Value_FullIsString)() const;
bool v8::Value::FullIsString() const {
    return (this->*_v8_Value_FullIsString)();
}
static void (*_v8_Name_CheckCast)(v8::Value *);
void v8::Name::CheckCast(v8::Value * p1) {
    _v8_Name_CheckCast(p1);
}
static int (v8::String::*_v8_String_Length)() const;
int v8::String::Length() const {
    return (this->*_v8_String_Length)();
}
static int (v8::String::*_v8_String_Utf8Length)() const;
int v8::String::Utf8Length() const {
    return (this->*_v8_String_Utf8Length)();
}
static bool (v8::String::*_v8_String_IsOneByte)() const;
bool v8::String::IsOneByte() const {
    return (this->*_v8_String_IsOneByte)();
}
static bool (v8::String::*_v8_String_ContainsOnlyOneByte)() const;
bool v8::String::ContainsOnlyOneByte() const {
    return (this->*_v8_String_ContainsOnlyOneByte)();
}
static bool (v8::String::*_v8_String_IsExternal)() const;
bool v8::String::IsExternal() const {
    return (this->*_v8_String_IsExternal)();
}
static bool (v8::String::*_v8_String_IsExternalOneByte)() const;
bool v8::String::IsExternalOneByte() const {
    return (this->*_v8_String_IsExternalOneByte)();
}
static v8::Local<v8::String> (*_v8_String_NewFromUtf8Impl)(v8::Isolate *, char const *, v8::NewStringType, int);
v8::Local<v8::String> v8::String::NewFromUtf8Impl(v8::Isolate * p1, char const * p2, v8::NewStringType p3, int p4) {
    return _v8_String_NewFromUtf8Impl(p1, p2, p3, p4);
}
static v8::Local<v8::String> (*_v8_String_NewFromTwoByteImpl)(v8::Isolate *, char16_t const *, v8::NewStringType, int);
v8::Local<v8::String> v8::String::NewFromTwoByteImpl(v8::Isolate * p1, char16_t const * p2, v8::NewStringType p3, int p4) {
    return _v8_String_NewFromTwoByteImpl(p1, p2, p3, p4);
}
static int (v8::String::*_v8_String_WriteImpl)(unsigned short *, int, int, int) const;
int v8::String::WriteImpl(unsigned short * p1, int p2, int p3, int p4) const {
    return (this->*_v8_String_WriteImpl)(p1, p2, p3, p4);
}
static void (*_v8_String_CheckCast)(v8::Value *);
void v8::String::CheckCast(v8::Value * p1) {
    _v8_String_CheckCast(p1);
}
static void (v8::String::Utf8Value::*_v8_String_Utf8Value_Utf8Value)(v8::Isolate *, v8::Local<v8::Value>);
v8::String::Utf8Value::Utf8Value(v8::Isolate * p1, v8::Local<v8::Value> p2) {
    (this->*_v8_String_Utf8Value_Utf8Value)(p1, p2);
}
static void (v8::String::Utf8Value::*_v8_String_Utf8Value_destructor)();
v8::String::Utf8Value::~Utf8Value() {
    (this->*_v8_String_Utf8Value_destructor)();
}
static v8::Local<v8::Number> (*_v8_Number_New)(v8::Isolate *, double);
v8::Local<v8::Number> v8::Number::New(v8::Isolate * p1, double p2) {
    return _v8_Number_New(p1, p2);
}
static double (v8::Number::*_v8_Number_Value)() const;
double v8::Number::Value() const {
    return (this->*_v8_Number_Value)();
}
static void (*_v8_Number_CheckCast)(v8::Value *);
void v8::Number::CheckCast(v8::Value * p1) {
    _v8_Number_CheckCast(p1);
}
static v8::Local<v8::Integer> (*_v8_Integer_New)(v8::Isolate *, int32_t);
v8::Local<v8::Integer> v8::Integer::New(v8::Isolate * p1, int32_t p2) {
    return _v8_Integer_New(p1, p2);
}
static v8::Local<v8::Integer> (*_v8_Integer_NewFromUnsigned)(v8::Isolate *, uint32_t);
v8::Local<v8::Integer> v8::Integer::NewFromUnsigned(v8::Isolate * p1, uint32_t p2) {
    return _v8_Integer_NewFromUnsigned(p1, p2);
}
static int64_t (v8::Integer::*_v8_Integer_Value)() const;
int64_t v8::Integer::Value() const {
    return (this->*_v8_Integer_Value)();
}
static void (*_v8_Integer_CheckCast)(v8::Value *);
void v8::Integer::CheckCast(v8::Value * p1) {
    _v8_Integer_CheckCast(p1);
}
static bool (v8::Boolean::*_v8_Boolean_Value)() const;
bool v8::Boolean::Value() const {
    return (this->*_v8_Boolean_Value)();
}
static void (*_v8_Boolean_CheckCast)(v8::Value *);
void v8::Boolean::CheckCast(v8::Value * p1) {
    _v8_Boolean_CheckCast(p1);
}
static void (v8::TryCatch::*_v8_TryCatch_TryCatch)(v8::Isolate *);
v8::TryCatch::TryCatch(v8::Isolate * p1) {
    (this->*_v8_TryCatch_TryCatch)(p1);
}
static void (v8::TryCatch::*_v8_TryCatch_destructor)();
v8::TryCatch::~TryCatch() {
    (this->*_v8_TryCatch_destructor)();
}
static bool (v8::TryCatch::*_v8_TryCatch_HasCaught)() const;
bool v8::TryCatch::HasCaught() const {
    return (this->*_v8_TryCatch_HasCaught)();
}
static bool (v8::TryCatch::*_v8_TryCatch_CanContinue)() const;
bool v8::TryCatch::CanContinue() const {
    return (this->*_v8_TryCatch_CanContinue)();
}
static bool (v8::TryCatch::*_v8_TryCatch_HasTerminated)() const;
bool v8::TryCatch::HasTerminated() const {
    return (this->*_v8_TryCatch_HasTerminated)();
}
static v8::Local<v8::Value> (v8::TryCatch::*_v8_TryCatch_ReThrow)();
v8::Local<v8::Value> v8::TryCatch::ReThrow() {
    return (this->*_v8_TryCatch_ReThrow)();
}
static v8::Local<v8::Value> (v8::TryCatch::*_v8_TryCatch_Exception)() const;
v8::Local<v8::Value> v8::TryCatch::Exception() const {
    return (this->*_v8_TryCatch_Exception)();
}
static v8::MaybeLocal<v8::Value> (v8::TryCatch::*_v8_TryCatch_StackTrace)(v8::Local<v8::Context>) const;
v8::MaybeLocal<v8::Value> v8::TryCatch::StackTrace(v8::Local<v8::Context> p1) const {
    return (this->*_v8_TryCatch_StackTrace)(p1);
}
static v8::Local<v8::Message> (v8::TryCatch::*_v8_TryCatch_Message)() const;
v8::Local<v8::Message> v8::TryCatch::Message() const {
    return (this->*_v8_TryCatch_Message)();
}
static void (v8::TryCatch::*_v8_TryCatch_Reset)();
void v8::TryCatch::Reset() {
    (this->*_v8_TryCatch_Reset)();
}
static void (v8::TryCatch::*_v8_TryCatch_SetVerbose)(bool);
void v8::TryCatch::SetVerbose(bool p1) {
    (this->*_v8_TryCatch_SetVerbose)(p1);
}
static void (v8::TryCatch::*_v8_TryCatch_SetCaptureMessage)(bool);
void v8::TryCatch::SetCaptureMessage(bool p1) {
    (this->*_v8_TryCatch_SetCaptureMessage)(p1);
}
static void (v8::Isolate::*_v8_Isolate_ThrowException)(v8::Local<v8::Value>);
void v8::Isolate::ThrowException(v8::Local<v8::Value> p1) {
    (this->*_v8_Isolate_ThrowException)(p1);
}
static v8::Isolate * (*_v8_Isolate_GetCurrent)();
v8::Isolate * v8::Isolate::GetCurrent() {
    return _v8_Isolate_GetCurrent();
}
static v8::Local<v8::Context> (v8::Isolate::*_v8_Isolate_GetCurrentContext)();
v8::Local<v8::Context> v8::Isolate::GetCurrentContext() {
    return (this->*_v8_Isolate_GetCurrentContext)();
}
static bool (v8::Isolate::*_v8_Isolate_InContext)();
bool v8::Isolate::InContext() {
    return (this->*_v8_Isolate_InContext)();
}
static void (v8::Isolate::*_v8_Isolate_Enter)();
void v8::Isolate::Enter() {
    (this->*_v8_Isolate_Enter)();
}
static void (v8::Isolate::*_v8_Isolate_Exit)();
void v8::Isolate::Exit() {
    (this->*_v8_Isolate_Exit)();
}
static void (v8::Context::*_v8_Context_Enter)();
void v8::Context::Enter() {
    (this->*_v8_Context_Enter)();
}
static void (v8::Context::*_v8_Context_Exit)();
void v8::Context::Exit() {
    (this->*_v8_Context_Exit)();
}
static v8::Local<v8::Context> (*_v8_Context_New)(v8::Isolate *, v8::ExtensionConfiguration *, v8::MaybeLocal<v8::ObjectTemplate>, v8::MaybeLocal<v8::Value>);
v8::Local<v8::Context> v8::Context::New(v8::Isolate * p1, v8::ExtensionConfiguration * p2, v8::MaybeLocal<v8::ObjectTemplate> p3, v8::MaybeLocal<v8::Value> p4) {
    return _v8_Context_New(p1, p2, p3, p4);
}
static void (v8::HandleScope::*_v8_HandleScope_HandleScope)(v8::Isolate *);
v8::HandleScope::HandleScope(v8::Isolate * p1) {
    (this->*_v8_HandleScope_HandleScope)(p1);
}
static void (v8::HandleScope::*_v8_HandleScope_destructor)();
v8::HandleScope::~HandleScope() {
    (this->*_v8_HandleScope_destructor)();
}
static void (v8::EscapableHandleScope::*_v8_EscapableHandleScope_EscapableHandleScope)(v8::Isolate *);
v8::EscapableHandleScope::EscapableHandleScope(v8::Isolate * p1) {
    (this->*_v8_EscapableHandleScope_EscapableHandleScope)(p1);
}
static v8::Local<v8::Object> (*_v8_Object_New)(v8::Isolate *);
v8::Local<v8::Object> v8::Object::New(v8::Isolate * p1) {
    return _v8_Object_New(p1);
}
static bool (v8::Object::*_v8_Object_Set)(unsigned, v8::Local<v8::Value>);
bool v8::Object::Set(unsigned p1, v8::Local<v8::Value> p2) {
    return (this->*_v8_Object_Set)(p1, p2);
}
static bool (v8::Object::*_v8_Object_Set2)(v8::Local<v8::Value>, v8::Local<v8::Value>);
bool v8::Object::Set(v8::Local<v8::Value> p1, v8::Local<v8::Value> p2) {
    return (this->*_v8_Object_Set2)(p1, p2);
}
static v8::Local<v8::Value> (v8::Object::*_v8_Object_Get)(unsigned);
v8::Local<v8::Value> v8::Object::Get(unsigned p1) {
    return (this->*_v8_Object_Get)(p1);
}
static v8::Local<v8::Value> (v8::Object::*_v8_Object_Get2)(v8::Local<v8::Value>);
v8::Local<v8::Value> v8::Object::Get(v8::Local<v8::Value> p1) {
    return (this->*_v8_Object_Get2)(p1);
}
static bool (v8::Object::*_v8_Object_Has)(v8::Local<v8::Value>);
bool v8::Object::Has(v8::Local<v8::Value> p1) {
    return (this->*_v8_Object_Has)(p1);
}
static void (*_v8_Object_CheckCast)(v8::Value *);
void v8::Object::CheckCast(v8::Value * p1) {
    _v8_Object_CheckCast(p1);
}
static v8::Local<v8::Array> (*_v8_Array_New)(v8::Isolate *, int);
v8::Local<v8::Array> v8::Array::New(v8::Isolate * p1, int p2) {
    return _v8_Array_New(p1, p2);
}
static unsigned (v8::Array::*_v8_Array_Length)() const;
unsigned v8::Array::Length() const {
    return (this->*_v8_Array_Length)();
}
static void (*_v8_Array_CheckCast)(v8::Value *);
void v8::Array::CheckCast(v8::Value * p1) {
    _v8_Array_CheckCast(p1);
}
static v8::Local<v8::Value> (v8::Function::*_v8_Function_Call)(v8::Local<v8::Value>, int, v8::Local<v8::Value> *);
v8::Local<v8::Value> v8::Function::Call(v8::Local<v8::Value> p1, int p2, v8::Local<v8::Value> * p3) {
    return (this->*_v8_Function_Call)(p1, p2, p3);
}
static void (*_v8_Function_CheckCast)(v8::Value *);
void v8::Function::CheckCast(v8::Value * p1) {
    _v8_Function_CheckCast(p1);
}

#include "CommandOrigin.h"
static int vti_CommandOrigin_getName;
mcpe::string CommandOrigin::getName() {
    union { void* voidp; mcpe::string (CommandOrigin::*funcp)(); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_CommandOrigin_getName];
    return (this->*u.funcp)();
}
static int vti_CommandOrigin_getBlockPosition;
std::array<int, 3> CommandOrigin::getBlockPosition() {
    union { void* voidp; std::array<int, 3> (CommandOrigin::*funcp)(); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_CommandOrigin_getBlockPosition];
    return (this->*u.funcp)();
}
static int vti_CommandOrigin_getWorldPosition;
std::array<float, 3> CommandOrigin::getWorldPosition() {
    union { void* voidp; std::array<float, 3> (CommandOrigin::*funcp)(); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_CommandOrigin_getWorldPosition];
    return (this->*u.funcp)();
}
static int vti_CommandOrigin_clone;
std::unique_ptr<CommandOrigin> CommandOrigin::clone() {
    union { void* voidp; std::unique_ptr<CommandOrigin> (CommandOrigin::*funcp)(); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_CommandOrigin_clone];
    return (this->*u.funcp)();
}
static int vti_CommandOrigin_getOriginType;
CommandOriginType CommandOrigin::getOriginType() {
    union { void* voidp; CommandOriginType (CommandOrigin::*funcp)(); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_CommandOrigin_getOriginType];
    return (this->*u.funcp)();
}
static int vti_CommandOrigin_getEntity;
Actor * CommandOrigin::getEntity() {
    union { void* voidp; Actor * (CommandOrigin::*funcp)(); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_CommandOrigin_getEntity];
    return (this->*u.funcp)();
}
static int vti_CommandOrigin_getPermissionLevel;
unsigned char CommandOrigin::getPermissionLevel() {
    union { void* voidp; unsigned char (CommandOrigin::*funcp)(); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_CommandOrigin_getPermissionLevel];
    return (this->*u.funcp)();
}
static mce::UUID const & (CommandOrigin::*_CommandOrigin_getUUID)() const;
mce::UUID const & CommandOrigin::getUUID() const {
    return (this->*_CommandOrigin_getUUID)();
}
static void (PlayerCommandOrigin::*_PlayerCommandOrigin_PlayerCommandOrigin)(Player &);
PlayerCommandOrigin::PlayerCommandOrigin(Player & p1) {
    (this->*_PlayerCommandOrigin_PlayerCommandOrigin)(p1);
}

#include "gl.h"
static mcpe::string (*_gl_getOpenGLVendor)();
mcpe::string gl::getOpenGLVendor() {
    return _gl_getOpenGLVendor();
}
static mcpe::string (*_gl_getOpenGLRenderer)();
mcpe::string gl::getOpenGLRenderer() {
    return _gl_getOpenGLRenderer();
}
static mcpe::string (*_gl_getOpenGLVersion)();
mcpe::string gl::getOpenGLVersion() {
    return _gl_getOpenGLVersion();
}
static mcpe::string (*_gl_getOpenGLExtensions)();
mcpe::string gl::getOpenGLExtensions() {
    return _gl_getOpenGLExtensions();
}
static void (*_mce_Platform_OGL_InitBindings)();
void mce::Platform::OGL::InitBindings() {
    _mce_Platform_OGL_InitBindings();
}

#include "ScriptApi.h"
static int (MinecraftServerScriptEngine::*_MinecraftServerScriptEngine_helpDefineEntity)(Actor const &, v8::Persistent<v8::Object> &);
int MinecraftServerScriptEngine::helpDefineEntity(Actor const & p1, v8::Persistent<v8::Object> & p2) {
    return (this->*_MinecraftServerScriptEngine_helpDefineEntity)(p1, p2);
}
static int (MinecraftServerScriptEngine::*_MinecraftServerScriptEngine_helpGetActor)(v8::Persistent<v8::Object> const &, Actor * &);
int MinecraftServerScriptEngine::helpGetActor(v8::Persistent<v8::Object> const & p1, Actor * & p2) {
    return (this->*_MinecraftServerScriptEngine_helpGetActor)(p1, p2);
}
static int (MinecraftServerScriptEngine::*_MinecraftServerScriptEngine_isValidEntity)(v8::Persistent<v8::Object> const &, bool &);
int MinecraftServerScriptEngine::isValidEntity(v8::Persistent<v8::Object> const & p1, bool & p2) {
    return (this->*_MinecraftServerScriptEngine_isValidEntity)(p1, p2);
}

#include "Multitouch.h"
static void (*_Multitouch_feed)(char, char, short, short, int);
void Multitouch::feed(char p1, char p2, short p3, short p4, int p5) {
    _Multitouch_feed(p1, p2, p3, p4, p5);
}

#include "I18n.h"
static void (ResourceLoadManager::*_ResourceLoadManager_ResourceLoadManager)();
ResourceLoadManager::ResourceLoadManager() {
    (this->*_ResourceLoadManager_ResourceLoadManager)();
}
static void (ResourceLoadManager::*_ResourceLoadManager_sync)(ResourceLoadType);
void ResourceLoadManager::sync(ResourceLoadType p1) {
    (this->*_ResourceLoadManager_sync)(p1);
}
static mcpe::string (*_I18n_get)(mcpe::string const &, std::vector<mcpe::string> const &);
mcpe::string I18n::get(mcpe::string const & p1, std::vector<mcpe::string> const & p2) {
    return _I18n_get(p1, p2);
}
static void (*_I18n_chooseLanguage)(mcpe::string const &);
void I18n::chooseLanguage(mcpe::string const & p1) {
    _I18n_chooseLanguage(p1);
}
static void (*_I18n_loadLanguages)(ResourcePackManager &, ResourceLoadManager &, mcpe::string const &);
void I18n::loadLanguages(ResourcePackManager & p1, ResourceLoadManager & p2, mcpe::string const & p3) {
    _I18n_loadLanguages(p1, p2, p3);
}

#include "MultiplayerService.h"
static void (Social::MultiplayerXBL::*_Social_MultiplayerXBL_MultiplayerXBL)();
Social::MultiplayerXBL::MultiplayerXBL() {
    (this->*_Social_MultiplayerXBL_MultiplayerXBL)();
}

#include "Keyboard.h"
int * Keyboard::_states;
std::vector<int> * Keyboard::_inputCaretLocation;
static void (*_Keyboard_feed)(unsigned char, int);
void Keyboard::feed(unsigned char p1, int p2) {
    _Keyboard_feed(p1, p2);
}
static void (*_Keyboard_feedText)(mcpe::string const &, bool, unsigned char);
void Keyboard::feedText(mcpe::string const & p1, bool p2, unsigned char p3) {
    _Keyboard_feedText(p1, p2, p3);
}

#include "Whitelist.h"
static void (WhitelistEntry::*_WhitelistEntry_WhitelistEntry)(mcpe::string, mce::UUID, mcpe::string, bool);
WhitelistEntry::WhitelistEntry(mcpe::string p1, mce::UUID p2, mcpe::string p3, bool p4) {
    (this->*_WhitelistEntry_WhitelistEntry)(p1, p2, p3, p4);
}
static void (Whitelist::*_Whitelist_Whitelist)(mcpe::function<void ( )>);
Whitelist::Whitelist(mcpe::function<void ( )> p1) {
    (this->*_Whitelist_Whitelist)(p1);
}
static void (Whitelist::*_Whitelist_deserialize)(Json::Value &);
void Whitelist::deserialize(Json::Value & p1) {
    (this->*_Whitelist_deserialize)(p1);
}
static void (Whitelist::*_Whitelist_serialize)(Json::Value &);
void Whitelist::serialize(Json::Value & p1) {
    (this->*_Whitelist_serialize)(p1);
}
static void (Whitelist::*_Whitelist_removeByName)(mcpe::string const &);
void Whitelist::removeByName(mcpe::string const & p1) {
    (this->*_Whitelist_removeByName)(p1);
}

#include "MinecraftEventing.h"
static void (MinecraftEventing::*_MinecraftEventing_MinecraftEventing)(mcpe::string const &);
MinecraftEventing::MinecraftEventing(mcpe::string const & p1) {
    (this->*_MinecraftEventing_MinecraftEventing)(p1);
}
static void (MinecraftEventing::*_MinecraftEventing_init)();
void MinecraftEventing::init() {
    (this->*_MinecraftEventing_init)();
}

#include "TextPacket.h"
static void (TextPacket::*_TextPacket_TextPacket)(TextPacketType, mcpe::string const &, mcpe::string const &, std::vector<mcpe::string> const &, bool, mcpe::string const &, mcpe::string const &);
TextPacket::TextPacket(TextPacketType p1, mcpe::string const & p2, mcpe::string const & p3, std::vector<mcpe::string> const & p4, bool p5, mcpe::string const & p6, mcpe::string const & p7) {
    (this->*_TextPacket_TextPacket)(p1, p2, p3, p4, p5, p6, p7);
}
static TextPacket (*_TextPacket_createRaw)(mcpe::string const &);
TextPacket TextPacket::createRaw(mcpe::string const & p1) {
    return _TextPacket_createRaw(p1);
}
static TextPacket (*_TextPacket_createJukeboxPopup)(mcpe::string const &);
TextPacket TextPacket::createJukeboxPopup(mcpe::string const & p1) {
    return _TextPacket_createJukeboxPopup(p1);
}
static TextPacket (*_TextPacket_createSystemMessage)(mcpe::string const &);
TextPacket TextPacket::createSystemMessage(mcpe::string const & p1) {
    return _TextPacket_createSystemMessage(p1);
}
static TextPacket (*_TextPacket_createChat)(mcpe::string const &, mcpe::string const &, mcpe::string const &, mcpe::string const &);
TextPacket TextPacket::createChat(mcpe::string const & p1, mcpe::string const & p2, mcpe::string const & p3, mcpe::string const & p4) {
    return _TextPacket_createChat(p1, p2, p3, p4);
}
static TextPacket (*_TextPacket_createTranslatedChat)(mcpe::string const &, mcpe::string const &, mcpe::string const &, mcpe::string const &);
TextPacket TextPacket::createTranslatedChat(mcpe::string const & p1, mcpe::string const & p2, mcpe::string const & p3, mcpe::string const & p4) {
    return _TextPacket_createTranslatedChat(p1, p2, p3, p4);
}
static TextPacket (*_TextPacket_createTranslatedAnnouncement)(mcpe::string const &, mcpe::string const &, mcpe::string const &, mcpe::string const &);
TextPacket TextPacket::createTranslatedAnnouncement(mcpe::string const & p1, mcpe::string const & p2, mcpe::string const & p3, mcpe::string const & p4) {
    return _TextPacket_createTranslatedAnnouncement(p1, p2, p3, p4);
}
static TextPacket (*_TextPacket_createWhisper)(mcpe::string const &, mcpe::string const &, mcpe::string const &, mcpe::string const &);
TextPacket TextPacket::createWhisper(mcpe::string const & p1, mcpe::string const & p2, mcpe::string const & p3, mcpe::string const & p4) {
    return _TextPacket_createWhisper(p1, p2, p3, p4);
}
static TextPacket (*_TextPacket_createTranslated)(mcpe::string const &, std::vector<mcpe::string> const &);
TextPacket TextPacket::createTranslated(mcpe::string const & p1, std::vector<mcpe::string> const & p2) {
    return _TextPacket_createTranslated(p1, p2);
}

#include "GameControllerManager.h"
GameControllerManager * GameControllerManager::sGamePadManager;
static void (GameControllerManager::*_GameControllerManager_setGameControllerConnected)(int, bool);
void GameControllerManager::setGameControllerConnected(int p1, bool p2) {
    (this->*_GameControllerManager_setGameControllerConnected)(p1, p2);
}
static void (GameControllerManager::*_GameControllerManager_feedButton)(int, int, GameControllerButtonState, bool);
void GameControllerManager::feedButton(int p1, int p2, GameControllerButtonState p3, bool p4) {
    (this->*_GameControllerManager_feedButton)(p1, p2, p3, p4);
}
static void (GameControllerManager::*_GameControllerManager_feedStick)(int, int, GameControllerStickState, float, float);
void GameControllerManager::feedStick(int p1, int p2, GameControllerStickState p3, float p4, float p5) {
    (this->*_GameControllerManager_feedStick)(p1, p2, p3, p4, p5);
}
static void (GameControllerManager::*_GameControllerManager_feedTrigger)(int, int, float);
void GameControllerManager::feedTrigger(int p1, int p2, float p3) {
    (this->*_GameControllerManager_feedTrigger)(p1, p2, p3);
}
static void (GameControllerManager::*_GameControllerManager_feedJoinGame)(int, bool);
void GameControllerManager::feedJoinGame(int p1, bool p2) {
    (this->*_GameControllerManager_feedJoinGame)(p1, p2);
}

#include "CommandMessage.h"
CDT CommandMessage::constructor;
CDT CommandMessage::destructor;
typeid_t<CommandRegistry> * CommandMessage::tid;
Parser CommandMessage::parser;
static mcpe::string (CommandMessage::*_CommandMessage_getMessage)(CommandOrigin const &) const;
mcpe::string CommandMessage::getMessage(CommandOrigin const & p1) const {
    return (this->*_CommandMessage_getMessage)(p1);
}

#include "Player.h"
static mcpe::string * (Player::*_Player_getPlatformOnlineId)() const;
mcpe::string * Player::getPlatformOnlineId() const {
    return (this->*_Player_getPlatformOnlineId)();
}
static Certificate * (Player::*_Player_getCertificate)() const;
Certificate * Player::getCertificate() const {
    return (this->*_Player_getCertificate)();
}
static std::tuple<float, float, float> & (Player::*_Player_getPos)() const;
std::tuple<float, float, float> & Player::getPos() const {
    return (this->*_Player_getPos)();
}
static std::pair<float, float> (Player::*_Player_getRotation)() const;
std::pair<float, float> Player::getRotation() const {
    return (this->*_Player_getRotation)();
}
static bool (Player::*_Player_isCreative)();
bool Player::isCreative() {
    return (this->*_Player_isCreative)();
}
static float (Player::*_Player_getLevelProgress)() const;
float Player::getLevelProgress() const {
    return (this->*_Player_getLevelProgress)();
}
static void (Player::*_Player_sendNetworkPacket)(Packet &) const;
void Player::sendNetworkPacket(Packet & p1) const {
    (this->*_Player_sendNetworkPacket)(p1);
}
static bool (Player::*_Player_canUseAbility)(mcpe::string const &);
bool Player::canUseAbility(mcpe::string const & p1) {
    return (this->*_Player_canUseAbility)(p1);
}

#include "Actor.h"
static mcpe::string (ActorDefinitionIdentifier::*_ActorDefinitionIdentifier_getCanonicalName)() const;
mcpe::string ActorDefinitionIdentifier::getCanonicalName() const {
    return (this->*_ActorDefinitionIdentifier_getCanonicalName)();
}
static ActorDefinitionIdentifier & (Actor::*_Actor_getActorIdentifier)() const;
ActorDefinitionIdentifier & Actor::getActorIdentifier() const {
    return (this->*_Actor_getActorIdentifier)();
}
static int64_t & (Actor::*_Actor_getUniqueID)() const;
int64_t & Actor::getUniqueID() const {
    return (this->*_Actor_getUniqueID)();
}

#include "legacy/App.h"
static int vti_Legacy_Pre_1_8_App_quit;
void Legacy::Pre_1_8::App::quit() {
    union { void* voidp; void (Legacy::Pre_1_8::App::*funcp)(); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_Legacy_Pre_1_8_App_quit];
    (this->*u.funcp)();
}

#include "legacy/MinecraftGame.h"
static void (Legacy::Pre_1_2_10::MinecraftGame::*_Legacy_Pre_1_2_10_MinecraftGame_setTextboxText)(mcpe::string const &);
void Legacy::Pre_1_2_10::MinecraftGame::setTextboxText(mcpe::string const & p1) {
    (this->*_Legacy_Pre_1_2_10_MinecraftGame_setTextboxText)(p1);
}

#include "legacy/AppPlatform.h"
static void (Legacy::Pre_1_2_10::AppPlatform::*_Legacy_Pre_1_2_10_AppPlatform_showKeyboard)(mcpe::string const &, int, bool, bool, bool, Vec2 const &);
void Legacy::Pre_1_2_10::AppPlatform::showKeyboard(mcpe::string const & p1, int p2, bool p3, bool p4, bool p5, Vec2 const & p6) {
    (this->*_Legacy_Pre_1_2_10_AppPlatform_showKeyboard)(p1, p2, p3, p4, p5, p6);
}

#include "legacy/Xbox.h"
static int vti_Legacy_Beta_1_8_xbox_services_local_config_get_value_from_local_storage;
mcpe::string Legacy::Beta_1_8::xbox::services::local_config::get_value_from_local_storage(mcpe::string const & p1, mcpe::string const & p2, mcpe::string const & p3) {
    union { void* voidp; mcpe::string (Legacy::Beta_1_8::xbox::services::local_config::*funcp)(mcpe::string const &, mcpe::string const &, mcpe::string const &); } u;
    u.funcp = nullptr;
    u.voidp = vtable[vti_Legacy_Beta_1_8_xbox_services_local_config_get_value_from_local_storage];
    return (this->*u.funcp)(p1, p2, p3);
}

static int resolve_vtable_func(void** vtable, void* what) {
    if (vtable - 2 == nullptr)
        return -1;
    for (int i = 0; ; i++) {
        if (vtable[i] == nullptr)
            return -1;
        if (vtable[i] == what)
            return i;
    }
}
void minecraft_symbols_init(void* handle) {
    ((void*&) _MinecraftCommands_setOutputSender) = hybris_dlsym(handle, "_ZN17MinecraftCommands15setOutputSenderESt10unique_ptrI19CommandOutputSenderSt14default_deleteIS1_EE");
    if (_MinecraftCommands_setOutputSender == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN17MinecraftCommands15setOutputSenderESt10unique_ptrI19CommandOutputSenderSt14default_deleteIS1_EE");
    ((void*&) _MinecraftCommands_requestCommandExecution) = hybris_dlsym(handle, "_ZNK17MinecraftCommands23requestCommandExecutionESt10unique_ptrI13CommandOriginSt14default_deleteIS1_EERKSsib");
    if (_MinecraftCommands_requestCommandExecution == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK17MinecraftCommands23requestCommandExecutionESt10unique_ptrI13CommandOriginSt14default_deleteIS1_EERKSsib");
    ((void*&) _MinecraftCommands_getRegistry) = hybris_dlsym(handle, "_ZN17MinecraftCommands11getRegistryEv");
    if (_MinecraftCommands_getRegistry == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN17MinecraftCommands11getRegistryEv");
    ((void*&) _CommandRegistry_getAutoCompleteOptions) = hybris_dlsym(handle, "_ZNK15CommandRegistry22getAutoCompleteOptionsERK13CommandOriginRKSsj");
    if (_CommandRegistry_getAutoCompleteOptions == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK15CommandRegistry22getAutoCompleteOptionsERK13CommandOriginRKSsj");
    ((void*&) _CommandRegistry_findCommand) = hybris_dlsym(handle, "_ZN15CommandRegistry11findCommandERKSs");
    if (_CommandRegistry_findCommand == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15CommandRegistry11findCommandERKSs");
    ((void*&) _CommandRegistry_registerOverloadInternal) = hybris_dlsym(handle, "_ZN15CommandRegistry24registerOverloadInternalERNS_9SignatureERNS_8OverloadE");
    if (_CommandRegistry_registerOverloadInternal == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15CommandRegistry24registerOverloadInternalERNS_9SignatureERNS_8OverloadE");
    ((void*&) _CommandRegistry_registerCommand) = hybris_dlsym(handle, "_ZN15CommandRegistry15registerCommandERKSsPKc22CommandPermissionLevel11CommandFlagS5_");
    if (_CommandRegistry_registerCommand == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15CommandRegistry15registerCommandERKSsPKc22CommandPermissionLevel11CommandFlagS5_");
    ((void*&) _CommandRegistry_buildOverload) = hybris_dlsym(handle, "_ZN15CommandRegistry13buildOverloadERNS_8OverloadE");
    if (_CommandRegistry_buildOverload == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15CommandRegistry13buildOverloadERNS_8OverloadE");
    ((void*&) _CommandParameterData_CommandParameterData) = hybris_dlsym(handle, "_ZN20CommandParameterDataC2E8typeid_tI15CommandRegistryEMS1_KFbPvRKNS1_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEEEPKc24CommandParameterDataTypeSI_ibi");
    if (_CommandParameterData_CommandParameterData == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN20CommandParameterDataC2E8typeid_tI15CommandRegistryEMS1_KFbPvRKNS1_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEEEPKc24CommandParameterDataTypeSI_ibi");
    ((void*&) _CommandParameterData_CommandParameterData2) = hybris_dlsym(handle, "_ZN20CommandParameterDataC2ERKS_");
    if (_CommandParameterData_CommandParameterData2 == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN20CommandParameterDataC2ERKS_");
    ((void*&) _MessagingCommand_checkChatPermissions) = hybris_dlsym(handle, "_ZNK16MessagingCommand20checkChatPermissionsERK13CommandOriginR13CommandOutput");
    if (_MessagingCommand_checkChatPermissions == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK16MessagingCommand20checkChatPermissionsERK13CommandOriginR13CommandOutput");
    ((void*&) _CommandOutput_getMessages) = hybris_dlsym(handle, "_ZNK13CommandOutput11getMessagesEv");
    if (_CommandOutput_getMessages == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK13CommandOutput11getMessagesEv");
    ((void*&) _CommandOutput_addMessage) = hybris_dlsym(handle, "_ZN13CommandOutput10addMessageERKSsRKSt6vectorI22CommandOutputParameterSaIS3_EE24CommandOutputMessageType");
    if (_CommandOutput_addMessage == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13CommandOutput10addMessageERKSsRKSt6vectorI22CommandOutputParameterSaIS3_EE24CommandOutputMessageType");
    ((void*&) _CommandOutput_success) = hybris_dlsym(handle, "_ZN13CommandOutput7successEv");
    if (_CommandOutput_success == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13CommandOutput7successEv");
    ((void*&) _CommandOutputParameter_CommandOutputParameter) = hybris_dlsym(handle, "_ZN22CommandOutputParameterC2ERKSs");
    if (_CommandOutputParameter_CommandOutputParameter == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN22CommandOutputParameterC2ERKSs");
    ((void*&) _CommandOutputParameter_CommandOutputParameter2) = hybris_dlsym(handle, "_ZN22CommandOutputParameterC2Ei");
    if (_CommandOutputParameter_CommandOutputParameter2 == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN22CommandOutputParameterC2Ei");
    ((void*&) _Common_getGameVersionStringNet) = hybris_dlsym(handle, "_ZN6Common23getGameVersionStringNetEv");
    if (_Common_getGameVersionStringNet == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN6Common23getGameVersionStringNetEv");
    ((void*&) _NetworkIdentifier_getHash) = hybris_dlsym(handle, "_ZNK17NetworkIdentifier7getHashEv");
    if (_NetworkIdentifier_getHash == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK17NetworkIdentifier7getHashEv");
    ((void*&) _NetworkIdentifier_equalsTypeData) = hybris_dlsym(handle, "_ZNK17NetworkIdentifier14equalsTypeDataERKS_");
    if (_NetworkIdentifier_equalsTypeData == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK17NetworkIdentifier14equalsTypeDataERKS_");
    ((void*&) _Options_getFullscreen) = hybris_dlsym(handle, "_ZNK7Options13getFullscreenEv");
    if (_Options_getFullscreen == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK7Options13getFullscreenEv");
    ((void*&) _Options_setFullscreen) = hybris_dlsym(handle, "_ZN7Options13setFullscreenEb");
    if (_Options_setFullscreen == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN7Options13setFullscreenEb");
    ((void*&) _AutomationPlayerCommandOrigin_AutomationPlayerCommandOrigin) = hybris_dlsym(handle, "_ZN29AutomationPlayerCommandOriginC2ERKSsR6Player");
    if (_AutomationPlayerCommandOrigin_AutomationPlayerCommandOrigin == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN29AutomationPlayerCommandOriginC2ERKSsR6Player");
    ((void*&) _Json_Reader_Reader) = hybris_dlsym(handle, "_ZN4Json6ReaderC2Ev");
    if (_Json_Reader_Reader == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4Json6ReaderC2Ev");
    ((void*&) _Json_Reader_parse) = hybris_dlsym(handle, "_ZN4Json6Reader5parseERSiRNS_5ValueEb");
    if (_Json_Reader_parse == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4Json6Reader5parseERSiRNS_5ValueEb");
    ((void*&) _Json_StyledWriter_StyledWriter) = hybris_dlsym(handle, "_ZN4Json12StyledWriterC2Ev");
    if (_Json_StyledWriter_StyledWriter == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4Json12StyledWriterC2Ev");
    ((void*&) _Json_StyledWriter_destructor) = hybris_dlsym(handle, "_ZN4Json12StyledWriterD2Ev");
    if (_Json_StyledWriter_destructor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4Json12StyledWriterD2Ev");
    ((void*&) _Json_StyledWriter_write) = hybris_dlsym(handle, "_ZN4Json12StyledWriter5writeERKNS_5ValueE");
    if (_Json_StyledWriter_write == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4Json12StyledWriter5writeERKNS_5ValueE");
    ((void*&) _Json_FastWriter_FastWriter) = hybris_dlsym(handle, "_ZN4Json10FastWriterC2Ev");
    if (_Json_FastWriter_FastWriter == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4Json10FastWriterC2Ev");
    ((void*&) _Json_FastWriter_destructor) = hybris_dlsym(handle, "_ZN4Json10FastWriterD2Ev");
    if (_Json_FastWriter_destructor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4Json10FastWriterD2Ev");
    ((void*&) _Json_FastWriter_write) = hybris_dlsym(handle, "_ZN4Json10FastWriter5writeERKNS_5ValueE");
    if (_Json_FastWriter_write == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4Json10FastWriter5writeERKNS_5ValueE");
    ((void*&) _Json_Value_Value) = hybris_dlsym(handle, "_ZN4Json5ValueC2ENS_9ValueTypeE");
    if (_Json_Value_Value == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4Json5ValueC2ENS_9ValueTypeE");
    ((void*&) ContentIdentity::EMPTY) = hybris_dlsym(handle, "_ZN15ContentIdentity5EMPTYE");
    if (ContentIdentity::EMPTY == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15ContentIdentity5EMPTYE");
    ((void*&) _DedicatedServerCommandOrigin_DedicatedServerCommandOrigin) = hybris_dlsym(handle, "_ZN28DedicatedServerCommandOriginC2ERKSsR9Minecraft");
    if (_DedicatedServerCommandOrigin_DedicatedServerCommandOrigin == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN28DedicatedServerCommandOriginC2ERKSsR9Minecraft");
    ((void*&) _App_init) = hybris_dlsym(handle, "_ZN3App4initER10AppContext");
    if (_App_init == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN3App4initER10AppContext");
    void** vt_App = (void**) hybris_dlsym(handle, "_ZTV3App") + 2;
    vti_App_quit = resolve_vtable_func(vt_App, hybris_dlsym(handle, "_ZN3App4quitERKSsS1_"));
    if (vti_App_quit == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZN3App4quitERKSsS1_");
    vti_App_wantToQuit = resolve_vtable_func(vt_App, hybris_dlsym(handle, "_ZN3App10wantToQuitEv"));
    if (vti_App_wantToQuit == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZN3App10wantToQuitEv");
    ((void*&) _PermissionsFile_PermissionsFile) = hybris_dlsym(handle, "_ZN15PermissionsFileC2ERKSs");
    if (_PermissionsFile_PermissionsFile == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15PermissionsFileC2ERKSs");
    ((void*&) SharedConstants::MajorVersion) = hybris_dlsym(handle, "_ZN15SharedConstants12MajorVersionE");
    if (SharedConstants::MajorVersion == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15SharedConstants12MajorVersionE");
    ((void*&) SharedConstants::MinorVersion) = hybris_dlsym(handle, "_ZN15SharedConstants12MinorVersionE");
    if (SharedConstants::MinorVersion == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15SharedConstants12MinorVersionE");
    ((void*&) SharedConstants::PatchVersion) = hybris_dlsym(handle, "_ZN15SharedConstants12PatchVersionE");
    if (SharedConstants::PatchVersion == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15SharedConstants12PatchVersionE");
    ((void*&) SharedConstants::RevisionVersion) = hybris_dlsym(handle, "_ZN15SharedConstants15RevisionVersionE");
    if (SharedConstants::RevisionVersion == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15SharedConstants15RevisionVersionE");
    ((void*&) _ResourceLoaders_registerLoader) = hybris_dlsym(handle, "_ZN15ResourceLoaders14registerLoaderE18ResourceFileSystemSt10unique_ptrI14ResourceLoaderSt14default_deleteIS2_EE");
    if (_ResourceLoaders_registerLoader == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15ResourceLoaders14registerLoaderE18ResourceFileSystemSt10unique_ptrI14ResourceLoaderSt14default_deleteIS2_EE");
    ((void*&) _Mouse_feed) = hybris_dlsym(handle, "_ZN5Mouse4feedEccssss");
    if (_Mouse_feed == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN5Mouse4feedEccssss");
    ((void*&) _MinecraftGame_MinecraftGame) = hybris_dlsym(handle, "_ZN13MinecraftGameC2EiPPc");
    if (_MinecraftGame_MinecraftGame == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGameC2EiPPc");
    ((void*&) _MinecraftGame_destructor) = hybris_dlsym(handle, "_ZN13MinecraftGameD2Ev");
    if (_MinecraftGame_destructor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGameD2Ev");
    ((void*&) _MinecraftGame_isInGame) = hybris_dlsym(handle, "_ZNK13MinecraftGame8isInGameEv");
    if (_MinecraftGame_isInGame == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK13MinecraftGame8isInGameEv");
    ((void*&) _MinecraftGame_requestLeaveGame) = hybris_dlsym(handle, "_ZN13MinecraftGame16requestLeaveGameEbb");
    if (_MinecraftGame_requestLeaveGame == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGame16requestLeaveGameEbb");
    ((void*&) _MinecraftGame_update) = hybris_dlsym(handle, "_ZN13MinecraftGame6updateEv");
    if (_MinecraftGame_update == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGame6updateEv");
    ((void*&) _MinecraftGame_setRenderingSize) = hybris_dlsym(handle, "_ZN13MinecraftGame16setRenderingSizeEii");
    if (_MinecraftGame_setRenderingSize == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGame16setRenderingSizeEii");
    ((void*&) _MinecraftGame_setUISizeAndScale) = hybris_dlsym(handle, "_ZN13MinecraftGame17setUISizeAndScaleEiif");
    if (_MinecraftGame_setUISizeAndScale == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGame17setUISizeAndScaleEiif");
    ((void*&) _MinecraftGame_getPrimaryUserOptions) = hybris_dlsym(handle, "_ZN13MinecraftGame21getPrimaryUserOptionsEv");
    if (_MinecraftGame_getPrimaryUserOptions == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGame21getPrimaryUserOptionsEv");
    ((void*&) _MinecraftGame_getPrimaryClientInstance) = hybris_dlsym(handle, "_ZN13MinecraftGame24getPrimaryClientInstanceEv");
    if (_MinecraftGame_getPrimaryClientInstance == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGame24getPrimaryClientInstanceEv");
    ((void*&) _MinecraftGame_startLeaveGame) = hybris_dlsym(handle, "_ZN13MinecraftGame14startLeaveGameEv");
    if (_MinecraftGame_startLeaveGame == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGame14startLeaveGameEv");
    ((void*&) _MinecraftGame_continueLeaveGame) = hybris_dlsym(handle, "_ZN13MinecraftGame17continueLeaveGameEv");
    if (_MinecraftGame_continueLeaveGame == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGame17continueLeaveGameEv");
    ((void*&) _MinecraftGame_setTextboxText) = hybris_dlsym(handle, "_ZN13MinecraftGame14setTextboxTextERKSsi");
    if (_MinecraftGame_setTextboxText == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13MinecraftGame14setTextboxTextERKSsi");
    ((void*&) _Level_createRandomSeed) = hybris_dlsym(handle, "_ZN5Level16createRandomSeedEv");
    if (_Level_createRandomSeed == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN5Level16createRandomSeedEv");
    ((void*&) _Level__getServerLevelEventCoordinator) = hybris_dlsym(handle, "_ZN5Level31_getServerLevelEventCoordinatorEv");
    if (_Level__getServerLevelEventCoordinator == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN5Level31_getServerLevelEventCoordinatorEv");
    ((void*&) _Level__setServerLevelEventCoordinator) = hybris_dlsym(handle, "_ZN5Level31_setServerLevelEventCoordinatorEOSt10unique_ptrI27ServerLevelEventCoordinatorSt14default_deleteIS1_EE");
    if (_Level__setServerLevelEventCoordinator == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN5Level31_setServerLevelEventCoordinatorEOSt10unique_ptrI27ServerLevelEventCoordinatorSt14default_deleteIS1_EE");
    ((void*&) _AppResourceLoader_AppResourceLoader) = hybris_dlsym(handle, "_ZN17AppResourceLoaderC2ESt8functionIFSsvEE");
    if (_AppResourceLoader_AppResourceLoader == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN17AppResourceLoaderC2ESt8functionIFSsvEE");
    ((void*&) _EducationOptions_EducationOptions) = hybris_dlsym(handle, "_ZN16EducationOptionsC2EP19ResourcePackManager");
    if (_EducationOptions_EducationOptions == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN16EducationOptionsC2EP19ResourcePackManager");
    ((void*&) _ServerInstance_ServerInstance) = hybris_dlsym(handle, "_ZN14ServerInstanceC2ER13IMinecraftAppR30ServerInstanceEventCoordinator");
    if (_ServerInstance_ServerInstance == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ServerInstanceC2ER13IMinecraftAppR30ServerInstanceEventCoordinator");
    ((void*&) _ServerInstance_initializeServer) = hybris_dlsym(handle, "_ZN14ServerInstance16initializeServerER13IMinecraftAppR9WhitelistP15PermissionsFileP15FilePathManagerNSt6chrono8durationIxSt5ratioILx1ELx1EEEESsSsSs13LevelSettingsibiiibRKSt6vectorISsSaISsEESsRKN3mce4UUIDER18IMinecraftEventingR22ResourcePackRepositoryRK18ContentTierManagerR19ResourcePackManagerSt8functionIFSt10unique_ptrI12LevelStorageSt14default_deleteISY_EER9SchedulerEERKSsP9LevelDataSsSsSX_I16EducationOptionsSZ_IS1A_EEPSU_SW_IFvS17_EES1F_");
    if (_ServerInstance_initializeServer == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ServerInstance16initializeServerER13IMinecraftAppR9WhitelistP15PermissionsFileP15FilePathManagerNSt6chrono8durationIxSt5ratioILx1ELx1EEEESsSsSs13LevelSettingsibiiibRKSt6vectorISsSaISsEESsRKN3mce4UUIDER18IMinecraftEventingR22ResourcePackRepositoryRK18ContentTierManagerR19ResourcePackManagerSt8functionIFSt10unique_ptrI12LevelStorageSt14default_deleteISY_EER9SchedulerEERKSsP9LevelDataSsSsSX_I16EducationOptionsSZ_IS1A_EEPSU_SW_IFvS17_EES1F_");
    ((void*&) _ServerInstance_destructor) = hybris_dlsym(handle, "_ZN14ServerInstanceD2Ev");
    if (_ServerInstance_destructor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ServerInstanceD2Ev");
    ((void*&) _ServerInstance_startServerThread) = hybris_dlsym(handle, "_ZN14ServerInstance17startServerThreadEv");
    if (_ServerInstance_startServerThread == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ServerInstance17startServerThreadEv");
    ((void*&) _ServerInstance_leaveGameSync) = hybris_dlsym(handle, "_ZN14ServerInstance13leaveGameSyncEv");
    if (_ServerInstance_leaveGameSync == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ServerInstance13leaveGameSyncEv");
    ((void*&) _ServerInstance_queueForServerThread) = hybris_dlsym(handle, "_ZN14ServerInstance20queueForServerThreadESt8functionIFvvEE");
    if (_ServerInstance_queueForServerThread == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ServerInstance20queueForServerThreadESt8functionIFvvEE");
    ((void*&) _CommandOutputSender_translate) = hybris_dlsym(handle, "_ZN19CommandOutputSender9translateERKSt6vectorISsSaISsEE");
    if (_CommandOutputSender_translate == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19CommandOutputSender9translateERKSt6vectorISsSaISsEE");
    ((void*&) _CommandOutputSender_CommandOutputSender) = hybris_dlsym(handle, "_ZN19CommandOutputSenderC2ERN10Automation16AutomationClientE");
    if (_CommandOutputSender_CommandOutputSender == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19CommandOutputSenderC2ERN10Automation16AutomationClientE");
    ((void*&) _CommandOutputSender_destructor) = hybris_dlsym(handle, "_ZN19CommandOutputSenderD2Ev");
    if (_CommandOutputSender_destructor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19CommandOutputSenderD2Ev");
    ((void*&) _CommandOutputSender_send) = hybris_dlsym(handle, "_ZN19CommandOutputSender4sendERK13CommandOriginRK13CommandOutput");
    if (_CommandOutputSender_send == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19CommandOutputSender4sendERK13CommandOriginRK13CommandOutput");
    ((void*&) _CommandOutputSender_registerOutputCallback) = hybris_dlsym(handle, "_ZN19CommandOutputSender22registerOutputCallbackERKSt8functionIFvR19AutomationCmdOutputEE");
    if (_CommandOutputSender_registerOutputCallback == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19CommandOutputSender22registerOutputCallbackERKSt8functionIFvR19AutomationCmdOutputEE");
    void** vt_LocalNetworkPeer = (void**) hybris_dlsym(handle, "_ZTV16LocalNetworkPeer") + 2;
    vti_NetworkPeer_getNetworkStatus = resolve_vtable_func(vt_LocalNetworkPeer, hybris_dlsym(handle, "_ZN16LocalNetworkPeer16getNetworkStatusEv"));
    if (vti_NetworkPeer_getNetworkStatus == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZN16LocalNetworkPeer16getNetworkStatusEv");
    ((void*&) _ServerNetworkHandler_addToBlacklist) = hybris_dlsym(handle, "_ZN20ServerNetworkHandler14addToBlacklistERKN3mce4UUIDERKSs");
    if (_ServerNetworkHandler_addToBlacklist == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN20ServerNetworkHandler14addToBlacklistERKN3mce4UUIDERKSs");
    ((void*&) _ServerNetworkHandler_addToBlacklist2) = hybris_dlsym(handle, "_ZN20ServerNetworkHandler14addToBlacklistERKN3mce4UUIDERKSsS5_RKN9Blacklist8DurationE");
    if (_ServerNetworkHandler_addToBlacklist2 == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN20ServerNetworkHandler14addToBlacklistERKN3mce4UUIDERKSsS5_RKN9Blacklist8DurationE");
    ((void*&) _ServerNetworkHandler_removeFromBlacklist) = hybris_dlsym(handle, "_ZN20ServerNetworkHandler19removeFromBlacklistERKN3mce4UUIDERKSs");
    if (_ServerNetworkHandler_removeFromBlacklist == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN20ServerNetworkHandler19removeFromBlacklistERKN3mce4UUIDERKSs");
    ((void*&) _ServerNetworkHandler_disconnectClient) = hybris_dlsym(handle, "_ZN20ServerNetworkHandler16disconnectClientERK17NetworkIdentifierRKSsb");
    if (_ServerNetworkHandler_disconnectClient == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN20ServerNetworkHandler16disconnectClientERK17NetworkIdentifierRKSsb");
    ((void*&) _ServerNetworkHandler_getPeerForUser) = hybris_dlsym(handle, "_ZN14NetworkHandler14getPeerForUserERK17NetworkIdentifier");
    if (_ServerNetworkHandler_getPeerForUser == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14NetworkHandler14getPeerForUserERK17NetworkIdentifier");
    ((void*&) Packet::myVtable) = hybris_dlsym(handle, "_ZTV6Packet");
    if (Packet::myVtable == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZTV6Packet");
    ((void*&) AppPlatform::myVtable) = hybris_dlsym(handle, "_ZTV11AppPlatform");
    if (AppPlatform::myVtable == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZTV11AppPlatform");
    ((void*&) AppPlatform::instance) = hybris_dlsym(handle, "_ZN14ServiceLocatorI11AppPlatformE15mDefaultServiceE");
    if (AppPlatform::instance == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ServiceLocatorI11AppPlatformE15mDefaultServiceE");
    ((void*&) _AppPlatform_AppPlatform) = hybris_dlsym(handle, "_ZN11AppPlatformC2Ev");
    if (_AppPlatform_AppPlatform == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN11AppPlatformC2Ev");
    ((void*&) _AppPlatform__fireAppFocusGained) = hybris_dlsym(handle, "_ZN11AppPlatform19_fireAppFocusGainedEv");
    if (_AppPlatform__fireAppFocusGained == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN11AppPlatform19_fireAppFocusGainedEv");
    ((void*&) _AppPlatform_initialize) = hybris_dlsym(handle, "_ZN11AppPlatform10initializeEv");
    if (_AppPlatform_initialize == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN11AppPlatform10initializeEv");
    ((void*&) _AppPlatform_teardown) = hybris_dlsym(handle, "_ZN11AppPlatform8teardownEv");
    if (_AppPlatform_teardown == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN11AppPlatform8teardownEv");
    ((void*&) _AppPlatform_showKeyboard) = hybris_dlsym(handle, "_ZN11AppPlatform12showKeyboardERKSsibbbiRK4Vec2");
    if (_AppPlatform_showKeyboard == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN11AppPlatform12showKeyboardERKSsibbbiRK4Vec2");
    ((void*&) _AppPlatform_hideKeyboard) = hybris_dlsym(handle, "_ZN11AppPlatform12hideKeyboardEv");
    if (_AppPlatform_hideKeyboard == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN11AppPlatform12hideKeyboardEv");
    ((void*&) _AppPlatform_isKeyboardVisible) = hybris_dlsym(handle, "_ZN11AppPlatform17isKeyboardVisibleEv");
    if (_AppPlatform_isKeyboardVisible == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN11AppPlatform17isKeyboardVisibleEv");
    ((void*&) _CommandSelectorBase_CommandSelectorBase) = hybris_dlsym(handle, "_ZN19CommandSelectorBaseC2Eb");
    if (_CommandSelectorBase_CommandSelectorBase == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19CommandSelectorBaseC2Eb");
    ((void*&) _CommandSelectorBase_destructor) = hybris_dlsym(handle, "_ZN19CommandSelectorBaseD2Ev");
    if (_CommandSelectorBase_destructor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19CommandSelectorBaseD2Ev");
    ((void*&) _CommandSelectorBase_newResults) = hybris_dlsym(handle, "_ZNK19CommandSelectorBase10newResultsERK13CommandOrigin");
    if (_CommandSelectorBase_newResults == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK19CommandSelectorBase10newResultsERK13CommandOrigin");
    ((void*&) CommandActorSelector::tid) = hybris_dlsym(handle, "_ZZ7type_idI15CommandRegistry15CommandSelectorI5ActorEE8typeid_tIT_EvE2id");
    if (CommandActorSelector::tid == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZZ7type_idI15CommandRegistry15CommandSelectorI5ActorEE8typeid_tIT_EvE2id");
    ((void*&) CommandActorSelector::parser) = hybris_dlsym(handle, "_ZNK15CommandRegistry5parseI15CommandSelectorI5ActorEEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    if (CommandActorSelector::parser == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK15CommandRegistry5parseI15CommandSelectorI5ActorEEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    ((void*&) CommandPlayerSelector::tid) = hybris_dlsym(handle, "_ZZ7type_idI15CommandRegistry15CommandSelectorI6PlayerEE8typeid_tIT_EvE2id");
    if (CommandPlayerSelector::tid == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZZ7type_idI15CommandRegistry15CommandSelectorI6PlayerEE8typeid_tIT_EvE2id");
    ((void*&) CommandPlayerSelector::parser) = hybris_dlsym(handle, "_ZNK15CommandRegistry5parseI15CommandSelectorI6PlayerEEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    if (CommandPlayerSelector::parser == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK15CommandRegistry5parseI15CommandSelectorI6PlayerEEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    ((void*&) _Command_destructor) = hybris_dlsym(handle, "_ZN7CommandD2Ev");
    if (_Command_destructor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN7CommandD2Ev");
    ((void*&) _Command_Command) = hybris_dlsym(handle, "_ZN7CommandC2Ev");
    if (_Command_Command == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN7CommandC2Ev");
    ((void*&) _Minecraft_getCommands) = hybris_dlsym(handle, "_ZN9Minecraft11getCommandsEv");
    if (_Minecraft_getCommands == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN9Minecraft11getCommandsEv");
    ((void*&) _Minecraft_getLevel) = hybris_dlsym(handle, "_ZNK9Minecraft8getLevelEv");
    if (_Minecraft_getLevel == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK9Minecraft8getLevelEv");
    ((void*&) _Minecraft_activateWhitelist) = hybris_dlsym(handle, "_ZN9Minecraft17activateWhitelistEv");
    if (_Minecraft_activateWhitelist == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN9Minecraft17activateWhitelistEv");
    ((void*&) _Automation_AutomationClient_AutomationClient) = hybris_dlsym(handle, "_ZN10Automation16AutomationClientC2ER13IMinecraftApp");
    if (_Automation_AutomationClient_AutomationClient == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN10Automation16AutomationClientC2ER13IMinecraftApp");
    ((void*&) _FilePathManager_FilePathManager) = hybris_dlsym(handle, "_ZN15FilePathManagerC2ESsb");
    if (_FilePathManager_FilePathManager == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15FilePathManagerC2ESsb");
    ((void*&) _FilePathManager_getRootPath) = hybris_dlsym(handle, "_ZNK15FilePathManager11getRootPathEv");
    if (_FilePathManager_getRootPath == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK15FilePathManager11getRootPathEv");
    ((void*&) _FilePathManager_getUserDataPath) = hybris_dlsym(handle, "_ZNK15FilePathManager15getUserDataPathEv");
    if (_FilePathManager_getUserDataPath == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK15FilePathManager15getUserDataPathEv");
    ((void*&) _FilePathManager_getWorldsPath) = hybris_dlsym(handle, "_ZNK15FilePathManager13getWorldsPathEv");
    if (_FilePathManager_getWorldsPath == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK15FilePathManager13getWorldsPathEv");
    ((void*&) _FilePathManager_setPackagePath) = hybris_dlsym(handle, "_ZN15FilePathManager14setPackagePathESs");
    if (_FilePathManager_setPackagePath == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15FilePathManager14setPackagePathESs");
    ((void*&) _FilePathManager_getPackagePath) = hybris_dlsym(handle, "_ZNK15FilePathManager14getPackagePathEv");
    if (_FilePathManager_getPackagePath == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK15FilePathManager14getPackagePathEv");
    ((void*&) _FilePathManager_setSettingsPath) = hybris_dlsym(handle, "_ZN15FilePathManager15setSettingsPathESs");
    if (_FilePathManager_setSettingsPath == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN15FilePathManager15setSettingsPathESs");
    ((void*&) _FilePathManager_getSettingsPath) = hybris_dlsym(handle, "_ZNK15FilePathManager15getSettingsPathEv");
    if (_FilePathManager_getSettingsPath == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK15FilePathManager15getSettingsPathEv");
    ((void*&) CommonType<mcpe::string>::tid) = hybris_dlsym(handle, "_ZZ7type_idI15CommandRegistrySsE8typeid_tIT_EvE2id");
    if (CommonType<mcpe::string>::tid == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZZ7type_idI15CommandRegistrySsE8typeid_tIT_EvE2id");
    ((void*&) CommonType<mcpe::string>::parser) = hybris_dlsym(handle, "_ZNK15CommandRegistry5parseISsEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    if (CommonType<mcpe::string>::parser == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK15CommandRegistry5parseISsEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    ((void*&) CommonType<int>::tid) = hybris_dlsym(handle, "_ZZ7type_idI15CommandRegistryiE8typeid_tIT_EvE2id");
    if (CommonType<int>::tid == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZZ7type_idI15CommandRegistryiE8typeid_tIT_EvE2id");
    ((void*&) CommonType<int>::parser) = hybris_dlsym(handle, "_ZNK15CommandRegistry5parseIiEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    if (CommonType<int>::parser == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK15CommandRegistry5parseIiEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    ((void*&) CommonType<float>::tid) = hybris_dlsym(handle, "_ZZ7type_idI15CommandRegistryfE8typeid_tIT_EvE2id");
    if (CommonType<float>::tid == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZZ7type_idI15CommandRegistryfE8typeid_tIT_EvE2id");
    ((void*&) CommonType<float>::parser) = hybris_dlsym(handle, "_ZNK15CommandRegistry5parseIfEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    if (CommonType<float>::parser == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK15CommandRegistry5parseIfEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    ((void*&) CommonType<bool>::tid) = hybris_dlsym(handle, "_ZZ7type_idI15CommandRegistrybE8typeid_tIT_EvE2id");
    if (CommonType<bool>::tid == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZZ7type_idI15CommandRegistrybE8typeid_tIT_EvE2id");
    ((void*&) CommonType<bool>::parser) = hybris_dlsym(handle, "_ZNK15CommandRegistry5parseIbEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    if (CommonType<bool>::parser == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK15CommandRegistry5parseIbEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    ((void*&) CommonType<CommandRawText>::tid) = hybris_dlsym(handle, "_ZZ7type_idI15CommandRegistry14CommandRawTextE8typeid_tIT_EvE2id");
    if (CommonType<CommandRawText>::tid == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZZ7type_idI15CommandRegistry14CommandRawTextE8typeid_tIT_EvE2id");
    ((void*&) CommonType<CommandRawText>::parser) = hybris_dlsym(handle, "_ZNK15CommandRegistry5parseI14CommandRawTextEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    if (CommonType<CommandRawText>::parser == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK15CommandRegistry5parseI14CommandRawTextEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    ((void*&) _CommandPosition_getPosition) = hybris_dlsym(handle, "_ZNK15CommandPosition11getPositionERK13CommandOrigin");
    if (_CommandPosition_getPosition == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK15CommandPosition11getPositionERK13CommandOrigin");
    ((void*&) CommonType<CommandPosition>::tid) = hybris_dlsym(handle, "_ZZ7type_idI15CommandRegistry15CommandPositionE8typeid_tIT_EvE2id");
    if (CommonType<CommandPosition>::tid == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZZ7type_idI15CommandRegistry15CommandPositionE8typeid_tIT_EvE2id");
    ((void*&) CommonType<CommandPosition>::parser) = hybris_dlsym(handle, "_ZNK15CommandRegistry5parseI15CommandPositionEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    if (CommonType<CommandPosition>::parser == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK15CommandRegistry5parseI15CommandPositionEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    ((void*&) _LevelSettings_LevelSettings) = hybris_dlsym(handle, "_ZN13LevelSettingsC2Ev");
    if (_LevelSettings_LevelSettings == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13LevelSettingsC2Ev");
    ((void*&) _LevelSettings_LevelSettings2) = hybris_dlsym(handle, "_ZN13LevelSettingsC2ERKS_");
    if (_LevelSettings_LevelSettings2 == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13LevelSettingsC2ERKS_");
    ((void*&) _LevelSettings_parseSeedString) = hybris_dlsym(handle, "_ZN13LevelSettings15parseSeedStringERKSsj");
    if (_LevelSettings_parseSeedString == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN13LevelSettings15parseSeedStringERKSsj");
    ((void*&) _SaveTransactionManager_SaveTransactionManager) = hybris_dlsym(handle, "_ZN22SaveTransactionManagerC2ESt8functionIFvbEE");
    if (_SaveTransactionManager_SaveTransactionManager == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN22SaveTransactionManagerC2ESt8functionIFvbEE");
    ((void*&) _ExtendedCertificate_getXuid) = hybris_dlsym(handle, "_ZN19ExtendedCertificate7getXuidERK11Certificate");
    if (_ExtendedCertificate_getXuid == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19ExtendedCertificate7getXuidERK11Certificate");
    ((void*&) _ClientInstance_getUser) = hybris_dlsym(handle, "_ZN14ClientInstance7getUserEv");
    if (_ClientInstance_getUser == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ClientInstance7getUserEv");
    ((void*&) _ClientInstance__startLeaveGame) = hybris_dlsym(handle, "_ZN14ClientInstance15_startLeaveGameEv");
    if (_ClientInstance__startLeaveGame == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ClientInstance15_startLeaveGameEv");
    ((void*&) _ClientInstance__syncDestroyGame) = hybris_dlsym(handle, "_ZN14ClientInstance16_syncDestroyGameEv");
    if (_ClientInstance__syncDestroyGame == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14ClientInstance16_syncDestroyGameEv");
    ((void*&) _Crypto_Random_generateUUID) = hybris_dlsym(handle, "_ZN6Crypto6Random12generateUUIDEv");
    if (_Crypto_Random_generateUUID == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN6Crypto6Random12generateUUIDEv");
    ((void*&) mce::UUID::EMPTY) = hybris_dlsym(handle, "_ZN3mce4UUID5EMPTYE");
    if (mce::UUID::EMPTY == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN3mce4UUID5EMPTYE");
    ((void*&) _mce_UUID_fromString) = hybris_dlsym(handle, "_ZN3mce4UUID10fromStringERKSs");
    if (_mce_UUID_fromString == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN3mce4UUID10fromStringERKSs");
    ((void*&) _mce_UUID_asString) = hybris_dlsym(handle, "_ZNK3mce4UUID8asStringEv");
    if (_mce_UUID_asString == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK3mce4UUID8asStringEv");
    ((void*&) TransferPacket::myVtable) = hybris_dlsym(handle, "_ZTV14TransferPacket");
    if (TransferPacket::myVtable == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZTV14TransferPacket");
    ((void*&) _PackInstance_PackInstance) = hybris_dlsym(handle, "_ZN12PackInstanceC2EP12ResourcePackibP12PackSettings");
    if (_PackInstance_PackInstance == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN12PackInstanceC2EP12ResourcePackibP12PackSettings");
    ((void*&) ResourcePackStack::vtable_sym) = hybris_dlsym(handle, "_ZTV17ResourcePackStack");
    if (ResourcePackStack::vtable_sym == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZTV17ResourcePackStack");
    ((void*&) _ResourcePackStack_add) = hybris_dlsym(handle, "_ZN17ResourcePackStack3addE12PackInstanceRK22ResourcePackRepositoryb");
    if (_ResourcePackStack_add == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN17ResourcePackStack3addE12PackInstanceRK22ResourcePackRepositoryb");
    ((void*&) _Social_UserManager_CreateUserManager) = hybris_dlsym(handle, "_ZN6Social11UserManager17CreateUserManagerEv");
    if (_Social_UserManager_CreateUserManager == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN6Social11UserManager17CreateUserManagerEv");
    ((void*&) _Scheduler_processCoroutines) = hybris_dlsym(handle, "_ZN9Scheduler17processCoroutinesENSt6chrono8durationIxSt5ratioILx1ELx1000000000EEEE");
    if (_Scheduler_processCoroutines == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN9Scheduler17processCoroutinesENSt6chrono8durationIxSt5ratioILx1ELx1000000000EEEE");
    ((void*&) _MinecraftScheduler_client) = hybris_dlsym(handle, "_ZN18MinecraftScheduler6clientEv");
    if (_MinecraftScheduler_client == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN18MinecraftScheduler6clientEv");
    ((void*&) _ExternalFileLevelStorageSource_ExternalFileLevelStorageSource) = hybris_dlsym(handle, "_ZN30ExternalFileLevelStorageSourceC2EP15FilePathManagerSt10shared_ptrI22SaveTransactionManagerE");
    if (_ExternalFileLevelStorageSource_ExternalFileLevelStorageSource == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN30ExternalFileLevelStorageSourceC2EP15FilePathManagerSt10shared_ptrI22SaveTransactionManagerE");
    ((void*&) _ExternalFileLevelStorageSource_createLevelStorage) = hybris_dlsym(handle, "_ZN30ExternalFileLevelStorageSource18createLevelStorageER9SchedulerRKSsRK15ContentIdentityRK19IContentKeyProvider");
    if (_ExternalFileLevelStorageSource_createLevelStorage == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN30ExternalFileLevelStorageSource18createLevelStorageER9SchedulerRKSsRK15ContentIdentityRK19IContentKeyProvider");
    ((void*&) _SkinPackKeyProvider_SkinPackKeyProvider) = hybris_dlsym(handle, "_ZN19SkinPackKeyProviderC2Ev");
    if (_SkinPackKeyProvider_SkinPackKeyProvider == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19SkinPackKeyProviderC2Ev");
    ((void*&) _PackManifestFactory_PackManifestFactory) = hybris_dlsym(handle, "_ZN19PackManifestFactoryC2ER14IPackTelemetry");
    if (_PackManifestFactory_PackManifestFactory == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19PackManifestFactoryC2ER14IPackTelemetry");
    ((void*&) _PackSourceFactory_PackSourceFactory) = hybris_dlsym(handle, "_ZN17PackSourceFactoryC2EP7Options");
    if (_PackSourceFactory_PackSourceFactory == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN17PackSourceFactoryC2EP7Options");
    ((void*&) _ResourcePackRepository_ResourcePackRepository) = hybris_dlsym(handle, "_ZN22ResourcePackRepositoryC2ER18IMinecraftEventingR19PackManifestFactoryR29IContentAccessibilityProviderP15FilePathManagerR17PackSourceFactoryb");
    if (_ResourcePackRepository_ResourcePackRepository == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN22ResourcePackRepositoryC2ER18IMinecraftEventingR19PackManifestFactoryR29IContentAccessibilityProviderP15FilePathManagerR17PackSourceFactoryb");
    ((void*&) _ResourcePackRepository_addWorldResourcePacks) = hybris_dlsym(handle, "_ZN22ResourcePackRepository21addWorldResourcePacksERKSs");
    if (_ResourcePackRepository_addWorldResourcePacks == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN22ResourcePackRepository21addWorldResourcePacksERKSs");
    ((void*&) _ResourcePackRepository_refreshPacks) = hybris_dlsym(handle, "_ZN22ResourcePackRepository12refreshPacksEv");
    if (_ResourcePackRepository_refreshPacks == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN22ResourcePackRepository12refreshPacksEv");
    ((void*&) _ContentTierManager_ContentTierManager) = hybris_dlsym(handle, "_ZN18ContentTierManagerC2Ev");
    if (_ContentTierManager_ContentTierManager == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN18ContentTierManagerC2Ev");
    ((void*&) _ResourcePackManager_ResourcePackManager) = hybris_dlsym(handle, "_ZN19ResourcePackManagerC2ESt8functionIFSsvEERK18ContentTierManager");
    if (_ResourcePackManager_ResourcePackManager == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19ResourcePackManagerC2ESt8functionIFSsvEERK18ContentTierManager");
    ((void*&) _ResourcePackManager_setStack) = hybris_dlsym(handle, "_ZN19ResourcePackManager8setStackESt10unique_ptrI17ResourcePackStackSt14default_deleteIS1_EE21ResourcePackStackTypeb");
    if (_ResourcePackManager_setStack == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19ResourcePackManager8setStackESt10unique_ptrI17ResourcePackStackSt14default_deleteIS1_EE21ResourcePackStackTypeb");
    ((void*&) _ResourcePackManager_onLanguageChanged) = hybris_dlsym(handle, "_ZN19ResourcePackManager17onLanguageChangedEv");
    if (_ResourcePackManager_onLanguageChanged == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19ResourcePackManager17onLanguageChangedEv");
    ((void*&) _v8_V8_Initialize) = hybris_dlsym(handle, "_ZN2v82V810InitializeEv");
    if (_v8_V8_Initialize == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v82V810InitializeEv");
    ((void*&) _v8_V8_InitializePlatform) = hybris_dlsym(handle, "_ZN2v82V818InitializePlatformEPNS_8PlatformE");
    if (_v8_V8_InitializePlatform == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v82V818InitializePlatformEPNS_8PlatformE");
    ((void*&) _v8_V8_GlobalizeReference) = hybris_dlsym(handle, "_ZN2v82V818GlobalizeReferenceEPNS_8internal7IsolateEPPNS1_6ObjectE");
    if (_v8_V8_GlobalizeReference == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v82V818GlobalizeReferenceEPNS_8internal7IsolateEPPNS1_6ObjectE");
    ((void*&) _v8_V8_CreateHandle) = hybris_dlsym(handle, "_ZN2v811HandleScope12CreateHandleEPNS_8internal7IsolateEPNS1_6ObjectE");
    if (_v8_V8_CreateHandle == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v811HandleScope12CreateHandleEPNS_8internal7IsolateEPNS1_6ObjectE");
    ((void*&) _v8_Value_IsTrue) = hybris_dlsym(handle, "_ZNK2v85Value6IsTrueEv");
    if (_v8_Value_IsTrue == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value6IsTrueEv");
    ((void*&) _v8_Value_IsFalse) = hybris_dlsym(handle, "_ZNK2v85Value7IsFalseEv");
    if (_v8_Value_IsFalse == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value7IsFalseEv");
    ((void*&) _v8_Value_IsName) = hybris_dlsym(handle, "_ZNK2v85Value6IsNameEv");
    if (_v8_Value_IsName == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value6IsNameEv");
    ((void*&) _v8_Value_IsSymbol) = hybris_dlsym(handle, "_ZNK2v85Value8IsSymbolEv");
    if (_v8_Value_IsSymbol == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value8IsSymbolEv");
    ((void*&) _v8_Value_IsFunction) = hybris_dlsym(handle, "_ZNK2v85Value10IsFunctionEv");
    if (_v8_Value_IsFunction == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value10IsFunctionEv");
    ((void*&) _v8_Value_IsArray) = hybris_dlsym(handle, "_ZNK2v85Value7IsArrayEv");
    if (_v8_Value_IsArray == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value7IsArrayEv");
    ((void*&) _v8_Value_IsObject) = hybris_dlsym(handle, "_ZNK2v85Value8IsObjectEv");
    if (_v8_Value_IsObject == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value8IsObjectEv");
    ((void*&) _v8_Value_IsBoolean) = hybris_dlsym(handle, "_ZNK2v85Value9IsBooleanEv");
    if (_v8_Value_IsBoolean == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value9IsBooleanEv");
    ((void*&) _v8_Value_IsNumber) = hybris_dlsym(handle, "_ZNK2v85Value8IsNumberEv");
    if (_v8_Value_IsNumber == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value8IsNumberEv");
    ((void*&) _v8_Value_IsExternal) = hybris_dlsym(handle, "_ZNK2v85Value10IsExternalEv");
    if (_v8_Value_IsExternal == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value10IsExternalEv");
    ((void*&) _v8_Value_IsInt32) = hybris_dlsym(handle, "_ZNK2v85Value7IsInt32Ev");
    if (_v8_Value_IsInt32 == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value7IsInt32Ev");
    ((void*&) _v8_Value_IsUint32) = hybris_dlsym(handle, "_ZNK2v85Value8IsUint32Ev");
    if (_v8_Value_IsUint32 == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value8IsUint32Ev");
    ((void*&) _v8_Value_IsDate) = hybris_dlsym(handle, "_ZNK2v85Value6IsDateEv");
    if (_v8_Value_IsDate == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value6IsDateEv");
    ((void*&) _v8_Value_IsArgumentsObject) = hybris_dlsym(handle, "_ZNK2v85Value17IsArgumentsObjectEv");
    if (_v8_Value_IsArgumentsObject == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value17IsArgumentsObjectEv");
    ((void*&) _v8_Value_IsBooleanObject) = hybris_dlsym(handle, "_ZNK2v85Value15IsBooleanObjectEv");
    if (_v8_Value_IsBooleanObject == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value15IsBooleanObjectEv");
    ((void*&) _v8_Value_IsNumberObject) = hybris_dlsym(handle, "_ZNK2v85Value14IsNumberObjectEv");
    if (_v8_Value_IsNumberObject == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value14IsNumberObjectEv");
    ((void*&) _v8_Value_IsStringObject) = hybris_dlsym(handle, "_ZNK2v85Value14IsStringObjectEv");
    if (_v8_Value_IsStringObject == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value14IsStringObjectEv");
    ((void*&) _v8_Value_IsSymbolObject) = hybris_dlsym(handle, "_ZNK2v85Value14IsSymbolObjectEv");
    if (_v8_Value_IsSymbolObject == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value14IsSymbolObjectEv");
    ((void*&) _v8_Value_IsNativeError) = hybris_dlsym(handle, "_ZNK2v85Value13IsNativeErrorEv");
    if (_v8_Value_IsNativeError == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value13IsNativeErrorEv");
    ((void*&) _v8_Value_IsRegExp) = hybris_dlsym(handle, "_ZNK2v85Value8IsRegExpEv");
    if (_v8_Value_IsRegExp == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value8IsRegExpEv");
    ((void*&) _v8_Value_IsAsyncFunction) = hybris_dlsym(handle, "_ZNK2v85Value15IsAsyncFunctionEv");
    if (_v8_Value_IsAsyncFunction == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value15IsAsyncFunctionEv");
    ((void*&) _v8_Value_IsGeneratorFunction) = hybris_dlsym(handle, "_ZNK2v85Value19IsGeneratorFunctionEv");
    if (_v8_Value_IsGeneratorFunction == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value19IsGeneratorFunctionEv");
    ((void*&) _v8_Value_IsGeneratorObject) = hybris_dlsym(handle, "_ZNK2v85Value17IsGeneratorObjectEv");
    if (_v8_Value_IsGeneratorObject == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value17IsGeneratorObjectEv");
    ((void*&) _v8_Value_IsPromise) = hybris_dlsym(handle, "_ZNK2v85Value9IsPromiseEv");
    if (_v8_Value_IsPromise == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value9IsPromiseEv");
    ((void*&) _v8_Value_IsMap) = hybris_dlsym(handle, "_ZNK2v85Value5IsMapEv");
    if (_v8_Value_IsMap == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value5IsMapEv");
    ((void*&) _v8_Value_IsSet) = hybris_dlsym(handle, "_ZNK2v85Value5IsSetEv");
    if (_v8_Value_IsSet == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value5IsSetEv");
    ((void*&) _v8_Value_IsMapIterator) = hybris_dlsym(handle, "_ZNK2v85Value13IsMapIteratorEv");
    if (_v8_Value_IsMapIterator == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value13IsMapIteratorEv");
    ((void*&) _v8_Value_IsSetIterator) = hybris_dlsym(handle, "_ZNK2v85Value13IsSetIteratorEv");
    if (_v8_Value_IsSetIterator == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value13IsSetIteratorEv");
    ((void*&) _v8_Value_IsWeakMap) = hybris_dlsym(handle, "_ZNK2v85Value9IsWeakMapEv");
    if (_v8_Value_IsWeakMap == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value9IsWeakMapEv");
    ((void*&) _v8_Value_IsWeakSet) = hybris_dlsym(handle, "_ZNK2v85Value9IsWeakSetEv");
    if (_v8_Value_IsWeakSet == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value9IsWeakSetEv");
    ((void*&) _v8_Value_IsArrayBuffer) = hybris_dlsym(handle, "_ZNK2v85Value13IsArrayBufferEv");
    if (_v8_Value_IsArrayBuffer == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value13IsArrayBufferEv");
    ((void*&) _v8_Value_IsArrayBufferView) = hybris_dlsym(handle, "_ZNK2v85Value17IsArrayBufferViewEv");
    if (_v8_Value_IsArrayBufferView == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value17IsArrayBufferViewEv");
    ((void*&) _v8_Value_IsTypedArray) = hybris_dlsym(handle, "_ZNK2v85Value12IsTypedArrayEv");
    if (_v8_Value_IsTypedArray == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value12IsTypedArrayEv");
    ((void*&) _v8_Value_IsUint8Array) = hybris_dlsym(handle, "_ZNK2v85Value12IsUint8ArrayEv");
    if (_v8_Value_IsUint8Array == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value12IsUint8ArrayEv");
    ((void*&) _v8_Value_IsUint8ClampedArray) = hybris_dlsym(handle, "_ZNK2v85Value19IsUint8ClampedArrayEv");
    if (_v8_Value_IsUint8ClampedArray == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value19IsUint8ClampedArrayEv");
    ((void*&) _v8_Value_IsInt8Array) = hybris_dlsym(handle, "_ZNK2v85Value11IsInt8ArrayEv");
    if (_v8_Value_IsInt8Array == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value11IsInt8ArrayEv");
    ((void*&) _v8_Value_IsUint16Array) = hybris_dlsym(handle, "_ZNK2v85Value13IsUint16ArrayEv");
    if (_v8_Value_IsUint16Array == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value13IsUint16ArrayEv");
    ((void*&) _v8_Value_IsInt16Array) = hybris_dlsym(handle, "_ZNK2v85Value12IsInt16ArrayEv");
    if (_v8_Value_IsInt16Array == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value12IsInt16ArrayEv");
    ((void*&) _v8_Value_IsUint32Array) = hybris_dlsym(handle, "_ZNK2v85Value13IsUint32ArrayEv");
    if (_v8_Value_IsUint32Array == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value13IsUint32ArrayEv");
    ((void*&) _v8_Value_IsInt32Array) = hybris_dlsym(handle, "_ZNK2v85Value12IsInt32ArrayEv");
    if (_v8_Value_IsInt32Array == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value12IsInt32ArrayEv");
    ((void*&) _v8_Value_IsFloat32Array) = hybris_dlsym(handle, "_ZNK2v85Value14IsFloat32ArrayEv");
    if (_v8_Value_IsFloat32Array == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value14IsFloat32ArrayEv");
    ((void*&) _v8_Value_IsFloat64Array) = hybris_dlsym(handle, "_ZNK2v85Value14IsFloat64ArrayEv");
    if (_v8_Value_IsFloat64Array == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value14IsFloat64ArrayEv");
    ((void*&) _v8_Value_IsDataView) = hybris_dlsym(handle, "_ZNK2v85Value10IsDataViewEv");
    if (_v8_Value_IsDataView == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value10IsDataViewEv");
    ((void*&) _v8_Value_IsSharedArrayBuffer) = hybris_dlsym(handle, "_ZNK2v85Value19IsSharedArrayBufferEv");
    if (_v8_Value_IsSharedArrayBuffer == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value19IsSharedArrayBufferEv");
    ((void*&) _v8_Value_IsProxy) = hybris_dlsym(handle, "_ZNK2v85Value7IsProxyEv");
    if (_v8_Value_IsProxy == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value7IsProxyEv");
    ((void*&) _v8_Value_IsWebAssemblyCompiledModule) = hybris_dlsym(handle, "_ZNK2v85Value27IsWebAssemblyCompiledModuleEv");
    if (_v8_Value_IsWebAssemblyCompiledModule == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value27IsWebAssemblyCompiledModuleEv");
    ((void*&) _v8_Value_ToBoolean) = hybris_dlsym(handle, "_ZNK2v85Value9ToBooleanEPNS_7IsolateE");
    if (_v8_Value_ToBoolean == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value9ToBooleanEPNS_7IsolateE");
    ((void*&) _v8_Value_ToNumber) = hybris_dlsym(handle, "_ZNK2v85Value8ToNumberEPNS_7IsolateE");
    if (_v8_Value_ToNumber == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value8ToNumberEPNS_7IsolateE");
    ((void*&) _v8_Value_ToString) = hybris_dlsym(handle, "_ZNK2v85Value8ToStringEPNS_7IsolateE");
    if (_v8_Value_ToString == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value8ToStringEPNS_7IsolateE");
    ((void*&) _v8_Value_ToObject) = hybris_dlsym(handle, "_ZNK2v85Value8ToObjectEPNS_7IsolateE");
    if (_v8_Value_ToObject == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value8ToObjectEPNS_7IsolateE");
    ((void*&) _v8_Value_ToInteger) = hybris_dlsym(handle, "_ZNK2v85Value9ToIntegerEPNS_7IsolateE");
    if (_v8_Value_ToInteger == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value9ToIntegerEPNS_7IsolateE");
    ((void*&) _v8_Value_ToInt32) = hybris_dlsym(handle, "_ZNK2v85Value7ToInt32EPNS_7IsolateE");
    if (_v8_Value_ToInt32 == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value7ToInt32EPNS_7IsolateE");
    ((void*&) _v8_Value_BooleanValue) = hybris_dlsym(handle, "_ZNK2v85Value12BooleanValueEv");
    if (_v8_Value_BooleanValue == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value12BooleanValueEv");
    ((void*&) _v8_Value_ToArrayIndex) = hybris_dlsym(handle, "_ZNK2v85Value12ToArrayIndexEv");
    if (_v8_Value_ToArrayIndex == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value12ToArrayIndexEv");
    ((void*&) _v8_Value_Equals) = hybris_dlsym(handle, "_ZNK2v85Value6EqualsENS_5LocalINS_7ContextEEENS1_IS0_EE");
    if (_v8_Value_Equals == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value6EqualsENS_5LocalINS_7ContextEEENS1_IS0_EE");
    ((void*&) _v8_Value_Equals2) = hybris_dlsym(handle, "_ZNK2v85Value6EqualsENS_5LocalIS0_EE");
    if (_v8_Value_Equals2 == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value6EqualsENS_5LocalIS0_EE");
    ((void*&) _v8_Value_StrictEquals) = hybris_dlsym(handle, "_ZNK2v85Value12StrictEqualsENS_5LocalIS0_EE");
    if (_v8_Value_StrictEquals == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value12StrictEqualsENS_5LocalIS0_EE");
    ((void*&) _v8_Value_SameValue) = hybris_dlsym(handle, "_ZNK2v85Value9SameValueENS_5LocalIS0_EE");
    if (_v8_Value_SameValue == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value9SameValueENS_5LocalIS0_EE");
    ((void*&) _v8_Value_TypeOf) = hybris_dlsym(handle, "_ZN2v85Value6TypeOfEPNS_7IsolateE");
    if (_v8_Value_TypeOf == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v85Value6TypeOfEPNS_7IsolateE");
    ((void*&) _v8_Value_FullIsNull) = hybris_dlsym(handle, "_ZNK2v85Value10FullIsNullEv");
    if (_v8_Value_FullIsNull == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value10FullIsNullEv");
    ((void*&) _v8_Value_FullIsUndefined) = hybris_dlsym(handle, "_ZNK2v85Value15FullIsUndefinedEv");
    if (_v8_Value_FullIsUndefined == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value15FullIsUndefinedEv");
    ((void*&) _v8_Value_FullIsString) = hybris_dlsym(handle, "_ZNK2v85Value12FullIsStringEv");
    if (_v8_Value_FullIsString == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Value12FullIsStringEv");
    ((void*&) _v8_Name_CheckCast) = hybris_dlsym(handle, "_ZN2v84Name9CheckCastEPNS_5ValueE");
    if (_v8_Name_CheckCast == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v84Name9CheckCastEPNS_5ValueE");
    ((void*&) _v8_String_Length) = hybris_dlsym(handle, "_ZNK2v86String6LengthEv");
    if (_v8_String_Length == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v86String6LengthEv");
    ((void*&) _v8_String_Utf8Length) = hybris_dlsym(handle, "_ZNK2v86String10Utf8LengthEv");
    if (_v8_String_Utf8Length == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v86String10Utf8LengthEv");
    ((void*&) _v8_String_IsOneByte) = hybris_dlsym(handle, "_ZNK2v86String9IsOneByteEv");
    if (_v8_String_IsOneByte == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v86String9IsOneByteEv");
    ((void*&) _v8_String_ContainsOnlyOneByte) = hybris_dlsym(handle, "_ZNK2v86String19ContainsOnlyOneByteEv");
    if (_v8_String_ContainsOnlyOneByte == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v86String19ContainsOnlyOneByteEv");
    ((void*&) _v8_String_IsExternal) = hybris_dlsym(handle, "_ZNK2v86String10IsExternalEv");
    if (_v8_String_IsExternal == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v86String10IsExternalEv");
    ((void*&) _v8_String_IsExternalOneByte) = hybris_dlsym(handle, "_ZNK2v86String17IsExternalOneByteEv");
    if (_v8_String_IsExternalOneByte == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v86String17IsExternalOneByteEv");
    ((void*&) _v8_String_NewFromUtf8Impl) = hybris_dlsym(handle, "_ZN2v86String11NewFromUtf8EPNS_7IsolateEPKcNS_13NewStringTypeEi");
    if (_v8_String_NewFromUtf8Impl == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v86String11NewFromUtf8EPNS_7IsolateEPKcNS_13NewStringTypeEi");
    ((void*&) _v8_String_NewFromTwoByteImpl) = hybris_dlsym(handle, "_ZN2v86String14NewFromTwoByteEPNS_7IsolateEPKtNS_13NewStringTypeEi");
    if (_v8_String_NewFromTwoByteImpl == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v86String14NewFromTwoByteEPNS_7IsolateEPKtNS_13NewStringTypeEi");
    ((void*&) _v8_String_WriteImpl) = hybris_dlsym(handle, "_ZNK2v86String5WriteEPtiii");
    if (_v8_String_WriteImpl == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v86String5WriteEPtiii");
    ((void*&) _v8_String_CheckCast) = hybris_dlsym(handle, "_ZN2v86String9CheckCastEPNS_5ValueE");
    if (_v8_String_CheckCast == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v86String9CheckCastEPNS_5ValueE");
    ((void*&) _v8_String_Utf8Value_Utf8Value) = hybris_dlsym(handle, "_ZN2v86String9Utf8ValueC2ENS_5LocalINS_5ValueEEE");
    if (_v8_String_Utf8Value_Utf8Value == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v86String9Utf8ValueC2ENS_5LocalINS_5ValueEEE");
    ((void*&) _v8_String_Utf8Value_destructor) = hybris_dlsym(handle, "_ZN2v86String9Utf8ValueD2Ev");
    if (_v8_String_Utf8Value_destructor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v86String9Utf8ValueD2Ev");
    ((void*&) _v8_Number_New) = hybris_dlsym(handle, "_ZN2v86Number3NewEPNS_7IsolateEd");
    if (_v8_Number_New == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v86Number3NewEPNS_7IsolateEd");
    ((void*&) _v8_Number_Value) = hybris_dlsym(handle, "_ZNK2v86Number5ValueEv");
    if (_v8_Number_Value == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v86Number5ValueEv");
    ((void*&) _v8_Number_CheckCast) = hybris_dlsym(handle, "_ZN2v86Number9CheckCastEPNS_5ValueE");
    if (_v8_Number_CheckCast == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v86Number9CheckCastEPNS_5ValueE");
    ((void*&) _v8_Integer_New) = hybris_dlsym(handle, "_ZN2v87Integer3NewEPNS_7IsolateEi");
    if (_v8_Integer_New == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v87Integer3NewEPNS_7IsolateEi");
    ((void*&) _v8_Integer_NewFromUnsigned) = hybris_dlsym(handle, "_ZN2v87Integer15NewFromUnsignedEPNS_7IsolateEj");
    if (_v8_Integer_NewFromUnsigned == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v87Integer15NewFromUnsignedEPNS_7IsolateEj");
    ((void*&) _v8_Integer_Value) = hybris_dlsym(handle, "_ZNK2v87Integer5ValueEv");
    if (_v8_Integer_Value == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v87Integer5ValueEv");
    ((void*&) _v8_Integer_CheckCast) = hybris_dlsym(handle, "_ZN2v87Integer9CheckCastEPNS_5ValueE");
    if (_v8_Integer_CheckCast == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v87Integer9CheckCastEPNS_5ValueE");
    ((void*&) _v8_Boolean_Value) = hybris_dlsym(handle, "_ZNK2v87Boolean5ValueEv");
    if (_v8_Boolean_Value == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v87Boolean5ValueEv");
    ((void*&) _v8_Boolean_CheckCast) = hybris_dlsym(handle, "_ZN2v87Boolean9CheckCastEPNS_5ValueE");
    if (_v8_Boolean_CheckCast == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v87Boolean9CheckCastEPNS_5ValueE");
    ((void*&) _v8_TryCatch_TryCatch) = hybris_dlsym(handle, "_ZN2v88TryCatchC2EPNS_7IsolateE");
    if (_v8_TryCatch_TryCatch == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v88TryCatchC2EPNS_7IsolateE");
    ((void*&) _v8_TryCatch_destructor) = hybris_dlsym(handle, "_ZN2v88TryCatchD2Ev");
    if (_v8_TryCatch_destructor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v88TryCatchD2Ev");
    ((void*&) _v8_TryCatch_HasCaught) = hybris_dlsym(handle, "_ZNK2v88TryCatch9HasCaughtEv");
    if (_v8_TryCatch_HasCaught == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v88TryCatch9HasCaughtEv");
    ((void*&) _v8_TryCatch_CanContinue) = hybris_dlsym(handle, "_ZNK2v88TryCatch11CanContinueEv");
    if (_v8_TryCatch_CanContinue == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v88TryCatch11CanContinueEv");
    ((void*&) _v8_TryCatch_HasTerminated) = hybris_dlsym(handle, "_ZNK2v88TryCatch13HasTerminatedEv");
    if (_v8_TryCatch_HasTerminated == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v88TryCatch13HasTerminatedEv");
    ((void*&) _v8_TryCatch_ReThrow) = hybris_dlsym(handle, "_ZN2v88TryCatch7ReThrowEv");
    if (_v8_TryCatch_ReThrow == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v88TryCatch7ReThrowEv");
    ((void*&) _v8_TryCatch_Exception) = hybris_dlsym(handle, "_ZNK2v88TryCatch9ExceptionEv");
    if (_v8_TryCatch_Exception == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v88TryCatch9ExceptionEv");
    ((void*&) _v8_TryCatch_StackTrace) = hybris_dlsym(handle, "_ZNK2v88TryCatch10StackTraceENS_5LocalINS_7ContextEEE");
    if (_v8_TryCatch_StackTrace == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v88TryCatch10StackTraceENS_5LocalINS_7ContextEEE");
    ((void*&) _v8_TryCatch_Message) = hybris_dlsym(handle, "_ZNK2v88TryCatch7MessageEv");
    if (_v8_TryCatch_Message == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v88TryCatch7MessageEv");
    ((void*&) _v8_TryCatch_Reset) = hybris_dlsym(handle, "_ZN2v88TryCatch5ResetEv");
    if (_v8_TryCatch_Reset == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v88TryCatch5ResetEv");
    ((void*&) _v8_TryCatch_SetVerbose) = hybris_dlsym(handle, "_ZN2v88TryCatch10SetVerboseEb");
    if (_v8_TryCatch_SetVerbose == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v88TryCatch10SetVerboseEb");
    ((void*&) _v8_TryCatch_SetCaptureMessage) = hybris_dlsym(handle, "_ZN2v88TryCatch17SetCaptureMessageEb");
    if (_v8_TryCatch_SetCaptureMessage == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v88TryCatch17SetCaptureMessageEb");
    ((void*&) _v8_Isolate_ThrowException) = hybris_dlsym(handle, "_ZN2v87Isolate14ThrowExceptionENS_5LocalINS_5ValueEEE");
    if (_v8_Isolate_ThrowException == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v87Isolate14ThrowExceptionENS_5LocalINS_5ValueEEE");
    ((void*&) _v8_Isolate_GetCurrent) = hybris_dlsym(handle, "_ZN2v87Isolate10GetCurrentEv");
    if (_v8_Isolate_GetCurrent == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v87Isolate10GetCurrentEv");
    ((void*&) _v8_Isolate_GetCurrentContext) = hybris_dlsym(handle, "_ZN2v87Isolate17GetCurrentContextEv");
    if (_v8_Isolate_GetCurrentContext == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v87Isolate17GetCurrentContextEv");
    ((void*&) _v8_Isolate_InContext) = hybris_dlsym(handle, "_ZN2v87Isolate9InContextEv");
    if (_v8_Isolate_InContext == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v87Isolate9InContextEv");
    ((void*&) _v8_Isolate_Enter) = hybris_dlsym(handle, "_ZN2v87Isolate5EnterEv");
    if (_v8_Isolate_Enter == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v87Isolate5EnterEv");
    ((void*&) _v8_Isolate_Exit) = hybris_dlsym(handle, "_ZN2v87Isolate4ExitEv");
    if (_v8_Isolate_Exit == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v87Isolate4ExitEv");
    ((void*&) _v8_Context_Enter) = hybris_dlsym(handle, "_ZN2v87Context5EnterEv");
    if (_v8_Context_Enter == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v87Context5EnterEv");
    ((void*&) _v8_Context_Exit) = hybris_dlsym(handle, "_ZN2v87Context4ExitEv");
    if (_v8_Context_Exit == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v87Context4ExitEv");
    ((void*&) _v8_Context_New) = hybris_dlsym(handle, "_ZN2v87Context3NewEPNS_7IsolateEPNS_22ExtensionConfigurationENS_10MaybeLocalINS_14ObjectTemplateEEENS5_INS_5ValueEEE");
    if (_v8_Context_New == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v87Context3NewEPNS_7IsolateEPNS_22ExtensionConfigurationENS_10MaybeLocalINS_14ObjectTemplateEEENS5_INS_5ValueEEE");
    ((void*&) _v8_HandleScope_HandleScope) = hybris_dlsym(handle, "_ZN2v811HandleScopeC2EPNS_7IsolateE");
    if (_v8_HandleScope_HandleScope == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v811HandleScopeC2EPNS_7IsolateE");
    ((void*&) _v8_HandleScope_destructor) = hybris_dlsym(handle, "_ZN2v811HandleScopeD2Ev");
    if (_v8_HandleScope_destructor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v811HandleScopeD2Ev");
    ((void*&) _v8_EscapableHandleScope_EscapableHandleScope) = hybris_dlsym(handle, "_ZN2v820EscapableHandleScopeC2EPNS_7IsolateE");
    if (_v8_EscapableHandleScope_EscapableHandleScope == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v820EscapableHandleScopeC2EPNS_7IsolateE");
    ((void*&) _v8_Object_New) = hybris_dlsym(handle, "_ZN2v86Object3NewEPNS_7IsolateE");
    if (_v8_Object_New == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v86Object3NewEPNS_7IsolateE");
    ((void*&) _v8_Object_Set) = hybris_dlsym(handle, "_ZN2v86Object3SetEjNS_5LocalINS_5ValueEEE");
    if (_v8_Object_Set == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v86Object3SetEjNS_5LocalINS_5ValueEEE");
    ((void*&) _v8_Object_Set2) = hybris_dlsym(handle, "_ZN2v86Object3SetENS_5LocalINS_5ValueEEES3_");
    if (_v8_Object_Set2 == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v86Object3SetENS_5LocalINS_5ValueEEES3_");
    ((void*&) _v8_Object_Get) = hybris_dlsym(handle, "_ZN2v86Object3GetEj");
    if (_v8_Object_Get == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v86Object3GetEj");
    ((void*&) _v8_Object_Get2) = hybris_dlsym(handle, "_ZN2v86Object3GetENS_5LocalINS_5ValueEEE");
    if (_v8_Object_Get2 == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v86Object3GetENS_5LocalINS_5ValueEEE");
    ((void*&) _v8_Object_Has) = hybris_dlsym(handle, "_ZN2v86Object3HasENS_5LocalINS_5ValueEEE");
    if (_v8_Object_Has == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v86Object3HasENS_5LocalINS_5ValueEEE");
    ((void*&) _v8_Object_CheckCast) = hybris_dlsym(handle, "_ZN2v86Object9CheckCastEPNS_5ValueE");
    if (_v8_Object_CheckCast == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v86Object9CheckCastEPNS_5ValueE");
    ((void*&) _v8_Array_New) = hybris_dlsym(handle, "_ZN2v85Array3NewEPNS_7IsolateEi");
    if (_v8_Array_New == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v85Array3NewEPNS_7IsolateEi");
    ((void*&) _v8_Array_Length) = hybris_dlsym(handle, "_ZNK2v85Array6LengthEv");
    if (_v8_Array_Length == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK2v85Array6LengthEv");
    ((void*&) _v8_Array_CheckCast) = hybris_dlsym(handle, "_ZN2v85Array9CheckCastEPNS_5ValueE");
    if (_v8_Array_CheckCast == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v85Array9CheckCastEPNS_5ValueE");
    ((void*&) _v8_Function_Call) = hybris_dlsym(handle, "_ZN2v88Function4CallENS_5LocalINS_5ValueEEEiPS3_");
    if (_v8_Function_Call == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v88Function4CallENS_5LocalINS_5ValueEEEiPS3_");
    ((void*&) _v8_Function_CheckCast) = hybris_dlsym(handle, "_ZN2v88Function9CheckCastEPNS_5ValueE");
    if (_v8_Function_CheckCast == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2v88Function9CheckCastEPNS_5ValueE");
    void** vt_PlayerCommandOrigin = (void**) hybris_dlsym(handle, "_ZTV19PlayerCommandOrigin") + 2;
    vti_CommandOrigin_getName = resolve_vtable_func(vt_PlayerCommandOrigin, hybris_dlsym(handle, "_ZNK19PlayerCommandOrigin7getNameEv"));
    if (vti_CommandOrigin_getName == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZNK19PlayerCommandOrigin7getNameEv");
    vti_CommandOrigin_getBlockPosition = resolve_vtable_func(vt_PlayerCommandOrigin, hybris_dlsym(handle, "_ZNK19PlayerCommandOrigin16getBlockPositionEv"));
    if (vti_CommandOrigin_getBlockPosition == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZNK19PlayerCommandOrigin16getBlockPositionEv");
    vti_CommandOrigin_getWorldPosition = resolve_vtable_func(vt_PlayerCommandOrigin, hybris_dlsym(handle, "_ZNK19PlayerCommandOrigin16getWorldPositionEv"));
    if (vti_CommandOrigin_getWorldPosition == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZNK19PlayerCommandOrigin16getWorldPositionEv");
    vti_CommandOrigin_clone = resolve_vtable_func(vt_PlayerCommandOrigin, hybris_dlsym(handle, "_ZNK19PlayerCommandOrigin5cloneEv"));
    if (vti_CommandOrigin_clone == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZNK19PlayerCommandOrigin5cloneEv");
    vti_CommandOrigin_getOriginType = resolve_vtable_func(vt_PlayerCommandOrigin, hybris_dlsym(handle, "_ZNK19PlayerCommandOrigin13getOriginTypeEv"));
    if (vti_CommandOrigin_getOriginType == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZNK19PlayerCommandOrigin13getOriginTypeEv");
    vti_CommandOrigin_getEntity = resolve_vtable_func(vt_PlayerCommandOrigin, hybris_dlsym(handle, "_ZNK19PlayerCommandOrigin9getEntityEv"));
    if (vti_CommandOrigin_getEntity == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZNK19PlayerCommandOrigin9getEntityEv");
    vti_CommandOrigin_getPermissionLevel = resolve_vtable_func(vt_PlayerCommandOrigin, hybris_dlsym(handle, "_ZNK19PlayerCommandOrigin19getPermissionsLevelEv"));
    if (vti_CommandOrigin_getPermissionLevel == -1) Log::error("MinecraftSymbols", "Unresolved vtable symbol: %s", "_ZNK19PlayerCommandOrigin19getPermissionsLevelEv");
    ((void*&) _CommandOrigin_getUUID) = hybris_dlsym(handle, "_ZNK13CommandOrigin7getUUIDEv");
    if (_CommandOrigin_getUUID == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK13CommandOrigin7getUUIDEv");
    ((void*&) _PlayerCommandOrigin_PlayerCommandOrigin) = hybris_dlsym(handle, "_ZN19PlayerCommandOriginC2ER6Player");
    if (_PlayerCommandOrigin_PlayerCommandOrigin == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19PlayerCommandOriginC2ER6Player");
    ((void*&) _gl_getOpenGLVendor) = hybris_dlsym(handle, "_ZN2gl15getOpenGLVendorEv");
    if (_gl_getOpenGLVendor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2gl15getOpenGLVendorEv");
    ((void*&) _gl_getOpenGLRenderer) = hybris_dlsym(handle, "_ZN2gl17getOpenGLRendererEv");
    if (_gl_getOpenGLRenderer == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2gl17getOpenGLRendererEv");
    ((void*&) _gl_getOpenGLVersion) = hybris_dlsym(handle, "_ZN2gl16getOpenGLVersionEv");
    if (_gl_getOpenGLVersion == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2gl16getOpenGLVersionEv");
    ((void*&) _gl_getOpenGLExtensions) = hybris_dlsym(handle, "_ZN2gl19getOpenGLExtensionsEv");
    if (_gl_getOpenGLExtensions == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN2gl19getOpenGLExtensionsEv");
    ((void*&) _mce_Platform_OGL_InitBindings) = hybris_dlsym(handle, "_ZN3mce8Platform3OGL12InitBindingsEv");
    if (_mce_Platform_OGL_InitBindings == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN3mce8Platform3OGL12InitBindingsEv");
    ((void*&) _MinecraftServerScriptEngine_helpDefineEntity) = hybris_dlsym(handle, "_ZN23ScriptEngineWithContextI19ScriptServerContextE16helpDefineEntityERK5ActorRN9ScriptApi18ScriptObjectHandleE");
    if (_MinecraftServerScriptEngine_helpDefineEntity == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN23ScriptEngineWithContextI19ScriptServerContextE16helpDefineEntityERK5ActorRN9ScriptApi18ScriptObjectHandleE");
    ((void*&) _MinecraftServerScriptEngine_helpGetActor) = hybris_dlsym(handle, "_ZN23ScriptEngineWithContextI19ScriptServerContextE12helpGetActorERKN9ScriptApi18ScriptObjectHandleEPP5Actor");
    if (_MinecraftServerScriptEngine_helpGetActor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN23ScriptEngineWithContextI19ScriptServerContextE12helpGetActorERKN9ScriptApi18ScriptObjectHandleEPP5Actor");
    ((void*&) _MinecraftServerScriptEngine_isValidEntity) = hybris_dlsym(handle, "_ZN23ScriptEngineWithContextI19ScriptServerContextE13isValidEntityERKN9ScriptApi18ScriptObjectHandleERb");
    if (_MinecraftServerScriptEngine_isValidEntity == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN23ScriptEngineWithContextI19ScriptServerContextE13isValidEntityERKN9ScriptApi18ScriptObjectHandleERb");
    ((void*&) _Multitouch_feed) = hybris_dlsym(handle, "_ZN10Multitouch4feedEccssi");
    if (_Multitouch_feed == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN10Multitouch4feedEccssi");
    ((void*&) _ResourceLoadManager_ResourceLoadManager) = hybris_dlsym(handle, "_ZN19ResourceLoadManagerC2Ev");
    if (_ResourceLoadManager_ResourceLoadManager == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19ResourceLoadManagerC2Ev");
    ((void*&) _ResourceLoadManager_sync) = hybris_dlsym(handle, "_ZN19ResourceLoadManager4syncE16ResourceLoadType");
    if (_ResourceLoadManager_sync == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN19ResourceLoadManager4syncE16ResourceLoadType");
    ((void*&) _I18n_get) = hybris_dlsym(handle, "_ZN4I18n3getERKSsRKSt6vectorISsSaISsEE");
    if (_I18n_get == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4I18n3getERKSsRKSt6vectorISsSaISsEE");
    ((void*&) _I18n_chooseLanguage) = hybris_dlsym(handle, "_ZN4I18n14chooseLanguageERKSs");
    if (_I18n_chooseLanguage == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4I18n14chooseLanguageERKSs");
    ((void*&) _I18n_loadLanguages) = hybris_dlsym(handle, "_ZN4I18n13loadLanguagesER19ResourcePackManagerR19ResourceLoadManagerRKSs");
    if (_I18n_loadLanguages == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN4I18n13loadLanguagesER19ResourcePackManagerR19ResourceLoadManagerRKSs");
    ((void*&) _Social_MultiplayerXBL_MultiplayerXBL) = hybris_dlsym(handle, "_ZN6Social14MultiplayerXBLC2Ev");
    if (_Social_MultiplayerXBL_MultiplayerXBL == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN6Social14MultiplayerXBLC2Ev");
    ((void*&) Keyboard::_states) = hybris_dlsym(handle, "_ZN8Keyboard7_statesE");
    if (Keyboard::_states == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN8Keyboard7_statesE");
    ((void*&) Keyboard::_inputCaretLocation) = hybris_dlsym(handle, "_ZN8Keyboard19_inputCaretLocationE");
    if (Keyboard::_inputCaretLocation == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN8Keyboard19_inputCaretLocationE");
    ((void*&) _Keyboard_feed) = hybris_dlsym(handle, "_ZN8Keyboard4feedEhi");
    if (_Keyboard_feed == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN8Keyboard4feedEhi");
    ((void*&) _Keyboard_feedText) = hybris_dlsym(handle, "_ZN8Keyboard8feedTextERKSsbh");
    if (_Keyboard_feedText == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN8Keyboard8feedTextERKSsbh");
    ((void*&) _WhitelistEntry_WhitelistEntry) = hybris_dlsym(handle, "_ZN14WhitelistEntryC2ESsN3mce4UUIDESsb");
    if (_WhitelistEntry_WhitelistEntry == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14WhitelistEntryC2ESsN3mce4UUIDESsb");
    ((void*&) _Whitelist_Whitelist) = hybris_dlsym(handle, "_ZN9WhitelistC2ESt8functionIFvvEE");
    if (_Whitelist_Whitelist == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN9WhitelistC2ESt8functionIFvvEE");
    ((void*&) _Whitelist_deserialize) = hybris_dlsym(handle, "_ZN9Whitelist11deserializeERN4Json5ValueE");
    if (_Whitelist_deserialize == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN9Whitelist11deserializeERN4Json5ValueE");
    ((void*&) _Whitelist_serialize) = hybris_dlsym(handle, "_ZN9Whitelist9serializeERN4Json5ValueE");
    if (_Whitelist_serialize == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN9Whitelist9serializeERN4Json5ValueE");
    ((void*&) _Whitelist_removeByName) = hybris_dlsym(handle, "_ZN9Whitelist12removeByNameERKSs");
    if (_Whitelist_removeByName == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN9Whitelist12removeByNameERKSs");
    ((void*&) _MinecraftEventing_MinecraftEventing) = hybris_dlsym(handle, "_ZN17MinecraftEventingC2ERKSs");
    if (_MinecraftEventing_MinecraftEventing == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN17MinecraftEventingC2ERKSs");
    ((void*&) _MinecraftEventing_init) = hybris_dlsym(handle, "_ZN17MinecraftEventing4initEv");
    if (_MinecraftEventing_init == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN17MinecraftEventing4initEv");
    ((void*&) _TextPacket_TextPacket) = hybris_dlsym(handle, "_ZN10TextPacketC2E14TextPacketTypeRKSsS2_RKSt6vectorISsSaISsEEbS2_S2_");
    if (_TextPacket_TextPacket == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN10TextPacketC2E14TextPacketTypeRKSsS2_RKSt6vectorISsSaISsEEbS2_S2_");
    ((void*&) _TextPacket_createRaw) = hybris_dlsym(handle, "_ZN10TextPacket9createRawERKSs");
    if (_TextPacket_createRaw == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN10TextPacket9createRawERKSs");
    ((void*&) _TextPacket_createJukeboxPopup) = hybris_dlsym(handle, "_ZN10TextPacket18createJukeboxPopupERKSs");
    if (_TextPacket_createJukeboxPopup == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN10TextPacket18createJukeboxPopupERKSs");
    ((void*&) _TextPacket_createSystemMessage) = hybris_dlsym(handle, "_ZN10TextPacket19createSystemMessageERKSs");
    if (_TextPacket_createSystemMessage == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN10TextPacket19createSystemMessageERKSs");
    ((void*&) _TextPacket_createChat) = hybris_dlsym(handle, "_ZN10TextPacket10createChatERKSsS1_S1_S1_");
    if (_TextPacket_createChat == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN10TextPacket10createChatERKSsS1_S1_S1_");
    ((void*&) _TextPacket_createTranslatedChat) = hybris_dlsym(handle, "_ZN10TextPacket20createTranslatedChatERKSsS1_S1_S1_");
    if (_TextPacket_createTranslatedChat == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN10TextPacket20createTranslatedChatERKSsS1_S1_S1_");
    ((void*&) _TextPacket_createTranslatedAnnouncement) = hybris_dlsym(handle, "_ZN10TextPacket28createTranslatedAnnouncementERKSsS1_S1_S1_");
    if (_TextPacket_createTranslatedAnnouncement == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN10TextPacket28createTranslatedAnnouncementERKSsS1_S1_S1_");
    ((void*&) _TextPacket_createWhisper) = hybris_dlsym(handle, "_ZN10TextPacket13createWhisperERKSsS1_S1_S1_");
    if (_TextPacket_createWhisper == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN10TextPacket13createWhisperERKSsS1_S1_S1_");
    ((void*&) _TextPacket_createTranslated) = hybris_dlsym(handle, "_ZN10TextPacket16createTranslatedERKSsRKSt6vectorISsSaISsEE");
    if (_TextPacket_createTranslated == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN10TextPacket16createTranslatedERKSsRKSt6vectorISsSaISsEE");
    ((void*&) GameControllerManager::sGamePadManager) = hybris_dlsym(handle, "_ZN21GameControllerManager15sGamePadManagerE");
    if (GameControllerManager::sGamePadManager == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN21GameControllerManager15sGamePadManagerE");
    ((void*&) _GameControllerManager_setGameControllerConnected) = hybris_dlsym(handle, "_ZN21GameControllerManager26setGameControllerConnectedEib");
    if (_GameControllerManager_setGameControllerConnected == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN21GameControllerManager26setGameControllerConnectedEib");
    ((void*&) _GameControllerManager_feedButton) = hybris_dlsym(handle, "_ZN21GameControllerManager10feedButtonEii25GameControllerButtonStateb");
    if (_GameControllerManager_feedButton == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN21GameControllerManager10feedButtonEii25GameControllerButtonStateb");
    ((void*&) _GameControllerManager_feedStick) = hybris_dlsym(handle, "_ZN21GameControllerManager9feedStickEii24GameControllerStickStateff");
    if (_GameControllerManager_feedStick == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN21GameControllerManager9feedStickEii24GameControllerStickStateff");
    ((void*&) _GameControllerManager_feedTrigger) = hybris_dlsym(handle, "_ZN21GameControllerManager11feedTriggerEiif");
    if (_GameControllerManager_feedTrigger == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN21GameControllerManager11feedTriggerEiif");
    ((void*&) _GameControllerManager_feedJoinGame) = hybris_dlsym(handle, "_ZN21GameControllerManager12feedJoinGameEib");
    if (_GameControllerManager_feedJoinGame == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN21GameControllerManager12feedJoinGameEib");
    ((void*&) CommandMessage::constructor) = hybris_dlsym(handle, "_ZN14CommandMessageC2Ev");
    if (CommandMessage::constructor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14CommandMessageC2Ev");
    ((void*&) CommandMessage::destructor) = hybris_dlsym(handle, "_ZN14CommandMessageD2Ev");
    if (CommandMessage::destructor == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN14CommandMessageD2Ev");
    ((void*&) CommandMessage::tid) = hybris_dlsym(handle, "_ZZ7type_idI15CommandRegistry14CommandMessageE8typeid_tIT_EvE2id");
    if (CommandMessage::tid == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZZ7type_idI15CommandRegistry14CommandMessageE8typeid_tIT_EvE2id");
    ((void*&) CommandMessage::parser) = hybris_dlsym(handle, "_ZNK15CommandRegistry5parseI14CommandMessageEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    if (CommandMessage::parser == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK15CommandRegistry5parseI14CommandMessageEEbPvRKNS_10ParseTokenERK13CommandOriginiRSsRSt6vectorISsSaISsEE");
    ((void*&) _CommandMessage_getMessage) = hybris_dlsym(handle, "_ZNK14CommandMessage10getMessageERK13CommandOrigin");
    if (_CommandMessage_getMessage == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK14CommandMessage10getMessageERK13CommandOrigin");
    ((void*&) _Player_getPlatformOnlineId) = hybris_dlsym(handle, "_ZNK6Player19getPlatformOnlineIdEv");
    if (_Player_getPlatformOnlineId == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK6Player19getPlatformOnlineIdEv");
    ((void*&) _Player_getCertificate) = hybris_dlsym(handle, "_ZNK6Player14getCertificateEv");
    if (_Player_getCertificate == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK6Player14getCertificateEv");
    ((void*&) _Player_getPos) = hybris_dlsym(handle, "_ZNK5Actor6getPosEv");
    if (_Player_getPos == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK5Actor6getPosEv");
    ((void*&) _Player_getRotation) = hybris_dlsym(handle, "_ZNK5Actor11getRotationEv");
    if (_Player_getRotation == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK5Actor11getRotationEv");
    ((void*&) _Player_isCreative) = hybris_dlsym(handle, "_ZNK5Actor10isCreativeEv");
    if (_Player_isCreative == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK5Actor10isCreativeEv");
    ((void*&) _Player_getLevelProgress) = hybris_dlsym(handle, "_ZNK6Player16getLevelProgressEv");
    if (_Player_getLevelProgress == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK6Player16getLevelProgressEv");
    ((void*&) _Player_sendNetworkPacket) = hybris_dlsym(handle, "_ZNK12ServerPlayer17sendNetworkPacketER6Packet");
    if (_Player_sendNetworkPacket == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK12ServerPlayer17sendNetworkPacketER6Packet");
    ((void*&) _Player_canUseAbility) = hybris_dlsym(handle, "_ZN6Player13canUseAbilityERKSs");
    if (_Player_canUseAbility == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZN6Player13canUseAbilityERKSs");
    ((void*&) _ActorDefinitionIdentifier_getCanonicalName) = hybris_dlsym(handle, "_ZNK25ActorDefinitionIdentifier16getCanonicalNameEv");
    if (_ActorDefinitionIdentifier_getCanonicalName == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK25ActorDefinitionIdentifier16getCanonicalNameEv");
    ((void*&) _Actor_getActorIdentifier) = hybris_dlsym(handle, "_ZNK5Actor18getActorIdentifierEv");
    if (_Actor_getActorIdentifier == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK5Actor18getActorIdentifierEv");
    ((void*&) _Actor_getUniqueID) = hybris_dlsym(handle, "_ZNK5Actor11getUniqueIDEv");
    if (_Actor_getUniqueID == nullptr) Log::error("MinecraftSymbols", "Unresolved symbol: %s", "_ZNK5Actor11getUniqueIDEv");
    vti_Legacy_Pre_1_8_App_quit = resolve_vtable_func(vt_App, hybris_dlsym(handle, "_ZN3App4quitEv"));
    ((void*&) _Legacy_Pre_1_2_10_MinecraftGame_setTextboxText) = hybris_dlsym(handle, "_ZN13MinecraftGame14setTextboxTextERKSs");
    ((void*&) _Legacy_Pre_1_2_10_AppPlatform_showKeyboard) = hybris_dlsym(handle, "_ZN11AppPlatform12showKeyboardERKSsibbbRK4Vec2");
    void** vt_xbox_services_local_config = (void**) hybris_dlsym(handle, "_ZTVN4xbox8services12local_configE") + 2;
    vti_Legacy_Beta_1_8_xbox_services_local_config_get_value_from_local_storage = resolve_vtable_func(vt_xbox_services_local_config, hybris_dlsym(handle, "_ZN4xbox8services12local_config28get_value_from_local_storageERKSsS3_S3_"));
}
