//------------------------------------------------------------------------
// Copyright(c) 2022 WeDemBoyz.
//------------------------------------------------------------------------

#pragma once

#include "pluginterfaces/base/funknown.h"
#include "pluginterfaces/vst/vsttypes.h"

namespace MyCompanyName {
//------------------------------------------------------------------------
static const Steinberg::FUID kRoseSynthProcessorUID (0x4A03EF97, 0xF7E557ED, 0xB4EB191D, 0xDA9FE624);
static const Steinberg::FUID kRoseSynthControllerUID (0x1D1A722F, 0x1DC15860, 0xAC124D6E, 0x41169F6A);

#define RoseSynthVST3Category "Fx"

//------------------------------------------------------------------------
} // namespace MyCompanyName
