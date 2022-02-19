from collections import Counter

def printNonrepeated(string):

	freq = Counter(string)


	for i in string:
		if(freq[i] == 1):
			print(i)
			break


string = "geeksforgeeks"

printNonrepeated(string)



