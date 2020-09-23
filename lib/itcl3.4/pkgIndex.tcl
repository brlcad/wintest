if {![package vsatisfies [package provide Tcl] 8.6]} return
package ifneeded itcl 3.4 [list load [file join $dir .. .. "bin" itcl.dll] Itcl]
package ifneeded Itcl 3.4 [list load [file join $dir .. .. "bin" itcl.dll] Itcl]
