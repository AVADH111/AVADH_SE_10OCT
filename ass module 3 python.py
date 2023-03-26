# Module – 3 (Collections, functions and Modules)

# What is List? How will you reverse a list?
# Lists are used to store multiple items in a single variable. Lists are one of 4 built-in data types in Python used to store collections of data, the other 3 are Tuple, Set, and Dictionary, all with different qualities and usage.A built-in function called reverse() is used to reverse the list. 


# How will you remove last object from a list? Suppose list1 is [2, 33, 222, 14, and 25], what is list1 [-1]?
# By using pop
# list1 = [1,2,3,4,5]
# list1.pop(-1)
# print(list1)  


# Differentiate between append () and extend () methods? 
# append() method adds a single element to the end of the list, while extend() method adds multiple elements to the end of the list.
# append() method modifies the original list by adding the new element as a single item, while extend() method modifies the original list by adding each element of the iterable as individual items to the end of the list.
# l1= [1, 2, 3]
# l2 = [4, 5, 6]
# l1.append(l2)
# print(l1)  
# l1.extend(l2)
# print(l1)  


# Write a Python function to get the largest number, smallest num and sum of all from a list.
# def list(input_list):
#     if len(input_list) == 0:
#         return None, None, None
#     else:
#         max_num = max(input_list)
#         min_num = min(input_list)
#         total_sum = sum(input_list)
#         return max_num, min_num, total_sum
# input_list = [22,33,44,55,66]
# max_num, min_num, total_sum = list(input_list)
# print("Max number:", max_num)  
# print("Min number:", min_num)  
# print("Total sum:", total_sum) 


# How will you compare two lists?
# by == operator
# list1 = [1, 2, 3]
# list2 = [1, 2, 3]
# list3 = [3, 2, 1]
# print(list1 == list2) 
# print(list1 == list3)


# Write a Python program to count the number of strings where the string length is 2 or more and the first and last character are same from a given list of strings. 
# def count_strings(list_of_strings):
#     count = 0
#     for string in list_of_strings:
#         if len(string) >= 2 and string[0] == string[-1]:
#             count += 1
#     return count
# list_of_strings = ['python', 'programming', 'hello', 'madam', 'world', 'list']
# count = count_strings(list_of_strings)
# print(count)  


# Write a Python program to remove duplicates from a list.
# def remove_duplicates(lst):
#     return list(set(lst))
# lst = [1, 2, 3, 2, 4, 5, 1, 3]
# new_list = remove_duplicates(lst)
# print(new_list)  


# Write a Python program to check a list is empty or not.
# def is_list_empty(lst):
#     if not lst:
#         return True
#     else:
#         return False
# lst1 = []
# lst2 = [1, 2, 3]
# print(is_list_empty(lst1))  
# print(is_list_empty(lst2))  


# Write a Python function that takes two lists and returns true if they have at least one common member.
# def has_common_member(list1, list2):
#     for element in list1:
#         if element in list2:
#             return True
#     return False
# list1 = [1,2,3,4,5]
# list2 = [5,6,7,8,9]
# list3 = [10,11,12,13]
# print(has_common_member(list1, list2))  
# print(has_common_member(list1, list3))  


# Write a Python program to generate and print a list of first and last 5 elements where the values are square of numbers between 1 and 30.
# def generate_list():
#     squares_list = [x**2 for x in range(1, 31)]
#     first_five = squares_list[:5]
#     last_five = squares_list[-5:]
#     result_list = first_five + last_five
#     print(result_list)
# generate_list()


# Write a Python function that takes a list and returns a new list with unique elements of the first list. 
# def unique_list(lst):
#     return list(set(lst))
# my_list = [1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7 , 8, 8, 9, 9, 10]
# print(unique_list(my_list))  


# Write a Python program to convert a list of characters into a string.
# def list_to_string(char_list):
#     string = ''.join(char_list)
#     return string
# my_list = ['H', 'e', 'l', 'l', 'o',' ', 'W', 'o', 'r', 'l', 'd', '!']
# string = list_to_string(my_list)
# print(string)  


#  Write a Python program to select an item randomly from a list. 
# import random
# list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
# random_item = random.choice(list)
# print(random_item)


# Write a Python program to find the second smallest number in a list.
# def second_smallest(lst):
#     smallest = min(lst)
#     new_lst = [x for x in lst if x != smallest]
#     second_smallest = min(new_lst)
#     return second_smallest
# my_list = [1,4,5,6,7,8,9,10]
# second_min = second_smallest(my_list)
# print(second_min) 


# Write a Python program to get unique values from a list 
# def unique_list(lst):
#     return list(set(lst))
# my_list = [1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7 , 8, 8, 9, 9, 10]
# print(unique_list(my_list))


#  Write a Python program to check whether a list contains a sub list
# def check_sublist(lst, sublist):
#     lst_str = str(lst)
#     sublist_str = str(sublist)
#     if sublist_str in lst_str:
#         return True
#     else:
#         return False
# my_list = [1, 2, 3, 4, 5, [6, 7, 8], 9, 10]
# sub_list = [6, 7, 8]
# contains_sublist = check_sublist(my_list, sub_list)
# print(contains_sublist)  


# Write a Python program to split a list into different variables
# my_list = [1, 2, 3, 4, 5]
# a, b, c, d, e = my_list
# print(a)  
# print(b)  
# print(c)  
# print(d) 
# print(e)  


#  What is tuple? Difference between list and tuple.
# A tuple is a collection of ordered, immutable elements enclosed in parentheses () and separated by commas. Tuples are similar to lists, but they are immutable, which means that once a tuple is created, you cannot modify its elements.
# Lists are mutable, which means you can add, remove, or modify elements after the list has been created. Tuples, on the other hand, are immutable, which means that once a tuple is created, you cannot modify its elements
# Lists are defined using square brackets [], while tuples are defined using parentheses ().
# Example of a list
# my_list = [1, 2, 3, 4, 5]
# Example of a tuple
# my_tuple = (1, 'two', 3.0, [4, 5])


#  Write a Python program to create a tuple with different data types.
# tuple = ('hello', 42, True, [1, 2, 3], {'a': 1, 'b': 2})
# print(tuple)


#  Write a Python program to create a tuple with numbers
# tuple = (1, 2, 3, 4, 5)
# print(tuple)


#  Write a Python program to convert a tuple to a string.
# tuple = ('h', 'e', 'l', 'l', 'o')
# string = ''.join(tuple)
# print(string)


# Write a Python program to check whether an element exists within a tuple. 
# tuple = ('apple', 'banana', 'cherry', 'orange')
# if 'banana' in tuple:
#     print('banana exists in the tuple')
# else:
#     print('banana does not exist in the tuple')


#  Write a Python program to find the length of a tuple.
# tuple = ('1', '2', '3', '4')
# tuple_length = len(tuple)
# print('The length of the tuple is:', tuple_length)


#  Write a Python program to convert a list to a tuple.
# list = ['apple', 'banana', 'cherry', 'orange']
# tuple = tuple(list)
# print('The tuple converted from the list is:',tuple)


# Write a Python program to reverse a tuple.
# tuple = (1, 2, 3, 4, 5)
# reversed_tuple = tuple[::-1]
# print( reversed_tuple)


#  Write a Python program to replace last value of tuples in a list. 
# my_list = [(1, 2, 3), (4, 5, 6), (7, 8, 9)]
# new_list = []
# for tuple in my_list:
#     new_list.append(tuple[:-1] + (10,))
# print('Original list:', my_list)
# print('New list:', new_list)


#  Write a Python program to find the repeated items of a tuple.
# my_tuple = (1, 2, 3, 2, 4, 5, 3, 6, 2)
# repeated_items = []
# for item in my_tuple:
#     if my_tuple.count(item) > 1 and item not in repeated_items:
#         repeated_items.append(item)
# print('Tuple:', my_tuple)
# print('Repeated items:', repeated_items)


#  Write a Python program to remove an empty tuple(s) from a list of tuples. 
# my_list = [(1, 2), (), (3, 4), (), (5,6), ()]
# new_list = [t for t in my_list if t]
# print("Original list:", my_list)
# print("New list:", new_list)


# Write a Python program to unzip a list of tuples into individual lists.
# my_list = [(1, 'a'), (2, 'b'), (3, 'c')]
# numbers, letters = zip(*my_list)
# print("Original list:", my_list)
# print("Numbers:", numbers)
# print("Letters:", letters)


# Write a Python program to convert a list of tuples into a dictionary.
# list = [("apple", 5), ("banana", 2), ("orange", 7)]
# dict = dict(list)
# print("Original list:", list)
# print("Dictionary:",dict)


#  How will you create a dictionary using tuples in python? 
# To create a dictionary using tuples in Python, you can pass a list of tuples to the dict() constructor function. Each tuple in the list should contain exactly two elements, where the first element is the key and the second element is the value.
# list = [("apple", 5), ("banana", 2), ("orange", 7)]
# dict = dict(list)
# print("Original list:", list)
# print("Dictionary:",dict)