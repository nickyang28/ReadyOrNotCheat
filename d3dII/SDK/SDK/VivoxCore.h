
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Enum /Script/VivoxCore.DeviceType
/// Size: 0x01 (1 bytes)
enum class DeviceType : uint8_t
{
	DeviceType__NullDevice                                                           = 0,
	DeviceType__SpecificDevice                                                       = 1,
	DeviceType__DefaultSystemDevice                                                  = 2,
	DeviceType__DefaultCommunicationDevice                                           = 3
};

/// Enum /Script/VivoxCore.EAudioFadeModel
/// Size: 0x01 (1 bytes)
enum class EAudioFadeModel : uint8_t
{
	EAudioFadeModel__InverseByDistance                                               = 0,
	EAudioFadeModel__LinearByDistance                                                = 1,
	EAudioFadeModel__ExponentialByDistance                                           = 2
};

/// Enum /Script/VivoxCore.ChannelType
/// Size: 0x01 (1 bytes)
enum class ChannelType : uint8_t
{
	ChannelType__NonPositional                                                       = 0,
	ChannelType__Positional                                                          = 1,
	ChannelType__Echo                                                                = 2
};

/// Enum /Script/VivoxCore.ConnectionState
/// Size: 0x01 (1 bytes)
enum class ConnectionState : uint8_t
{
	ConnectionState__Disconnected                                                    = 0,
	ConnectionState__Connecting                                                      = 1,
	ConnectionState__Connected                                                       = 2,
	ConnectionState__Disconnecting                                                   = 3
};

/// Enum /Script/VivoxCore.ParticipantSpeakingUpdateRate
/// Size: 0x01 (1 bytes)
enum class ParticipantSpeakingUpdateRate : uint8_t
{
	ParticipantSpeakingUpdateRate__StateChange                                       = 0,
	ParticipantSpeakingUpdateRate__Never                                             = 1,
	ParticipantSpeakingUpdateRate__Update1Hz                                         = 2,
	ParticipantSpeakingUpdateRate__Update5Hz                                         = 3,
	ParticipantSpeakingUpdateRate__Update10Hz                                        = 4
};

/// Enum /Script/VivoxCore.TransmissionMode
/// Size: 0x01 (1 bytes)
enum class TransmissionMode : uint8_t
{
	TransmissionMode__None                                                           = 0,
	TransmissionMode__Single                                                         = 1,
	TransmissionMode__All                                                            = 2
};

/// Enum /Script/VivoxCore.SubscriptionReply
/// Size: 0x01 (1 bytes)
enum class SubscriptionReply : uint8_t
{
	SubscriptionReply__Allow                                                         = 0,
	SubscriptionReply__Block                                                         = 1
};

/// Enum /Script/VivoxCore.SubscriptionMode
/// Size: 0x01 (1 bytes)
enum class SubscriptionMode : uint8_t
{
	SubscriptionMode__Accept                                                         = 0,
	SubscriptionMode__Block                                                          = 1,
	SubscriptionMode__Defer                                                          = 2
};

/// Enum /Script/VivoxCore.LoginState
/// Size: 0x01 (1 bytes)
enum class LoginState : uint8_t
{
	LoginState__LoggedOut                                                            = 0,
	LoginState__LoggingIn                                                            = 1,
	LoginState__LoggedIn                                                             = 2,
	LoginState__LoggingOut                                                           = 3
};

/// Enum /Script/VivoxCore.TTSMessageState
/// Size: 0x01 (1 bytes)
enum class TTSMessageState : uint8_t
{
	TTSMessageState__Playing                                                         = 0,
	TTSMessageState__Enqueued                                                        = 1
};

/// Enum /Script/VivoxCore.TTSDestination
/// Size: 0x01 (1 bytes)
enum class TTSDestination : uint8_t
{
	TTSDestination__Default                                                          = 0,
	TTSDestination__RemoteTransmission                                               = 0,
	TTSDestination__LocalPlayback                                                    = 1,
	TTSDestination__RemoteTransmissionWithLocalPlayback                              = 2,
	TTSDestination__QueuedRemoteTransmission                                         = 3,
	TTSDestination__QueuedLocalPlayback                                              = 4,
	TTSDestination__QueuedRemoteTransmissionWithLocalPlayback                        = 5,
	TTSDestination__ScreenReader                                                     = 6
};

/// Enum /Script/VivoxCore.PresenceStatus
/// Size: 0x01 (1 bytes)
enum class PresenceStatus : uint8_t
{
	PresenceStatus__Unavailable                                                      = 0,
	PresenceStatus__Available                                                        = 1,
	PresenceStatus__Chat                                                             = 2,
	PresenceStatus__DoNotDisturb                                                     = 3,
	PresenceStatus__Away                                                             = 4,
	PresenceStatus__ExtendedAway                                                     = 5
};

