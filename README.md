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
# Ekspermentinis tyrimas

## 1. Pasiruošk testinius failus:

| Eilučių kiekis | Hashinimo laikas |
|----------------|------------------|
| 1              | 0.000917         |
| 2              | 0.000914         |
| 4              | 0.001007         |
| 8              | 0.00103          |
| 16             | 0.001578         |
| 32             | 0.002077         |
| 64             | 0.002533         |
| 128            | 0.006013         |
| 256            | 0.007133         |
| 512            | 0.014142         |
| 789            | 0.020754         |