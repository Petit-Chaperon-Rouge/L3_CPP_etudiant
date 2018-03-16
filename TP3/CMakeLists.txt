cmake_minimum_required( VERSION 3.0 )
project( TP_CPP )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED gtkmm-2.4 cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )

add_executable( main.out
  src/main.cpp 
  src/Client.cpp 
  src/Produit.cpp 
  src/Location.cpp 
  src/Magasin.cpp )
target_link_libraries( main.out ${PKG_LIBRARIES} )
