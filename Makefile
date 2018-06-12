# 	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD$

SRCDIR:=${.PARSEDIR:tA}

PROG=	config
MAN=	config.5 config.8
SRCS=	config.y main.c lang.l mkmakefile.c mkheaders.c \
	mkoptions.c y.tab.h kernconf.c

kernconf.c: kernconf.tmpl
	sed s/%%KERNCONFFILE%%/char\ kernconfstr[]\ =\ \{' ',0}\;/g \
		${SRCDIR}/kernconf.tmpl > kernconf.c

CFLAGS+= -I. -I${SRCDIR}

NO_WMISSING_VARIABLE_DECLARATIONS=

LIBADD=	l sbuf

CLEANFILES+=	config.c config.cat? kernconf.c lang.c

mkmakefile.o: configvers.h

.include <bsd.prog.mk>
