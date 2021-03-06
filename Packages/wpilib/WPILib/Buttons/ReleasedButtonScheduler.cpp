/*----------------------------------------------------------------------------*/
/* Copyright (c) FIRST 2011. All Rights Reserved.							  */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in $(WIND_BASE)/WPILib.  */
/*----------------------------------------------------------------------------*/

#include "Buttons/ReleasedButtonScheduler.h"

#include "Buttons/Button.h"
#include "Commands/Command.h"

ReleasedButtonScheduler::ReleasedButtonScheduler(bool last, Button *button, Command *orders) :
	ButtonScheduler(last, button, orders)
{
}

void ReleasedButtonScheduler::Execute()
{
	if (m_button->Grab())
	{
		m_pressedLast = true;
	}
	else
	{
		if (m_pressedLast)
		{
			m_pressedLast = false;
			m_command->Start();
		}
	}
}
