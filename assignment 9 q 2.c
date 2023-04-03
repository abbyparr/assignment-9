poem = input('string') #take input
unique_list = list()
unique_items = 0
for item in poem:
    if item not in unique_list:
        unique_list.append(item)
        unique_items += 1
            print(unique_items) #print unique words

optional = input('input 1 if you want to know number of most common words.')
if(optional == 1):

    from collections import counter
    common_words = counter(poem).most_common()[-1]
        print(common_words) #print common words (optional)

if(optional != 1):
    print('you do not want to know number of most common words?')
    


