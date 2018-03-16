#ifndef VIEWER_HPP
#define VIEWER_HPP

#include <gtkmm.h>
#include "ZoneDessin.hpp"

class ViewerFigures {
private :
  Gtk::Main _kit;
  Gtk::Window _window;
  ZoneDessin _zdessin;

public :
  ViewerFigures(int argc, char** argv);
  void run();
};

#endif
