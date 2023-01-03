# Week 1

## Handout:
![[handouts-week1.pdf]]

- epsilon is the empty word
- | is the OR pattern (exclusive)
- E* is zero or more occurrences (so can match epsilon)
- E+ is one or more concatenations (so matches at least the word)
- ? is empty or the word

### Example 1
1. c(bb|ca)* match ccacabb? YES
2. c(bb|ca)* match cbbcacac?YES
3. (c(bb|ca)*)* match cccacacbbcbbca? NO
4. (a|b)c* and ac*|bc* represent the same language? YES
5. Does (a|b)c* and ac* represent the same language? NO
