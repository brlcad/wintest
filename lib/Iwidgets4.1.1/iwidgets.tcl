#
# iwidgets.tcl
# ----------------------------------------------------------------------
# Invoked automatically by [incr Tk] upon startup to initialize
# the [incr Widgets] package.
# ----------------------------------------------------------------------
#  AUTHOR: Mark L. Ulferts               EMAIL: mulferts@spd.dsccc.com
#
#  @(#) $Id: iwidgets.tcl.in 77152 2020-09-14 12:21:05Z starseeker $
# ----------------------------------------------------------------------
#                Copyright (c) 1995  Mark L. Ulferts
# ======================================================================
# See the file "license.terms" for information on usage and
# redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.

package require Tcl
package require Tk
package require Itcl
package require Itk

namespace eval ::iwidgets {
    namespace export *

    variable library [file dirname [info script]]
    variable version 4.1.1

    lappend auto_path $iwidgets::library
    variable subdir
    foreach subdir {generic scripts} {
	if {[file isdirectory [file join $iwidgets::library $subdir]]} {
	    lappend auto_path [file join $iwidgets::library $subdir]
	}
    }
    unset subdir
}

package provide Iwidgets $iwidgets::version
