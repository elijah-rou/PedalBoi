# Project Name
TARGET = PedalBoi

# Sources
CPP_SOURCES = PedalBoi.cpp

# Library Locations
LIBDAISY_DIR = ~/Desktop/DaisyExamples/libdaisy
DAISYSP_DIR = ~/Desktop/DaisyExamples/DaisySP

# Core location, and generic makefile.
SYSTEM_FILES_DIR = $(LIBDAISY_DIR)/core
include $(SYSTEM_FILES_DIR)/Makefile

