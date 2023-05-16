#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xos.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void) {
   Display *d;
   Window w;
   XEvent e;
   char text[512];
   int c=0;
   
   int s;
 
   d = XOpenDisplay(NULL);
   if (d == NULL) {
      fprintf(stderr, "x fail\n");
      exit(1);
   }
 
   s = DefaultScreen(d);
   w = XCreateSimpleWindow(d, RootWindow(d, s), 0, 0, 300, 200, 1,
                           0x1010FF, 0x0000ff);
XStoreName(d,w,"hello word");
   XSelectInput(d, w, ExposureMask | KeyPressMask);
   XMapWindow(d, w);
   
     Atom WM_DELETE_WINDOW = XInternAtom(d, "WM_DELETE_WINDOW", False); 
  XSetWMProtocols(d, w, &WM_DELETE_WINDOW, 1);  

    
 
   while (1) {
      XNextEvent(d, &e);
      if (e.type == Expose) {
      }
      
    if (e.type == KeyPress){
	 char buf[128] = {0};
      KeySym keysym;
      int len = XLookupString(&e.xkey, buf, sizeof buf, &keysym, NULL);
      

      if (keysym == XK_Escape)break;
    

} 
    if ((e.type == ClientMessage) && 
        (e.xclient.data.l[0] == (long)XInternAtom(d, "WM_DELETE_WINDOW", False))) {
            break;
    
      
    }

      
   }
	XDestroyWindow(d, w); 
   XCloseDisplay(d);
   return 0;
}
