/*
 * $Id$
 *
 * * * * * * * * Legal stuff * * * * * * *
 *
 * (C) 2000 Francesco Chemolli <kinkie@kame.usr.dsi.unimi.it>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 * SQUID Web Proxy Cache          http://www.squid-cache.org/
 * ----------------------------------------------------------
 *
 *  Squid is the result of efforts by numerous individuals from
 *  the Internet community; see the CONTRIBUTORS file for full
 *  details.   Many organizations have provided support for Squid's
 *  development; see the SPONSORS file for full details.  Squid is
 *  Copyrighted (C) 2001 by the Regents of the University of
 *  California; see the COPYRIGHT file for full details.  Squid
 *  incorporates software developed and/or copyrighted by other
 *  sources; see the CREDITS file for full details.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111, USA.
 *
 * * * * * * * * Declaration of intents * * * * * * *
 *
 * Here are defined several known-width types, obtained via autoconf
 * from system locations or various attempts. This is just a convenience
 * header to include which takes care of proper preprocessor stuff
 */

#ifndef _SQUID_TYPES_H_
#define _SQUID_TYPES_H_

#include "autoconf.h"

#ifdef HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif

/* unsigned variants are defined by default by configure */
#if HAVE_GLIB_H
#ifndef int16_t
#define int16_t gint16
#endif
#ifndef int32_t
#define int32_t gint32
#endif
#ifndef int64_t
#define int64_t gint64
#endif
#endif /* HAVE_GLIB_H */

#endif /* _SQUID_TYPES_H_ */