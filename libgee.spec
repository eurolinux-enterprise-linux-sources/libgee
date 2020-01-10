Name:           libgee
Version:        0.20.1
Release:        1%{?dist}
Summary:        GObject collection library

License:        LGPLv2+
URL:            https://wiki.gnome.org/Projects/Libgee
Source0:        https://download.gnome.org/sources/libgee/0.20/libgee-%{version}.tar.xz

BuildRequires:  glib2-devel
BuildRequires:  gobject-introspection-devel

%description
libgee is a collection library providing GObject-based interfaces and
classes for commonly used data structures.

* Traversable
  o Iterable
    + Collection
      - List
        * BidirList
      - Set
        * SortedSet
          o BidirSortedSet
      - MultiSet
      - Queue
        * Deque
    + Map
      - SortedMap
        * BidirSortedMap
  o Iterator
    + BidirIterator
      - BidirListIterator
    + ListIterator
      - BidirListIterator
* MultiMap

The ArrayList, ArrauQueue, ConcurrentLinkedList, ConcurrentSet, HashSet,
HashMap, HashMultiSet, HashMultiMap, LinkedList, PriorityQueue, TreeSet,
TreeMap, TreeMultiSet, and TreeMultiMap classes provide a reasonable sample
implementation of those interfaces. In addition, a set of abstract
classes are provided to ease the implementation of new collections.

Around that, the API provide means to retrieve read-only views,
efficient sort algorithms, simple, bi-directional or index-based mutable
iterators depending on the collection type.

Libgee is written in Vala and can be used like any GObject-based C
library. It's planned to provide bindings for further languages.


%package        devel
Summary:        Development files for %{name}
Requires:       %{name}%{?_isa} = %{version}-%{release}

%description    devel
The %{name}-devel package contains libraries and header files for
developing applications that use %{name}.


%prep
%setup -q


%build
%configure --disable-static
make %{?_smp_mflags}


%check
make check


%install
%make_install
find $RPM_BUILD_ROOT -name '*.la' -exec rm -f {} ';'


%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig


%files
%doc AUTHORS MAINTAINERS NEWS README
%license COPYING
%{_libdir}/*.so.*
%dir %{_libdir}/girepository-1.0
%{_libdir}/girepository-1.0/Gee-0.8.typelib

%files devel
%{_includedir}/*
%{_libdir}/*.so
%{_libdir}/pkgconfig/gee-0.8.pc
%dir %{_datadir}/gir-1.0
%{_datadir}/gir-1.0/Gee-0.8.gir
%dir %{_datadir}/vala
%dir %{_datadir}/vala/vapi
%{_datadir}/vala/vapi/gee-0.8.vapi


%changelog
* Sun Mar 11 2018 Kalev Lember <klember@redhat.com> - 0.20.1-1
- Update to 0.20.1
- Resolves: #1569285

* Wed Oct 12 2016 Kalev Lember <klember@redhat.com> - 0.18.1-1
- Update to 0.18.1
- Resolves: #1387003

* Fri Jan 24 2014 Daniel Mach <dmach@redhat.com> - 0.10.1-3
- Mass rebuild 2014-01-24

* Fri Dec 27 2013 Daniel Mach <dmach@redhat.com> - 0.10.1-2
- Mass rebuild 2013-12-27

* Mon Apr 15 2013 Michel Salim <salimma@fedoraproject.org> - 0.10.1-1
- Update to 0.10.1

* Tue Mar 26 2013 Michel Salim <salimma@fedoraproject.org> - 0.10.0-1
- Update to 0.10.0

* Fri Mar  8 2013 Matthias Clasen <mclasen@redhat.com> - 0.8.5-1
- Update to 0.8.5

* Thu Feb 21 2013 Brian Pepple <bpepple@fedoraproject.org> - 0.8.4-1
- Update to 0.8.4.
- Drop unnecessary define file attr.

* Thu Feb 14 2013 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.8.2-2
- Rebuilt for https://fedoraproject.org/wiki/Fedora_19_Mass_Rebuild

* Fri Nov 16 2012 Michel Salim <salimma@fedoraproject.org> - 0.8.2-1
- Update to 0.8.2
- Drop s390x patch, no longer needed

* Tue Oct 16 2012 Michel Salim <salimma@fedoraproject.org> - 0.8.1-1
- Update to 0.8.1

* Wed Sep 26 2012 Michel Salim <salimma@fedoraproject.org> - 0.8.0-1
- Update to 0.8.0

* Wed Sep  5 2012 Michel Salim <salimma@fedoraproject.org> - 0.7.90-1
- Update to 0.7.90

* Tue Aug 07 2012 Richard Hughes <hughsient@gmail.com> - 0.7.3-1
- Update to 0.7.3

* Thu Jul 19 2012 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.7.2-2
- Rebuilt for https://fedoraproject.org/wiki/Fedora_18_Mass_Rebuild

* Tue Jan 31 2012 Michel Salim <salimma@fedoraproject.org> - 0.7.2-1
- Update to 0.7.2

* Thu Jan 12 2012 Dan Horák <dan[at]danny.cz> - 0.7.1-2
- fix build, see patch comment for details

* Wed Sep 28 2011 Ray <rstrode@redhat.com> - 0.7.1-1
- Update to 0.7.1

* Thu Sep  1 2011 Michel Salim <salimma@fedoraproject.org> - 0.7.0-1
- Update to 0.7.0

* Thu Sep  1 2011 Michel Salim <salimma@fedoraproject.org> - 0.6.1-3
- Move typelib file to main package (# 735081)
- Re-enable unit tests on all Fedora releases
- -devel subpackage no longer depends on vala and gobject-introspection-devel

* Tue Feb 08 2011 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.6.1-2
- Rebuilt for https://fedoraproject.org/wiki/Fedora_15_Mass_Rebuild

* Wed Feb  2 2011 Christopher Aillon <caillon@redhat.com> - 0.6.1-1
- Update to 0.6.1

* Sun Dec 12 2010 Michel Salim <salimma@fedoraproject.org> - 0.6.0-2
- Update spec to support snapshot builds (# 609294)

* Thu Oct 28 2010 Michel Salim <salimma@fedoraproject.org> - 0.6.0-1
- Update to 0.6.0

* Wed Sep 29 2010 jkeating - 0.5.3-2
- Rebuilt for gcc bug 634757

* Thu Sep 23 2010 Michel Salim <salimma@fedoraproject.org> - 0.5.3-1
- Update to 0.5.3
- Rebuild against newer gobject-introspection

* Wed Aug 25 2010 Brian Pepple <bpepple@fedoraproject.org> - 0.5.2-2
- Add BR on gobject-introspection-devel.

* Wed Aug 25 2010 Brian Pepple <bpepple@fedoraproject.org> - 0.5.2-1
- Update to 0.5.2.
- Remove buildroot & clean section. No longer needed.

* Thu Jun 17 2010 Michel Salim <salimma@fedoraproject.org> - 0.5.1-1
- Update to 0.5.1

* Sat Oct  3 2009 Michel Salim <salimma@fedoraproject.org> - 0.5.0-1
- Update to 0.5.0

* Thu Aug 20 2009 Michel Salim <salimma@fedoraproject.org> - 0.3.0-1
- Update to 0.3.0

* Fri Jul 24 2009 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.1.5-2
- Rebuilt for https://fedoraproject.org/wiki/Fedora_12_Mass_Rebuild

* Mon Mar  2 2009 Michel Salim <salimma@fedoraproject.org> - 0.1.5-1
- Update to 0.1.5

* Wed Feb 25 2009 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.1.4-3
- Rebuilt for https://fedoraproject.org/wiki/Fedora_11_Mass_Rebuild

* Sat Dec 13 2008 Michel Salim <salimma@fedoraproject.org> - 0.1.4-2
- Run unit tests only on releases with glib2 >= 2.16

* Sat Dec 13 2008 Michel Salim <salimma@fedoraproject.org> - 0.1.4-1
- Update to 0.1.4

* Mon Aug 25 2008 Michel Salim <salimma@fedoraproject.org> - 0.1.3-1
- Update to 0.1.3

* Tue Feb 19 2008 Fedora Release Engineering <rel-eng@fedoraproject.org> - 0.1.1-3
- Autorebuild for GCC 4.3

* Sun Jan 27 2008 Michel Salim <michel.sylvan@gmail.com> - 0.1.1-2
- Move pkgconfig requirement to -devel subpackage

* Sat Jan 26 2008 Michel Salim <michel.sylvan@gmail.com> - 0.1.1-1
- Initial Fedora package
