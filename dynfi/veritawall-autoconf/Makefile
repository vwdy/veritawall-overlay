# $FreeBSD$

PORTNAME=  	veritawall-autoconf
PORTVERSION=	1
PORTREVISION=	1
CATEGORIES=	veritawall
DISTFILES=

MAINTAINER=	oshogbo@VeritaWall.com
COMMENT=	VeritaWall autoconf 

LICENSE=	BSD2CLAUSE

do-extract:

do-build:

do-install:
	mkdir -p ${STAGEDIR}${PREFIX}/etc
	cp -Rvp ${FILESDIR}/etc/* ${STAGEDIR}${PREFIX}/etc
	chmod +x ${STAGEDIR}${PREFIX}/etc/rc.syshook.d/start/*
	chmod +x ${STAGEDIR}${PREFIX}/etc/rc.syshook.d/stop/*
	chmod +x ${STAGEDIR}${PREFIX}/etc/rc.d/*

post-install:

.include <bsd.port.mk>
