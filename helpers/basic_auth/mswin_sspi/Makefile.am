#
#  Makefile for the Squid Object Cache server
#
#  $Id$
#
#  Uncomment and customize the following to suit your needs:
#


libexec_PROGRAMS = mswin_auth

mswin_auth_SOURCES = mswin_auth.c valid.c valid.h

LDADD	= -L$(top_builddir)/lib -lnetapi32 -ladvapi32 -lsspwin32 \
          -lmiscutil $(XTRA_LIBS)

INCLUDES = -I$(top_builddir)/include -I$(top_srcdir)/include -I$(top_srcdir)/src

EXTRA_DIST = readme.txt
