PORTNAME=	update
PORTVERSION=	25.1
CATEGORIES=	sysutils
PKGNAMEPREFIX=	${GH_ACCOUNT}-

MAINTAINER=	franco@yetisense.org
COMMENT=	YETIsense update utilities
WWW=		https://github.com/Christopher-YeTI/update

LICENSE=	BSD2CLAUSE

LIB_DEPENDS+=	libucl.so:textproc/libucl

USES=		ssl

MAKE_ENV=	UPDATE_RELEASE=${PORTVERSION} UPDATE_FREEBSD=${OSREL}

USE_GITHUB=	yes
GH_ACCOUNT=	${CATEGORIES:[1]}
#GH_TAGNAME=	001a3c2

.include <bsd.port.mk>
