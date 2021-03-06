#pragma once

#include "HardwareIO.h"
#include <cstdint>
enum class HardwareFailures : uint64_t {
	None = 0,
	GenericError = 1 << 0,
	LeftDriverBoardConnection = 1 << 1,
	RightDriverBoardConnection = 1 << 2,
	ImuLeftConnection = 1 << 3,
	ImuRightConnection = 1 << 4,
	ImuChestConnection = 1 << 5


};

inline HardwareFailures operator|(HardwareFailures a, HardwareFailures b)
{
	return static_cast<HardwareFailures>(static_cast<uint64_t>(a) | static_cast<uint64_t>(b));
}

enum class TestProgress {
	Unknown = 0, 
	InProgress = 1,
	FinishedPartialResult,
	Finished
};
class HardwareDiagnostic {
public:
	

	virtual void run(HardwareIO* io) = 0;
	virtual void cancel() = 0;
	virtual TestProgress get_progress() const = 0;
	virtual HardwareFailures get_results() const = 0;
};


