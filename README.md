# Blockchain_Hashing

Čia yra hashinimo funkcija sukurta Blokug grandiniu technologiju atsiskaitymui

## Pseudokodas

Pati funckija veikia taip kad:

``` c++
Function hashing(input: string) -> string
    Create array val[64]
    size = length of input

    // Initialize first value
    val[0] = calculation using first and second-to-last input characters

    If size < 64:
        For i from 1 to 63:
            val[i] = calculation using input and previous val
            If val[i] equals val[i-1]:
                Increment val[i] (modulo 16)
    Else:
        For i from 1 to size-1:
            val[i % 64] = calculation using input and previous val
            If val[i % 64] equals val[(i-1) % 64]:
                Increment val[i % 64] (modulo 16)

    Convert val array to hexadecimal string
    Return the hex string
End Function
```

Salt funkcija taip:
```c++
Function salt(input: string)
    CHARACTERS = "{|}~`_^]@?>=<;:.-,+*)('&%$#!["
    For 5 times:
        Pick a random character from CHARACTERS
        Append it to input
End Function
```

#Ekspermentinis tyrimas