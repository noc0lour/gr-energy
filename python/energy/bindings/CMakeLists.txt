# Copyright 2020 Free Software Foundation, Inc.
#
# This file is part of GNU Radio
#
# SPDX-License-Identifier: GPL-3.0-or-later
#

########################################################################
# Check if there is C++ code at all
########################################################################
if(NOT energy_sources)
    MESSAGE(STATUS "No C++ sources... skipping python bindings")
    return()
endif(NOT energy_sources)

########################################################################
# Check for pygccxml
########################################################################
GR_PYTHON_CHECK_MODULE_RAW(
    "pygccxml"
    "import pygccxml"
    PYGCCXML_FOUND
    )

include(GrPybind)

########################################################################
# Python Bindings
########################################################################

list(APPEND energy_python_files
    show_energy_python.cc python_bindings.cc)

GR_PYBIND_MAKE_OOT(energy
   ../../..
   gr::energy
   "${energy_python_files}")

# copy bindings extension for use in QA test module
add_custom_command(TARGET energy_python POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:energy_python>
    ${PROJECT_BINARY_DIR}/test_modules/gnuradio/energy/
)

install(TARGETS energy_python DESTINATION ${GR_PYTHON_DIR}/gnuradio/energy COMPONENT pythonapi)
