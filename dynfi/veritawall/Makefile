PORTNAME=	VeritaWall
DISTVERSION=	1
PORTREVISION=	3
CATEGORIES=	veritawall
DISTFILES=

MAINTAINER=	oshogbo@VeritaWall.com
COMMENT=	Package agregating all the packages required to run VeritaWall Firewall

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	aquantia-atlantic-kmod>=0:net/aquantia-atlantic-kmod \
		iperf3>=0:benchmarks/iperf3 \
		bind916>=0:dns/bind916 \
		ddns>=0:dns/ddns \
		qemu-guest-agent>=0:emulators/qemu@guestagent \
		virtualbox-ose-additions-nox11>=0:emulators/virtualbox-ose-additions-nox11 \
		open-vm-tools-nox11>=0:emulators/open-vm-tools@nox11 \
		rspamd>=0:mail/rspamd \
		net-snmp>=0:net-mgmt/net-snmp \
		nrpe>=0:net-mgmt/nrpe \
		zabbix5-agent>=0:net-mgmt/zabbix5-agent \
		freeradius3>=0:net/freeradius3 \
		frr7>=0:net/frr7 \
		haproxy>=0:net/haproxy \
		siproxd>=0:net/siproxd \
		lcdproc>=0:sysutils/lcdproc \
		autossh>=0:security/autossh \
		beep>=0:audio/beep \
		intel-ix-kmod>=0:net/intel-ix-kmod \
		veritawall-autoconf>=0:veritawall/veritawall-autoconf \
		veritawall-confs>=0:veritawall/veritawall-confs \
		veritawall-lcdd>=0:veritawall/veritawall-lcdd \
		veritawall-rpz>=0:veritawall/veritawall-rpz \
		n2disk>=0:veritawall/n2disk \
		nprobe>=0:veritawall/nprobe \
		ntopng>=0:veritawall/ntopng \
		freeradius3>0:net/freeradius3 \
		outline-ss-server>0:veritawall/outline-ss-server \
		ddclient>=0:dns/ddclient \
		wireguard-tools>=0:net/wireguard-tools \
		${PHP_PKGNAMEPREFIX}opnsense-core>=0:veritawall/opnsense-core

USES=   php:flavors

do-extract:
	${MKDIR} ${WRKSRC}
	touch ${WRKSRC}/Makefile

do-build:
	cd ${WRKSRC}

do-install:

post-install:
	touch ${STAGEDIR}/.veritawall

.include <bsd.port.mk>
