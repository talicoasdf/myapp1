#-------------------------------------------------
#
# Project generated by QtCreator for SyberOS.
#
#-------------------------------------------------
include (syberos.pri)
TEMPLATE = subdirs

SUBDIRS += app tests

res.files = res
res.path = $$INSTALL_DIR/

meta.files = META-INF
meta.path = $$INSTALL_DIR/

syber.files = sopconfig.xml
syber.path = $$INSTALL_DIR/

INSTALLS += res meta syber
