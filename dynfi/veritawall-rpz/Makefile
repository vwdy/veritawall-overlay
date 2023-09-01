# $FreeBSD$

PORTNAME=  	veritawall-rpz
PORTVERSION=	1
PORTREVISION=	4
CATEGORIES=	veritawall
DISTFILES=

MAINTAINER=	oshogbo@VeritaWall.com
COMMENT=	VeritaWall rpz block list

LICENSE=	BSD2CLAUSE

do-extract:

do-build:

do-install:
	mkdir -p ${STAGEDIR}${PREFIX}/share/veritawall/rpz/
	cp -Rvp ${FILESDIR}/conf/* ${STAGEDIR}${PREFIX}/share/veritawall/rpz/

post-install:

.include <bsd.port.mk>
