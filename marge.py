import os

newfile = open('all.py','w')
_ct = 1

def loop(name):
  filelist=os.listdir(name)
  
  for item in filelist:
    filepath = name +'/'+ item
    
    if os.path.isdir(filepath):
      loop(filepath)
    elif item.endswith(".py"):
      global _ct
      _ct += 1
      print 'Read', _ct, filepath
      for txt in open(filepath, 'r'):
        newfile.write(txt)
        

loop('./ida')