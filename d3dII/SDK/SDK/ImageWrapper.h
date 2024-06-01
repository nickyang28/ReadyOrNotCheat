
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Enum /Script/ImageWrapper.EBitmapCSType
/// Size: 0x04 (4 bytes)
enum class EBitmapCSType : uint32_t
{
	EBitmapCSType__BCST_BLCS_CALIBRATED_RGB                                          = 0,
	EBitmapCSType__BCST_LCS_sRGB                                                     = 1934772034,
	EBitmapCSType__BCST_LCS_WINDOWS_COLOR_SPACE                                      = 1466527264,
	EBitmapCSType__BCST_PROFILE_LINKED                                               = 1279872587,
	EBitmapCSType__BCST_PROFILE_EMBEDDED                                             = 1296188740
};

/// Enum /Script/ImageWrapper.EBitmapHeaderVersion
/// Size: 0x01 (1 bytes)
enum class EBitmapHeaderVersion : uint8_t
{
	EBitmapHeaderVersion__BHV_BITMAPINFOHEADER                                       = 0,
	EBitmapHeaderVersion__BHV_BITMAPV2INFOHEADER                                     = 1,
	EBitmapHeaderVersion__BHV_BITMAPV3INFOHEADER                                     = 2,
	EBitmapHeaderVersion__BHV_BITMAPV4HEADER                                         = 3,
	EBitmapHeaderVersion__BHV_BITMAPV5HEADER                                         = 4
};

