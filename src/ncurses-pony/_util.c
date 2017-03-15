struct thin_window {
  int _maxy, _maxx;
};


extern int get_maxx(struct thin_window *w) {
  return w->_maxx;
};

extern int get_maxy(struct thin_window *w) {
  return w->_maxy;
};
