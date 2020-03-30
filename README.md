# Resident Evil 2 - beta2 dump

Debug symbol dump created from playstation1 game CD.


* IDA symbol python script
* CPP header


## Use for IDA

Run `python2 marge.py` -> Generate file 'all.py'

Run IDA -> Decompile 'PSX.EXE'   
        -> File -> Script File...   
        -> Select 'all.py'  


## MD5

* PSX.EXE: `feb64f3a4ad8651b367f6e257bdf707f`
* MAIN.SYM: `3bee1fa8604738f1122d40827a54fffe`


## Dump Tool

* see https://github.com/sanctuary/sym


Ignored errors:

1. "support for symbol type *sym.EndSLD not yet implemented"
2. "unable to locate overlay with ID 0"