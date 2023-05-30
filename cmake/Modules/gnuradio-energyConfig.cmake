find_package(PkgConfig)

PKG_CHECK_MODULES(PC_GR_ENERGY gnuradio-energy)

FIND_PATH(
    GR_ENERGY_INCLUDE_DIRS
    NAMES gnuradio/energy/api.h
    HINTS $ENV{ENERGY_DIR}/include
        ${PC_ENERGY_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    GR_ENERGY_LIBRARIES
    NAMES gnuradio-energy
    HINTS $ENV{ENERGY_DIR}/lib
        ${PC_ENERGY_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
          )

include("${CMAKE_CURRENT_LIST_DIR}/gnuradio-energyTarget.cmake")

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(GR_ENERGY DEFAULT_MSG GR_ENERGY_LIBRARIES GR_ENERGY_INCLUDE_DIRS)
MARK_AS_ADVANCED(GR_ENERGY_LIBRARIES GR_ENERGY_INCLUDE_DIRS)
