PORTNAME=	vimb
DISTVERSION=	3.7.0
PORTREVISION=	3
CATEGORIES=	www

MAINTAINER=	mew14930xvi@inbox.lv
COMMENT=	Vim like browser
WWW=		https://fanglingsu.github.io/vimb/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libsoup-2.4.so:devel/libsoup \
		libwebkit2gtk-4.0.so:www/webkit2-gtk@40

USES=		compiler:c11 desktop-file-utils gmake gnome pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	fanglingsu
USE_GNOME=	glib20 gtk30

MAKE_ARGS=	V=1 \
		version="${DISTVERSION}"
LDFLAGS+=	-Wl,--as-needed

PLIST_FILES=	bin/vimb \
		lib/vimb/webext_main.so \
		share/applications/vimb.desktop \
		share/man/man1/vimb.1.gz \
		share/metainfo/vimb.metainfo.xml

OPTIONS_DEFINE=	GSTREAMER
GSTREAMER_USES=	gstreamer
GSTREAMER_USE=	GSTREAMER=good,libav

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/vimb \
		${STAGEDIR}${PREFIX}/lib/vimb/webext_main.so

.include <bsd.port.mk>
