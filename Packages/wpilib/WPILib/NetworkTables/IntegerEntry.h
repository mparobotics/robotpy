/*----------------------------------------------------------------------------*/
/* Copyright (c) FIRST 2011. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in $(WIND_BASE)/WPILib.  */
/*----------------------------------------------------------------------------*/

#ifndef __INTEGER_ENTRY_H__
#define __INTEGER_ENTRY_H__

#include "NetworkTables/Entry.h"
#include "NetworkTables/InterfaceConstants.h"
#include <vxWorks.h>

class NetworkTable;

namespace NetworkTables
{

class Buffer;

class IntegerEntry : public Entry {
public:
	IntegerEntry(int value);
	virtual NetworkTables_Types GetType();
	virtual void Encode(Buffer *buffer);
	virtual int GetInt();

private:
	int m_value;
};

} // namespace

#endif
