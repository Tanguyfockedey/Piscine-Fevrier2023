#!/bin/sh
cat /etc/passwd | grep -v "#" | sed "s/:.*//" | sed -n 'n;p' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | perl -pe 's/\n/, / unless eof; s/\n/./'
#                remove comment, remove eol,     every other, rev word, rev list, from ftline1 to ftline2,     all on one line
#								 cut -d ":" -f1																   p=work like sed, e=execute command