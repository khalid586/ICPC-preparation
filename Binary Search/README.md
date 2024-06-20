# Key points
1. [Children holiday](#children-holiday)

## Children holiday

Cautions:

1. Overflow should be handled while mulitiplying time
1. while printing the answers the sum should be exactly equal to m.Have to cut off extras.
```c++
   rep(i,0,sz){
      cout << min(balloonsPerPerson[i],left) << (i == sz - 1 ? "\n":" ");
      left -= balloonsPerPerson[i];
      left = max(0LL,left);
   }
```
3. If you calculate the break from the very first task then we have to handle the remainder carefully.
```c++
    int remainingTime = time % oneCycle;
    count += min(work[i],remainingTime / a[i]);
```

