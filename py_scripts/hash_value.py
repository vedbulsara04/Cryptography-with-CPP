import hashlib

# Hash in SHA-1
str3hash = input("Enter a string : ")
result3 = hashlib.sha1(str3hash.encode())
print("The hash value in SHA-1 is : ", end="")
print(result3.hexdigest())

# Hash in SHA-256.
str2hash = input("Enter a string : ")
result2 = hashlib.sha256(str2hash.encode())
print("The hash value in SHA-256 is : ", end="")
print(result2.hexdigest())

# Hash in MD5.
str1hash = input("Enter a string : ")
result1 = hashlib.md5(str1hash.encode())
print("The hash value in MD5 is : ", end ="")
print(result1.hexdigest())
