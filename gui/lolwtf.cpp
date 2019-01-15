#include <iostream>

#include <gtkmm/main.h>
#include <gtkmm/button.h>
#include <gtkmm/window.h>

int main(int argc, char** argv)
{
	auto lolwtf = Gtk::Main(argc, argv);
	Gtk::Button *exit = new Gtk::Button("Quit");
	exit->signal_clicked().connect(sigc::ptr_fun(lolwtf.quit));
	Gtk::Window win;
	win.set_default_size(1080, 940);
	win.add(*exit);
	exit->show();
	lolwtf.run(win);
	return(0);
}
