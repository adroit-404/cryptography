# Cryptography
Cryptography is the science of using secret codes. A **Cryptographer** is someone who uses and
studies secret codes.
But the secret codes deosn't always remains secret, A **Cryptanalyst** is someone who can
hack secret codes and read other people’s encrypted messages. Cryptanalysts are also called **CODE BREAKERS** or **HACKERS**.

## CODES vs CIPHERS
The development of the electric telegraph in the early 19 th century allowed for near-instant communication through wires across continents. This was much faster than sending a horseback rider carrying a bag of letters. However, the telegraph couldn’t directly send written letters drawn on paper. Instead it could send electric pulses. A short pulse is called a “dot” and a long pulse is called a “dash”.
In order to convert these dots and dashes to English letters of the alphabet, an encoding system (or code ) is needed to translate from English to electric pulse code (called
encoding ) and at the other end translate electric pulses to English (called decoding ).
The code to do this over telegraphs (and later, radio) was called Morse Code, and was
developed by Samuel Morse and Alfred Vail. By tapping out dots and dashes with a one-
button telegraph, a telegraph operator could communicate an English message to someone
on the other side of the world almost instantly!
Codes are made to be understandable and publicly available. Anyone should be able to look
up what a code’s symbols mean to decode an encoded message.

### ROT13 Cipher

ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher that replaces a letter with the 13th letter after it, in the alphabet. ROT13 is a special case of the Caesar cipher, developed in ancient Rome.
[Read more about it](https://en.wikipedia.org/wiki/ROT13)

![Bank](https://github.com/naumanafsar/cryptography/blob/master/imgs/rot13.png)

### Caesar Cipher

Caesar cipher, also known as Caesar's cipher, the shift cipher, Caesar's code or Caesar shift, is one of the simplest and most widely known encryption techniques. It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet. For example, with a left shift of 3, D would be replaced by A, E would become B, and so on. The method is named after Julius Caesar, who used it in his private correspondence.

The encryption step performed by a Caesar cipher is often incorporated as part of more complex schemes, such as the Vigenère cipher, and still has modern application in the ROT13 system. As with all single-alphabet substitution ciphers, the Caesar cipher is easily broken and in modern practice offers essentially no communication security.
[Read more about it](https://en.wikipedia.org/wiki/Caesar_cipher)
![Bank](https://github.com/naumanafsar/cryptography/blob/master/imgs/caesar-cipher.jpeg)

### ROTATE or Shift

ROTATE is also a simple cipher like Caesar Cipher, the only difference in this rotate cipher is that the user has a special key, that key indicated the number of shifts the user wants to encrypt the message. For example if a user use a key = 13, then it will behave exactly like ROT13 cipher, and if a user enters 3, then it will behave exactly like Caesar's cipher.
![Bank](https://github.com/naumanafsar/cryptography/blob/master/imgs/rotate.jpg)


### Affine Cipher

The affine cipher is a type of mono alphabetic substitution cipher, wherein each letter in an alphabet is mapped to its numeric equivalent, encrypted using a simple mathematical function, and converted back to a letter. The formula used means that each letter encrypts to one other letter, and back again, meaning the cipher is essentially a standard substitution cipher with a rule governing which letter goes to which. As such, it has the weaknesses of all substitution ciphers. Each letter is enciphered with the function (ax + b) mod 26, where b is the magnitude of the shift.
[Read more about it](https://en.wikipedia.org/wiki/Affine_cipher)
