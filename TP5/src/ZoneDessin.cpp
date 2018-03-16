#include "ZoneDessin.hpp"
#include "PolygoneRegulier.hpp"

ZoneDessin::ZoneDessin() {

  _figures.push_back(new PolygoneRegulier(Couleur(0, 100, 100), Point(100, 200), 100, 3));
  //  _figures.push_back(new PolygoneRegulier(Couleur(100, 100, 0), Point(1, 0), 3, 5));
  //_figures.push_back(new PolygoneRegulier(Couleur(100, 0, 100), Point(1, 0), 3, 5));

}

ZoneDessin::~ZoneDessin() {}

bool ZoneDessin::on_expose_event(GdkEventExpose* event) {
  Glib::RefPtr<Gdk::Window> window = get_window();
  if(window) {
    Cairo::RefPtr<Cairo::Context> context = window->create_cairo_context();

    for(int i = 0; i < _figures.size(); i++) {
      _figures[i]->afficher(context);
    }
  }
  return true;
}
bool ZoneDessin::gererClic(GdkEventButton* event){}
