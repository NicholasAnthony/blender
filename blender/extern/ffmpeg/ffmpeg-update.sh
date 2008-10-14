#!/bin/sh

echo "*** FFMPEG-SVN Update utility"
echo "*** This gets a new ffmpeg-svn tree and adapts it to blenders build structure"
echo "*** Warning! This script will wipe all of ffmpeg/lib*..."
echo "*** Please run again with --i-really-know-what-im-doing ..."

if [ "x$1" = "x--i-really-know-what-im-doing" ] ; then
   echo proceeding...
else
   exit -1
fi

mkdir ffmpeg

svn checkout svn://svn.mplayerhq.hu/ffmpeg/trunk ffmpeg

rm -rf `find ffmpeg/ -type d -name ".svn"`

for i in "lib*" ; do
    rm -f `find $i -name "*.[chS]"`
done

for i in "ffmpeg/lib*" ; do
    cp -r $i .
done

cp ffmpeg/configure .


