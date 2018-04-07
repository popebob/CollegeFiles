/*
 */
import java.awt.*;
import java.applet.*;

/**
 * An interactive test of the Graphics.drawArc and Graphics.fillArc
 * routines. Can be run either as a standalone application by
 * typing "java FS2" or as an applet in the AppletViewer.
 */
public class FS2 extends Applet {
    ArcControls controls;
    public void init() {
	setLayout(new BorderLayout());
	TheCanvas c = new TheCanvas();
	add("Center", c);
	add("South", controls = new ArcControls(c));
    }

    public void start() {
	controls.enable();
    }

    public void stop() {
	controls.disable();
    }

    public boolean handleEvent(Event e) {
	if (e.id == Event.WINDOW_DESTROY) {
	    System.exit(0);
	}
	return false;
    }

    public static void main(String args[]) {
	Frame f = new Frame("Fourier");
	FS2	labEx2 = new FS2();

	labEx2.init();
	labEx2.start();

	f.add("Center", labEx2);
	f.resize(400, 400);
	f.show();
    }
}
    

class TheCanvas extends Canvas {
    Font	font;
    int N_harmonics = 2;

//
//  This is the function that returns a_n (the coefficients of the cosine
//  term in the infinite summation.  Note that this is using the formula
//  given in the notes, as opposed to the formula given in Tanenbaum's book
//  (it's the opposite:  Tanenbaum gives a_n as coefficients of the
//  sine component).

    double a(int n, double A)
    {
//    if ((n % 2) == 1)
//      return (0.0);
//    else
//      return ();
      return(0.0);
    }

//
//  This is the function that returns b_n (the coefficients of the sine
//  component in the infinite summation.  Note that this is using the formula
//  given in the notes, as opposed to the formula given in Tanenbaum's book
//  (it's essentially opposite:  Tanenbaum gives b_n as coefficients of the
//  cosine component).

    double b(int n, double A)
    {
	return (-1.0 / Math.PI / (double) n);
//      if (n%2 == 1)
//        return (1.0/((double) n));
//      else
//        return (0.0);
    }

    double s(double t, double freq, int n, double A)
    {
        return ((a(n,A) * Math.cos(2*Math.PI* (double) n * freq * t)) +
               (b(n,A) * Math.sin(2*Math.PI* (double) n * freq * t)));
    }

    double s_sum(double t, double freq, int n_harmonics, double A) {
      int i;
//
// Substitute your calculated a_0 value here.
//
      double a_0 = 0.5;

      double total = a_0;	// Total starts out as a_0

      for (i = 1; i <= n_harmonics; i++)
        total += s(t,freq,i,A);

      return(total);
    }


    public void paint(Graphics g) {
//
// Whatever the period is, you change it to that value.
// The amplitude may also be an artificial value.
//
//        double T = 2.0 * Math.PI;	// Period, changed by user
        double T = 1.0;			// Period, changed by user
        double A = 1.0;			// Artificial amplitude.

        double freq = 1.0 / T;

        for (int pixel_x = 0 ; pixel_x < size().width ; pixel_x++) {
            double xfirst = (double) pixel_x * 4.0 * T / (double) size().width;
            double xnext = (pixel_x+1) * 4.0 * T / (double) size().width;

            double yfirst = s_sum(xfirst,freq,N_harmonics,A);
            double ynext = s_sum(xnext,freq,N_harmonics,A);

            yfirst = size().height - (yfirst * 50 + 200);
            ynext = size().height - (ynext * 50 +200);
	    g.drawLine(pixel_x, (int) yfirst, pixel_x + 1, (int) ynext);
        }
    }

    public void redraw(int new_n_harmonics) {
        this.N_harmonics = new_n_harmonics;
	repaint();
    }
}

class ArcControls extends Panel {
    TextField s;
    TheCanvas canvas;

    public ArcControls(TheCanvas canvas) {
	this.canvas = canvas;
	add(s = new TextField("2", 4));
	add(new Button("Draw"));
    }

    public boolean action(Event ev, Object arg) {
	if (ev.target instanceof Button) {
	    String label = (String)arg;
	    canvas.redraw(Integer.parseInt(s.getText().trim()));
	    return true;
	}
	return false;
    }
}
