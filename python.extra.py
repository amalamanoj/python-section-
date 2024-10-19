first_name =input("Enter your first name")
last_name =input("Enter your last name")
name=first_name+" "+last_name
print(name)
first_name_length =len(first_name)
print(first_name_length)
Extracted_last_name=[first_name_length]
print(Extracted_last_name)
 #last_name_length =len(last_name)
#print(last_name_length)
Extracted_first_name=name[:first_name_length]
print(Extracted_first_name)
Extracted_last_name=name[::-1]
print(Extracted_last_name)
