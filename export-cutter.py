import os
import importlib as I

outfilename = 'cutter/cmd.rc'
cc = open(outfilename,'w')
_ct = 1
SN_NOWARN = 1
space = ''


def set_space(name):
  global space
  if not space == name:
    cc.write("fs "+ name +"\n")
    space = name
  return
    
    
def add_cmd(*parm):
  cc.write(' '.join(parm))
  cc.write('\n')
  return
  
  
def addr_to_fcn(addr):
  return 'fcn.'+ format(addr, 'x')


# set_name(0x80012540, "Cd_init", SN_NOWARN)
def set_name(addr, name, type):
  set_space('symbols')
  add_cmd('f+', name, '0 @', hex(addr))
  #set_space('functions')
  #add_cmd('"fr', addr_to_fcn(addr), name, '"')
  return
  
  
def MakeComm(addr, comm):
  add_cmd('CCa', hex(addr), comm)
  return
  
  
# del_items(0x80012540)
def del_items(addr):
  return
  
  
# SetType(0x80012540, "void Cd_init()")
# SetType(0x800C7900, "struct tagCD Cd")
def SetType(addr, typedef):
  begin = typedef.find('(')
  if begin >= 0:
    end = typedef.index(')', begin)
    add_cmd('Ct', ' '.join(typedef[begin+1 : end].split(',')), '@', hex(addr))
  #elif:
    # struct
  return


def loop(name):
  filelist=os.listdir(name)
  
  for item in filelist:
    filepath = name +'/'+ item
    
    if os.path.isdir(filepath):
      loop(filepath)
    elif item.endswith(".py"):
      global _ct
      _ct += 1
      print 'Exec', _ct, filepath
      execfile(filepath)
        
loop('./ida')
print '..', os.path.abspath(outfilename).replace("\\", '/')