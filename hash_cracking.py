import hashlib

def read_hash_file():
    with open('hash_values.txt') as f:
        hash_dict = {}
        for line in f:
            hash_val, plain_text = line.strip().split(': ')
            hash_dict[hash_val] = plain_text
        return hash_dict
    
def get_user_hash(): 
    user_hash = input("Enter the hash value: ") 
    return user_hash

def hash_to_plain_text(user_hash, hash_dict): 
    if user_hash in hash_dict: 
        return hash_dict[user_hash] 
    else: 
        return "Hash value not found in hash file"
    
hash_dict = read_hash_file()
user_hash = get_user_hash()
plain_text = hash_to_plain_text(user_hash, hash_dict)
print("Plain text for hash value " + user_hash + " is: " + plain_text)
