# $FreeBSD$

PORTNAME=  	veritawall-confs
PORTVERSION=	1
PORTREVISION=	6
CATEGORIES=	veritawall
DISTFILES=

MAINTAINER=	oshogbo@VeritaWall.com
COMMENT=	VeritaWall confs 

LICENSE=	BSD2CLAUSE

do-extract:

do-build:

do-install:
	mkdir -p ${STAGEDIR}/boot/loader.conf.smbios/
	cp -Rvp ${FILESDIR}/conf/* ${STAGEDIR}/boot/loader.conf.smbios/

post-install:

.include <bsd.port.mk>
