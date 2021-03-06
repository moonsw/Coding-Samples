#! /usr/bin/perl

# Find the address of a symbol in the storage map.

use strict qw(refs vars);
use FileHandle;

if ( scalar(@ARGV) != 2) {
  print "Usage: findaddr <storage map> <symbol name>\n";
  exit 1;
}

my $storage = shift @ARGV;
my $symbol = shift @ARGV;

my $fh = new FileHandle("<$storage");
(defined $fh) || die "Couldn't open storage map: $!\n";

while ( <$fh> ) {
  if ( /^\s*(0x([0-9]|[a-f]|[A-F])+)\s+\Q$symbol\E\s*$/ ) {
    print $1, "\n";
    last;
  }
}

$fh->close();
