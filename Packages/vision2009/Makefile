PROJECT_TARGET = _vision2009.pyd
PROJECT_OBJECTS = sip_vision2009cmodule.o
PROJECT_OBJECTS += sip_vision2009ColorReport.o
PROJECT_OBJECTS += sip_vision2009ParticleAnalysisReport.o
PROJECT_OBJECTS += sip_vision2009TrackingThreshold.o

PROJECT_OBJECTS += Vision2009/AxisCamera.o
PROJECT_OBJECTS += Vision2009/BaeUtilities.o
PROJECT_OBJECTS += Vision2009/FrcError.o
PROJECT_OBJECTS += Vision2009/TrackAPI.o
PROJECT_OBJECTS += Vision2009/VisionAPI.o

ADDED_INCLUDES = -I../sip -I../wpilib -I../wpilib/WPILib -I../wpilib/WPILib/CInterfaces
ADDED_CFLAGS = -D'SVN_REV="2993"'
ADDED_C++FLAGS = -D'SVN_REV="2993"'

include ../../mk/module.mk

dist ::
	cp *.py $(DISTDIR)/
