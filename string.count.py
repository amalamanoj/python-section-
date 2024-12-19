'''
Author:Amala Manoj
Date:19-12-2024
'''
string="I Love Python"
ch_count={}
for ch in string.split():
    if ch not in ch_count.keys():

       ch_count[ch]=string.count(ch)
print(ch_count)
