PORTNAME=	pam
PORTVERSION=	24.1
CATEGORIES=	sysutils
PKGNAMESUFFIX=	_${GH_ACCOUNT}

MAINTAINER=	ad@yetisense.org
COMMENT=	YETIsense shared authentication system using PAM

LICENSE=	BSD2CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	Christopher-YeTI
GH_PROJECT=	${PORTNAME}_${GH_ACCOUNT}

post-stage:
	${RM} ${STAGEDIR}${PREFIX}/lib/*.a

.include <bsd.port.mk>
