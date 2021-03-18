#!/bin/sh

make -f Makefile.retrofw && mksquashfs bin res licence.txt README.md default.retrofw.desktop pk2.opk -all-root -noappend -no-exports -no-xattrs
