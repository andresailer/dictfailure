from ROOT import gSystem

result = gSystem.Load("./libdictPlugin")
if result < 0:
  raise Exception('DDG4.py: Failed to load the DDG4 library libDDG4Plugins: ' + gSystem.GetErrorStr())
from ROOT import myProject 

Core = myProject
sim = myProject.dict
d = sim.DictCreation; print(d)
