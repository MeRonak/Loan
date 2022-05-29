from hashlib import sha256
import time
maxx = 1000000000
def SHA(test):
    return sha256(test.encode('ascii')).hexdigest()

def numberofnonce(test):
    stringzero = '0'*5;
    for nonce in range(maxx):
        new_hash = SHA(test+str(nonce))
        if new_hash.startswith(stringzero):
            return nonce


test = input("Enter the input here: ")
tic = time.time()
ans = numberofnonce(test)
tac = time.time()-tic
print("Value of nonce for the output to be less than target is :", ans)
print("Time taken in finding the nonce value is: ", tac, "s")