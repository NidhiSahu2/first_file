import re
a="i am pass with 9o marks"
match = re.search("\w{2} s",a)
print(match)

print(match.string)
print(match.end)
