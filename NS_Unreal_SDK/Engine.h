#pragma once
#include "Wire.h"
#include "EncodingOperations.h"
#include "SuitHardwareInterface.h"
#include "HapticCache2.h"
#include "PacketDispatcher.h"
#include "Synchronizer.h"
#include "HapticsPlayer.h"
#include "InstructionSet.h"
#include "Consumers\ImuConsumer.h"
#include "SuitDiagnostics.h"
struct suit_status {

};
class Engine
{
public:
	Engine(std::shared_ptr<IoService> io, EncodingOperations& encoder, zmq::socket_t& socket);
	
	void HandleCommand(const NullSpace::HapticFiles::HapticPacket& packet);
	void EngineCommand(const NullSpace::HapticFiles::HapticPacket& packet);
	void PlayEffect(const NullSpace::HapticFiles::HapticPacket& packet);
	void EnableOrDisableTracking(const NullSpace::HapticFiles::HapticPacket& packet);
	void Update(float dt);
	bool SuitConnected() const;
	~Engine();
private:
	//Be very careful if you reorder these parameters. 
	std::shared_ptr<InstructionSet> _instructionSet; //order dependency
	std::shared_ptr<ICommunicationAdapter> _adapter; //order dependency

	std::shared_ptr<PacketDispatcher> _packetDispatcher; //order dependency
	Synchronizer _streamSynchronizer; //order dependency
	HapticsPlayer _hapticsPlayer;//order dependency

	std::shared_ptr<ImuConsumer> _imuConsumer;
	boost::asio::deadline_timer _trackingUpdateTimer;
	boost::posix_time::milliseconds _trackingUpdateInterval = boost::posix_time::milliseconds(100);

	EncodingOperations& _encoder;
	zmq::socket_t& _socket;
	void sendTrackingUpdate();

	//todo: App Sessions
	bool _userRequestsTracking;
	SuitDiagnostics _diagnostics;
	SuitHardwareInterface _hardware;
	void handleSuitVersionUpdate(const SuitDiagnostics::VersionInfo & v);
};

