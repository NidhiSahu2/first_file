import re
a=""""jhon has scored 89 marks
lisa has scored 45
david has scored 70 marks"""
print(re.findall("\d+",a))
