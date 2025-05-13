
ACLOCAL_AMFLAGS = -I .

DIST_SUBDIRS = goffice-bits goffice-bits2 src plugins po user icons tools


SUBDIRS = src plugins po user icons


EXTRA_DIST = \
	AUTHORS \
	BiDiReadme.txt \
	BUILD.TXT \
	COPYING	\
	COPYRIGHT.TXT \
	INSTALL \
	NEWS \
	README \
	ChangeLog \
	abiword.desktop \
	$(appdata_DATA) \
	abiword.keys \
	abiword.png \
	libabiword.pc.in \
	compile-resource \
	lt-compile-resource

DISTCLEANFILES = \
	abiword-$(ABIWORD_SERIES).pc \
	plugin-builtin.m4 \
	plugin-configure.m4 \
	plugin-list.m4 \
	plugin-makefiles.m4

abiword-$(ABIWORD_SERIES).pc: libabiword.pc
	cp $< $@

if TOOLKIT_WIN
zip:
	rm -rf $(PACKAGE)-$(VERSION)
	make DESTDIR=$(abs_builddir)/zip install
	mv zip$(prefix) $(PACKAGE)-$(VERSION)
	cd $(PACKAGE)-$(VERSION)
	zip -r $(PACKAGE)-$(VERSION).zip $(PACKAGE)-$(VERSION) -x \*.a \*.la
	rm -rf $(PACKAGE)-$(VERSION) ./zip
endif

# needed to make sure we don't include .svn directories.
dist-hook:
	rm -rf `find $(distdir) -name .svn`

