# Project Name
TARGET = PedalBoi

# Sources
CPP_SOURCES = PedalBoi.cpp

# Library Locations
LIBDAISY_DIR = /Users/elijahrou/Desktop/DaisyExamples/libdaisy
DAISYSP_DIR = /Users/elijahrou/Desktop/DaisyExamples/DaisySP

# Core location, and generic makefile.
SYSTEM_FILES_DIR = $(LIBDAISY_DIR)/core
include $(SYSTEM_FILES_DIR)/Makefile

