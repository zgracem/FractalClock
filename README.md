# FractalClock

This is a macOS screen saver. The [original version][og] was created in 2007 by
[Rob Mayoff] for Mac OS X 10.4 (Tiger) and later, and unfortunately no longer
works on modern versions of macOS.

[og]: http://www.dqd.com/~mayoff/programs/FractalClock/
[Rob Mayoff]: https://github.com/mayoff

I have modified the [original source][os] so that it will compile in Xcode 12
and the screensaver will run properly under macOS 10.15 (Catalina) and newer.
I've made no other changes to the code, which remains in the public domain.

[os]: http://www.dqd.com/~mayoff/programs/FractalClock/FractalClock-source.dmg

## Issues

1. Uses OpenGL, which was deprecated in macOS 10.14 (Mojave).
2. Perhaps related to #1, on hi-DPI ("retina") screens, it only renders in the
   bottom quarter of the screen.
