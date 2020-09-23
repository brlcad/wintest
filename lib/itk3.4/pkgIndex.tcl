if {![package vsatisfies [package provide Tcl] 8.6]} return
if {[string length [package provide Itcl]] && ![package vsatisfies [package provide Itcl] 4.1]} return
package ifneeded itk 3.4 [list load [file join $dir .. .. "bin" itk.dll] Itk]
package ifneeded Itk 3.4 [list load [file join $dir .. .. "bin" itk.dll] Itk]
