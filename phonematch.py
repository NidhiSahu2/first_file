import re
phn = "222_4555-8337"
if re.search("\d{3}-\d{8}- \d{4}",phn):
    print("it is valid number")
else:
    print("incorrect password")