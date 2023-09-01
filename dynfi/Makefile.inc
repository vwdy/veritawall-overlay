# Treat this directory as a pluggable ports category:
THIS_CATEGORY=	veritawall
VALID_CATEGORIES=${THIS_CATEGORY}
CATEGORIES:=	${THIS_CATEGORY} ${CATEGORIES}
PKGORIGIN=	${.CURDIR:S/${PORTSDIR}\///1}
