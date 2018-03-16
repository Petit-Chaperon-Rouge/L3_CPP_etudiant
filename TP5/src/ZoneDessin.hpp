#ifndef ZDESSIN_HPP
#define ZDESSIN_HPP

#include <gtkmm.h>
#include "FigureGeometrique.hpp"

class ZoneDessin : public Gtk::DrawingArea {
private :
  std::vector<FigureGeometrique*> _figures;

public :
  ZoneDessin();
  ~ZoneDessin();

protected :
  bool on_expose_event(GdkEventExpose* event);
  bool gererClic(GdkEventButton* event);
};

#endif
