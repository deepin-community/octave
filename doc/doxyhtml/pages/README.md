notitle {#mainpage}
=======

Copyright (C) 1996-2024 The Octave Project Developers

See the file COPYRIGHT.md in the top-level directory of this
distribution or <https://octave.org/copyright/>.

Overview
--------

GNU Octave is a high-level interpreted language, primarily intended
for numerical computations.  It provides capabilities for the
numerical solution of linear and nonlinear problems, and for
performing other numerical experiments.  It also provides extensive
graphics capabilities for data visualization and manipulation.  GNU
Octave is normally used through its interactive interface (CLI and
GUI), but it can also be used to write non-interactive programs.
The GNU Octave language is quite similar to Matlab so that most
programs are easily portable.

GNU Octave is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

GNU Octave is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Octave; see the file COPYING.  If not, see
<https://www.gnu.org/licenses/>.

Availability
------------

The latest released version of Octave is always available from
<https://ftp.gnu.org/gnu/octave/> and many mirror sites around the
world.  You may also find links to binary distributions at
<https://www.octave.org/download.html>.  The current development
sources may be found under the Source Code tab on
[Savannah](https://savannah.gnu.org/projects/octave/).

Installation
------------

Octave requires approximately 475 MB of disk storage to unpack and
compile from source (significantly more, 3.8 GB, if you compile with
debugging symbols).  Once installed, Octave requires approximately
75 MB of disk space (again, considerably more, 415 MB, if you don't
build shared libraries or the binaries and libraries include
debugging symbols).

To compile Octave, you will need a recent version of:

- [GNU Make](https://www.gnu.org/software/make/)
- [GNU G++](https://gcc.gnu.org/) or another C++11 compiler
- [GNU Fortran](https://gcc.gnu.org/fortran/), another Fortran 77
  compiler, or [f2c](http://www.netlib.org/f2c/)

Octave's Makefiles use features of GNU Make that are not present in
other versions of make.  If you use `f2c`, you will need a script
like `fort77` that works like a normal Fortran compiler by combining
`f2c` with your C compiler in a single script.

See the notes in the file `INSTALL.OCTAVE` of the Octave source
distribution for more detailed installation instructions.

Bugs and Patches
----------------

The file `BUGS` (or `doc/interpreter/bugs.txi`) explains the recommended
procedure for reporting bugs on the [bug tracker](https://bugs.octave.org)
or contributing patches; online documentation is also available
[here](https://www.gnu.org/software/octave/bugs.html).

Documentation
-------------

* [Octave's manual](https://www.octave.org/doc/interpreter/) is a
  comprehensive user guide covering introductive and more advanced
  topics.
* [Octave's wiki](https://wiki.octave.org) is a user community page,
  covering various topics and answering
  [FAQ](https://wiki.octave.org/FAQ).
* [Octave's Doxygen](https://www.octave.org/doxygen/) documentation
  explains the C++ class libraries.

Partially, the up-to-dateness of the documentation is lagging a bit
behind the development of the software.  If you notice omissions or
inconsistencies, please report them at our bug tracker.  Specific
suggestions for ways to improve Octave and its documentation are
always welcome.  Reports with patches are even more welcome.

Additional Information
----------------------

Up to date information about Octave is available on the WWW at
<https://www.octave.org>, or ask for help via email
<help@octave.org>.
