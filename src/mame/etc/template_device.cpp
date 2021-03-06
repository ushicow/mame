// license:BSD-3-Clause
// copyright-holders:<author_name>
/***************************************************************************

Template for skeleton device

***************************************************************************/

#include "emu.h"
#include "xxx.h"



//**************************************************************************
//  GLOBAL VARIABLES
//**************************************************************************

// device type definition
DEFINE_DEVICE_TYPE(XXX, xxx_device, "xxx", "XXX")


//**************************************************************************
//  LIVE DEVICE
//**************************************************************************

//-------------------------------------------------
//  xxx_device - constructor
//-------------------------------------------------

xxx_device::xxx_device(const machine_config &mconfig, const char *tag, device_t *owner, uint32_t clock)
	: device_t(mconfig, XXX, tag, owner, clock)
{
}




//-------------------------------------------------
//  device_add_mconfig - device-specific machine
//  configuration addiitons
//-------------------------------------------------

void xxx_device::device_add_mconfig(machine_config &config)
{
	//DEVICE(config, ...);
}


//-------------------------------------------------
//  device_start - device-specific startup
//-------------------------------------------------

void xxx_device::device_start()
{
}


//-------------------------------------------------
//  device_reset - device-specific reset
//-------------------------------------------------

void xxx_device::device_reset()
{
}


//**************************************************************************
//  READ/WRITE HANDLERS
//**************************************************************************

uint8_t xxx_device::read(address_space &space, offs_t offset, uint8_t mem_mask = ~0)
{
	return 0;
}

void xxx_device::write(address_space &space, offs_t offset, uint8_t data, uint8_t mem_mask = ~0)
{
}
